/*
 * XREFs of NtQueryDriverEntryOrder @ 0x14071D67C
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
 */

NTSTATUS __stdcall NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
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
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  struct _MDL *v16; // [rsp+40h] [rbp-28h] BYREF
  ULONG v17; // [rsp+88h] [rbp+20h] BYREF

  if ( dword_140344B30 != 2 )
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
    result = ExLockUserBuffer((unsigned __int64)Ids, v17, PreviousMode, IoWriteAccess, &v15, &v16);
    if ( result < 0 )
      return result;
  }
  else
  {
    v15 = 0LL;
    v16 = 0LL;
  }
  v17 >>= 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", &EfiDriverVariablesGuid, v15, &v17, 0LL);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
  if ( v16 )
  {
    ExUnlockUserBuffer(v16);
    v14 = v17;
  }
  *Count = v14 >> 2;
  return EnvironmentVariable;
}
