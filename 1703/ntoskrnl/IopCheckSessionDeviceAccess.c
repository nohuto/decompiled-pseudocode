/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x1401F43D0
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     IopGetSessionIdFromPDO @ 0x1404A6410 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // ebx
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  if ( SessionId == -1 )
    SessionId = 0;
  result = 1;
  if ( SessionId != **((_DWORD **)PsGetServerSiloGlobals(-1LL) + 134) || IopSessionZeroAccessCheckEnabled )
  {
    SessionIdFromPDO = IopGetSessionIdFromPDO(a1);
    if ( SessionIdFromPDO != -1 && SessionId != SessionIdFromPDO )
      return 0;
  }
  return result;
}
