/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x1400AA0F0
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x1400AA050 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140224C1C (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x140224CD8 (FsRtlCheckNoSharedConflict.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rbx
  LONGLONG QuadPart; // rax
  unsigned __int64 v9; // rsi
  KSPIN_LOCK *v10; // rdi
  unsigned __int64 v11; // rbp
  KIRQL v12; // r15
  PVOID v14; // r13
  PVOID v15; // r14
  __int64 v16; // rax
  BOOLEAN v17; // bl
  BOOLEAN v18; // al
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[4] && !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v9 = StartingByte->QuadPart;
  v10 = LockInformation + 3;
  v19[0] = v9;
  v11 = v9 + QuadPart - 1;
  v20 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( v11 < *LockInformation )
  {
    KxReleaseSpinLock(LockInformation + 3);
    __writecr8(v12);
    return 1;
  }
  v14 = FileObject;
  v15 = ProcessId;
  v16 = *((_QWORD *)FileObject + 15);
  if ( v16
    && v9 >= *(_QWORD *)v16
    && v11 <= *(_QWORD *)(v16 + 40)
    && *(_DWORD *)(v16 + 20) == Key
    && *(PVOID *)(v16 + 32) == ProcessId
    && *(_BYTE *)(v16 + 16) )
  {
    v17 = 1;
  }
  else
  {
    v18 = FsRtlCheckNoSharedConflict(LockInformation + 3, v19, &v20);
    if ( v18 == 1 )
      v18 = FsRtlCheckNoExclusiveConflict(
              (_DWORD)v10,
              (unsigned int)v19,
              (unsigned int)&v20,
              Key,
              (__int64)v14,
              (__int64)v15);
    v17 = v18;
  }
  KxReleaseSpinLock(v10);
  __writecr8(v12);
  return v17;
}
