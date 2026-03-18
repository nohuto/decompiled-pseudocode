/*
 * XREFs of IoGetContainerInformation @ 0x1405ED6D0
 * Callers:
 *     PipCslSessionCallback @ 0x1406D44C0 (PipCslSessionCallback.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     MmGetIoSessionState @ 0x1405ED734 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  __int64 SessionObjectById; // rax
  bool v6; // zf
  int CurrentProcessSessionId; // eax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = (__int64)ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId);
    if ( !SessionObjectById )
      return -1073741584;
  }
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState(SessionObjectById, &v9);
  v6 = v9 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v9;
  *((_BYTE *)Buffer + 8) = v6;
  return 0;
}
