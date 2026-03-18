/*
 * XREFs of NtSetBootOptions @ 0x14071DED0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x1406905FC (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  char v2; // si
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 p_Length; // rax
  __int64 Length; // rcx
  char *v8; // rcx
  ULONG NextBootEntryId; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx
  int v12; // eax
  ULONG Timeout; // [rsp+34h] [rbp-24h] BYREF
  _DWORD v14[8]; // [rsp+38h] [rbp-20h] BYREF

  v2 = FieldsToChange;
  Timeout = 0;
  v14[0] = 0;
  if ( dword_140344B30 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    p_Length = (__int64)&BootOptions->Length;
    if ( (unsigned __int64)&BootOptions->Length >= 0x7FFFFFFF0000LL )
      p_Length = 0x7FFFFFFF0000LL;
    Length = *(unsigned int *)p_Length;
  }
  else
  {
    Length = BootOptions->Length;
  }
  v14[1] = Length;
  if ( (unsigned int)Length < 0x14 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)BootOptions & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)BootOptions + Length;
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < (char *)BootOptions )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  if ( BootOptions->Version != 1 )
    return -1073741811;
  Timeout = BootOptions->Timeout;
  NextBootEntryId = BootOptions->NextBootEntryId;
  v14[0] = NextBootEntryId;
  if ( (v2 & 2) != 0 && NextBootEntryId > 0xFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = 0;
  if ( (v2 & 1) != 0 )
  {
    v12 = Timeout;
    if ( Timeout == -1 )
    {
      Timeout = 0xFFFF;
    }
    else
    {
      if ( Timeout > 0xFFFE )
        v12 = 65534;
      Timeout = v12;
    }
    v11 = IoSetEnvironmentVariableEx(L"Timeout", (__int64)&EfiBootVariablesGuid, (__int64)&Timeout, 2, 1);
  }
  if ( v11 >= 0 && (v2 & 2) != 0 )
    v11 = IoSetEnvironmentVariableEx(L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)v14, 2, 1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v11;
}
