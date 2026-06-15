/*
 * XREFs of ServiceCtrl @ 0x1800ABE90
 * Callers:
 *     <none>
 * Callees:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800A1DD4 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ReportStatusToSCMgr @ 0x1800ABDC8 (ReportStatusToSCMgr.c)
 *     ServicePowerEvent @ 0x1800AD2C4 (ServicePowerEvent.c)
 */

__int64 __fastcall ServiceCtrl(
        DWORD dwControl,
        __int64 dwEventType,
        struct tagWTSSESSION_NOTIFICATION *lpEventData,
        LPVOID lpContext)
{
  unsigned int v4; // edi
  DWORD v6; // ecx
  DWORD v7; // ecx
  DWORD v8; // ecx
  __int64 v9; // rcx

  v4 = dwEventType;
  v6 = dwControl - 1;
  if ( !v6 )
    goto LABEL_11;
  v7 = v6 - 3;
  if ( !v7 )
  {
    ReportStatusToSCMgr(ssStatus.dwCurrentState, 0, 0);
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_11:
    dwServiceError = 0;
    ReportStatusToSCMgr(3u, 0, 0x1388u);
    SetEvent(hEventShutdown);
    return 0LL;
  }
  v9 = v8 - 8;
  if ( !(_DWORD)v9 )
    return ServicePowerEvent((unsigned int)dwEventType, lpEventData, lpEventData, lpContext);
  if ( (_DWORD)v9 != 1 )
    return 120LL;
  if ( (unsigned int)IsTSServiceSessionChangeSupported(v9, dwEventType, lpEventData, lpContext) )
  {
    TS_SessionChanged(v4, lpEventData);
    PostSessionEvent(v4, lpEventData);
  }
  return 0LL;
}
