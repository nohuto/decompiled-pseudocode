/*
 * XREFs of WinSqmEventWrite @ 0x1C006D1A4
 * Callers:
 *     WinSqmAddToStreamEx @ 0x1C0065880 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0065A6C (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmEndSession @ 0x1C0065EB4 (WinSqmEndSession.c)
 *     WinSqmStartSession @ 0x1C006D038 (WinSqmStartSession.c)
 *     WinSqmAddToStream @ 0x1C00E7580 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00E7780 (WinSqmSetString.c)
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
  if ( *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock )
    return EtwWrite(
             *(REGHANDLE *)&WPP_MAIN_CB.DeviceLock.Header.Lock,
             EventDescriptor,
             &Win32kSQMSession,
             UserDataCount,
             UserData);
  return result;
}
