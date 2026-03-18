/*
 * XREFs of NtQueryBootEntryOrder @ 0x14075CA24
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x1406BBFF0 (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v6; // rcx
  ULONG v7; // ecx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned __int16 *v12; // r9
  _DWORD *i; // r10
  unsigned int v14; // eax
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  if ( dword_14035E690 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Count < 0x7FFFFFFF0000LL )
      v6 = (__int64)Count;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *Count;
    v17 = Ids != 0LL ? v7 : 0;
    if ( v17 )
      ProbeForWrite(Ids, Ids != 0LL ? v7 : 0, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v17 = Ids != 0LL ? 4 * *Count : 0;
  }
  if ( v17 )
  {
    result = ExLockUserBuffer((unsigned __int64)Ids, v17, PreviousMode, IoWriteAccess, &v15, (struct _MDL **)&P);
    if ( result < 0 )
      return result;
  }
  else
  {
    v15 = 0LL;
    P = 0LL;
  }
  v17 >>= 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(L"BootOrder", (__int64)&EfiBootVariablesGuid, v15, &v17, 0LL);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( EnvironmentVariable < 0 )
  {
    if ( EnvironmentVariable == -1073741568 )
    {
      v17 = 0;
      EnvironmentVariable = 0;
    }
  }
  else
  {
    v10 = v17 >> 1;
    v11 = (v17 >> 1) - 1;
    v12 = (unsigned __int16 *)(v15 + 2 * v11);
    for ( i = (_DWORD *)(v15 + 4 * v11); v10; --v10 )
      *i-- = *v12--;
  }
  v14 = 2 * v17;
  v17 *= 2;
  if ( P )
  {
    ExUnlockUserBuffer((struct _MDL *)P);
    v14 = v17;
  }
  *Count = v14 >> 2;
  return EnvironmentVariable;
}
