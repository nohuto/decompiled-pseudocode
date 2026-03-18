/*
 * XREFs of IoGetContainerInformation @ 0x14068C5E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     MmGetIoSessionState @ 0x1406B6690 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  __int64 SessionObjectById; // rax
  bool v7; // zf
  int v8; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = (__int64)ContainerObject;
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
  v7 = v8 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v8;
  *((_BYTE *)Buffer + 8) = v7;
  return 0;
}
