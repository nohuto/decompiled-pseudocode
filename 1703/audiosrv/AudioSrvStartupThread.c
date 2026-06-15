/*
 * XREFs of AudioSrvStartupThread @ 0x180034D20
 * Callers:
 *     <none>
 * Callees:
 *     ServiceStart @ 0x180034DA8 (ServiceStart.c)
 *     ReportStatusToSCMgr @ 0x1800370BC (ReportStatusToSCMgr.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall AudioSrvStartupThread(PVOID Parameter)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // r9

  v2 = 0LL;
  v3 = ServiceStart(*(struct SERVICE_STATUS_HANDLE__ **)Parameter);
  if ( v3 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_579770171f033cf210c6bb4fbf8d98d3_Traceguids);
    }
    dwServiceError = v3;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, v4);
    SetEvent(hEventShutdown);
  }
  if ( *((_DWORD *)Parameter + 2) )
  {
    do
    {
      HeapFree(hHeap, 0, *(LPVOID *)(*((_QWORD *)Parameter + 2) + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)Parameter + 2) );
  }
  HeapFree(hHeap, 0, *((LPVOID *)Parameter + 2));
  HeapFree(hHeap, 0, Parameter);
  return 0LL;
}
