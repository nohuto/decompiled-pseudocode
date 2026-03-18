/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x140109390
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x140109300 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401E75E0 (FsRtlCheckNoExclusiveConflict.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  KIRQL v12; // r14
  unsigned __int64 *LastLock; // rax
  BOOLEAN v14; // bl
  unsigned __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v10 = StartingByte->QuadPart;
  v15 = v10;
  v11 = v10 + QuadPart - 1;
  v16 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( v11 < *LockInformation )
  {
    KxReleaseSpinLock(LockInformation + 3);
    __writecr8(v12);
    return 1;
  }
  LastLock = (unsigned __int64 *)FileObject->LastLock;
  if ( LastLock
    && v10 >= *LastLock
    && v11 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    v14 = 1;
  }
  else
  {
    v14 = FsRtlCheckNoExclusiveConflict(
            (int)LockInformation + 24,
            (unsigned int)&v15,
            (unsigned int)&v16,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
  }
  KxReleaseSpinLock(LockInformation + 3);
  __writecr8(v12);
  return v14;
}
