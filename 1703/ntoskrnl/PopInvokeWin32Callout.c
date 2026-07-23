/*
 * XREFs of PopInvokeWin32Callout @ 0x1404C5D90
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140070CB4 (PopGetConsoleDisplayRequestCount.c)
 *     PopEventCalloutDispatch @ 0x14014B6E4 (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x140236DD0 (PoSessionBuiltinPanelState.c)
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x140575AAC (PopNotifyConsoleUserPresent.c)
 *     PopNotifySessionDisplayRequired @ 0x140585940 (PopNotifySessionDisplayRequired.c)
 *     PopBroadcastSessionInfo @ 0x1405A8304 (PopBroadcastSessionInfo.c)
 *     PopControlMonitor @ 0x1406CB600 (PopControlMonitor.c)
 *     PopNotifyCsStateExited @ 0x1406CB680 (PopNotifyCsStateExited.c)
 *     PoSessionPowerControl @ 0x1406D4864 (PoSessionPowerControl.c)
 *     PopNotifyConsoleDisplayBurst @ 0x1406D48F0 (PopNotifyConsoleDisplayBurst.c)
 *     PopSendSessionInfo @ 0x1406D497C (PopSendSessionInfo.c)
 * Callees:
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     ZwPowerInformation @ 0x14017EB20 (ZwPowerInformation.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopInvokeWin32Callout(unsigned int a1, __int64 a2, unsigned int a3, int *a4)
{
  int v4; // esi
  char v7; // r14
  unsigned int v8; // r12d
  struct _KPROCESS *NextSession; // rbx
  unsigned int v10; // r12d
  __int64 OutputBuffer; // [rsp+40h] [rbp-41h] BYREF
  _QWORD InputBuffer[18]; // [rsp+48h] [rbp-39h] BYREF

  v4 = 0;
  OutputBuffer = 0LL;
  v7 = 0;
  v8 = 0;
  memset(InputBuffer, 0, 0x60uLL);
  LODWORD(InputBuffer[0]) = 21;
  if ( ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u) >= 0 )
  {
    NextSession = (struct _KPROCESS *)MmGetNextSession(0LL);
    do
    {
      if ( a3 == 2 && NextSession )
      {
        v10 = 1;
        MmGetSessionId(NextSession);
        NextSession = (struct _KPROCESS *)MmGetNextSession(NextSession);
        if ( !NextSession )
          v7 = 1;
      }
      else
      {
        v7 = 1;
        v10 = a3;
        if ( a4 )
          v4 = *a4;
        else
          v4 = -1;
      }
      memset(InputBuffer, 0, 0x60uLL);
      InputBuffer[1] = OutputBuffer;
      LODWORD(InputBuffer[0]) = 21;
      LODWORD(InputBuffer[2]) = 8000;
      HIDWORD(InputBuffer[2]) = v4;
      LODWORD(InputBuffer[3]) = 417;
      InputBuffer[4] = KeGetCurrentThread();
      InputBuffer[10] = InputBuffer;
      InputBuffer[9] = PopWin32CalloutWatchdogCallbackLiveDump;
      ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      v8 = PsInvokeWin32Callout(a1, a2, v10);
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
