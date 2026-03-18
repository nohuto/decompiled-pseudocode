/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x140653884
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtSetDefaultHardErrorPort(HANDLE PortHandle)
{
  _DWORD *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( CurrentServerSiloGlobals[224] == 1 )
    return -1073741823;
  result = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  *((_QWORD *)CurrentServerSiloGlobals + 111) = Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 1;
    CurrentServerSiloGlobals[224] = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)CurrentServerSiloGlobals + 110) = Process;
    ObfReferenceObject(Process);
    return 0;
  }
  return result;
}
