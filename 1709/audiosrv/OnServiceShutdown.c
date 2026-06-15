/*
 * XREFs of OnServiceShutdown @ 0x1800ABC00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 *     ?MyServiceTerminate@@YAXXZ @ 0x1800AC9D0 (-MyServiceTerminate@@YAXXZ.c)
 */

__int64 OnServiceShutdown()
{
  HANDLE v0; // rbx
  DWORD CurrentProcessId; // eax
  char *v2; // rcx
  DWORD v3; // eax
  DWORD ThreadId; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    CurrentProcessId = GetCurrentProcessId();
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_579770171f033cf210c6bb4fbf8d98d3_Traceguids,
      CurrentProcessId);
  }
  hEventShutdownComplete = CreateEventW(0LL, 1, 0, 0LL);
  if ( hEventShutdownComplete )
    v0 = CreateThread(0LL, 0LL, ShutdownKeepaliveThread, 0LL, 0, &ThreadId);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
  }
  MyServiceTerminate();
  if ( hEventShutdownWait )
    UnregisterWaitEx(hEventShutdownWait, 0LL);
  if ( hEventShutdown )
    CloseHandle(hEventShutdown);
  v2 = (char *)hEventShutdownComplete;
  if ( hEventShutdownComplete )
  {
    SetEvent(hEventShutdownComplete);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( v0 )
  {
    WaitForSingleObject(v0, 0xFFFFFFFF);
    if ( v0 != (HANDLE)-1LL )
      CloseHandle(v0);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    hEventShutdownComplete = 0LL;
  }
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v3 = GetCurrentProcessId();
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_579770171f033cf210c6bb4fbf8d98d3_Traceguids, v3);
  }
  return ReportStatusToSCMgr(1LL, (unsigned int)dwServiceError, 0LL);
}
