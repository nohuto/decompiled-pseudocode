/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x1400AA290
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1400AA200 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140224C1C (FsRtlCheckNoExclusiveConflict.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rbx
  LONGLONG QuadPart; // rax
  unsigned __int64 v10; // rbp
  KSPIN_LOCK *v11; // rdi
  unsigned __int64 v12; // r14
  KIRQL v13; // si
  unsigned __int64 *LastLock; // rax
  BOOLEAN v15; // bl
  unsigned __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v10 = StartingByte->QuadPart;
  v11 = LockInformation + 3;
  v16 = v10;
  v12 = v10 + QuadPart - 1;
  v17 = v12;
  v13 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( v12 < *LockInformation )
  {
    KxReleaseSpinLock(LockInformation + 3);
    __writecr8(v13);
    return 1;
  }
  LastLock = (unsigned __int64 *)FileObject->LastLock;
  if ( LastLock
    && v10 >= *LastLock
    && v12 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    v15 = 1;
  }
  else
  {
    v15 = FsRtlCheckNoExclusiveConflict(
            (int)LockInformation + 24,
            (unsigned int)&v16,
            (unsigned int)&v17,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
  }
  KxReleaseSpinLock(v11);
  __writecr8(v13);
  return v15;
}
