/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x14071CE24
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1406901D8 (IoEnumerateEnvironmentVariablesEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, ULONG BufferLength)
{
  unsigned int *v3; // rdi
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  SIZE_T v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx
  unsigned int v12; // [rsp+34h] [rbp-34h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  struct _MDL *v14; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(unsigned int **)&BufferLength;
  if ( dword_140344B30 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( *(_QWORD *)&BufferLength < 0x7FFFFFFF0000uLL )
      v8 = *(_QWORD *)&BufferLength;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = **(_DWORD **)&BufferLength & (unsigned int)-(Buffer != 0LL);
    v12 = Buffer != 0LL ? **(_DWORD **)&BufferLength : 0;
    if ( v12 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v12 = Buffer != 0LL ? **(_DWORD **)&BufferLength : 0;
  }
  if ( v12 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v12, PreviousMode, IoWriteAccess, &v13, &v14);
    if ( result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = IoEnumerateEnvironmentVariablesEx(InformationClass, v13, (int *)&v12);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v14 )
    ExUnlockUserBuffer(v14);
  *v3 = v12;
  return v11;
}
