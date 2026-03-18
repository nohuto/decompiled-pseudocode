/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x1401F9F58
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     IopGetSessionIdFromPDO @ 0x14055203C (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // ebx
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( SessionId == -1 )
    SessionId = 0;
  result = 1;
  if ( SessionId != **((_DWORD **)PsGetServerSiloGlobals(-1LL) + 138) || IopSessionZeroAccessCheckEnabled )
  {
    SessionIdFromPDO = IopGetSessionIdFromPDO(a1);
    if ( SessionIdFromPDO != -1 && SessionId != SessionIdFromPDO )
      return 0;
  }
  return result;
}
