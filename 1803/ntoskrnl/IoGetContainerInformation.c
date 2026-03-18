/*
 * XREFs of IoGetContainerInformation @ 0x1406133D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x1400767F0 (PsGetCurrentProcessSessionId.c)
 *     MmGetIoSessionState @ 0x140613434 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  bool v6; // zf
  int v8; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById();
    if ( !SessionObjectById )
      return -1073741584;
  }
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState(SessionObjectById, &v8);
  v6 = v8 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v8;
  *((_BYTE *)Buffer + 8) = v6;
  return 0;
}
