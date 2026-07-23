/*
 * XREFs of PopInvokeWin32Callout @ 0x1404E8B38
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400B1110 (PopGetConsoleDisplayRequestCount.c)
 *     PopEventCalloutDispatch @ 0x14015D3BC (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x14024BFE0 (PoSessionBuiltinPanelState.c)
 *     PopBroadcastSessionInfo @ 0x1405E9064 (PopBroadcastSessionInfo.c)
 *     PopNotifyConsoleUserPresent @ 0x1405EED5C (PopNotifyConsoleUserPresent.c)
 *     PopNotifySessionDisplayRequired @ 0x1405EF3F0 (PopNotifySessionDisplayRequired.c)
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 *     PopControlMonitor @ 0x1406FF5E0 (PopControlMonitor.c)
 *     PopNotifyCsStateExited @ 0x1406FF660 (PopNotifyCsStateExited.c)
 *     PoSessionPowerControl @ 0x14070A1BC (PoSessionPowerControl.c)
 *     PopSendSessionInfo @ 0x14070A248 (PopSendSessionInfo.c)
 * Callees:
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     ZwPowerInformation @ 0x14017E4A0 (ZwPowerInformation.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopInvokeWin32Callout(int a1, __int64 a2, int a3, int *a4)
{
  int v4; // esi
  char v7; // r14
  unsigned int v8; // r12d
  void *NextSession; // rbx
  int v10; // r12d
  int *p_SessionId; // r13
  int SessionId; // [rsp+38h] [rbp-49h] BYREF
  __int64 OutputBuffer; // [rsp+40h] [rbp-41h] BYREF
  _QWORD InputBuffer[18]; // [rsp+48h] [rbp-39h] BYREF

  SessionId = 0;
  v4 = 0;
  OutputBuffer = 0LL;
  v7 = 0;
  v8 = 0;
  memset(InputBuffer, 0, 0x60uLL);
  LODWORD(InputBuffer[0]) = 21;
  if ( ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u) >= 0 )
  {
    NextSession = (void *)MmGetNextSession(0LL);
    do
    {
      if ( a3 == 2 && NextSession )
      {
        v10 = 1;
        SessionId = MmGetSessionId((__int64)NextSession);
        p_SessionId = &SessionId;
        NextSession = (void *)MmGetNextSession(NextSession);
        if ( !NextSession )
          v7 = 1;
      }
      else
      {
        v7 = 1;
        v10 = a3;
        p_SessionId = a4;
        if ( a4 )
          v4 = *a4;
        else
          v4 = -1;
      }
      memset(InputBuffer, 0, 0x60uLL);
      InputBuffer[1] = OutputBuffer;
      LODWORD(InputBuffer[0]) = 21;
      HIDWORD(InputBuffer[2]) = v4;
      LODWORD(InputBuffer[3]) = 417;
      LODWORD(InputBuffer[2]) = 1000 * PopWin32kCalloutWatchdogTimeoutSeconds;
      InputBuffer[4] = KeGetCurrentThread();
      InputBuffer[10] = InputBuffer;
      InputBuffer[9] = PopWin32CalloutWatchdogCallbackLiveDump;
      ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      v8 = PsInvokeWin32Callout(a1, a2, v10, (__int64)p_SessionId);
      memset(InputBuffer, 0, 0x60uLL);
      InputBuffer[1] = OutputBuffer;
      LODWORD(InputBuffer[0]) = 21;
      ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    }
    while ( !v7 );
    memset(InputBuffer, 0, 0x60uLL);
    InputBuffer[1] = OutputBuffer;
    LODWORD(InputBuffer[0]) = 21;
    LOBYTE(InputBuffer[11]) = 1;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
  return v8;
}
