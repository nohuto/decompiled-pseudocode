/*
 * XREFs of WinSqmEventWrite @ 0x1C0096900
 * Callers:
 *     WinSqmEndSession @ 0x1C007639C (WinSqmEndSession.c)
 *     WinSqmAddToStreamEx @ 0x1C00781B0 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00783B4 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmStartSession @ 0x1C0096794 (WinSqmStartSession.c)
 *     WinSqmAddToStream @ 0x1C00ECB60 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00ECD6C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WinSqmEventWrite(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = 1359;
  if ( WPP_MAIN_CB.Reserved )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Reserved, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
