/*
 * XREFs of PopInvokeWin32Callout @ 0x14051D0D8
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140074B28 (PopGetConsoleDisplayRequestCount.c)
 *     PopEventCalloutDispatch @ 0x14016E560 (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x140281F60 (PoSessionBuiltinPanelState.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x1405E9A30 (PopNotifyConsoleUserPresent.c)
 *     PopControlMonitor @ 0x1405EEFF0 (PopControlMonitor.c)
 *     PopNotifySessionDisplayRequired @ 0x140613950 (PopNotifySessionDisplayRequired.c)
 *     PopBroadcastSessionInfo @ 0x14064E8EC (PopBroadcastSessionInfo.c)
 *     PopNotifyCsStateExited @ 0x140764EE0 (PopNotifyCsStateExited.c)
 *     PoSessionPowerControl @ 0x14076DBA8 (PoSessionPowerControl.c)
 *     PopSendSessionInfo @ 0x14076DC34 (PopSendSessionInfo.c)
 * Callees:
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x140074C10 (MmGetNextSession.c)
 *     ZwPowerInformation @ 0x1401A80A0 (ZwPowerInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopInvokeWin32Callout(int a1, __int64 a2, int a3, int *a4)
{
  unsigned int v4; // esi
  int v5; // r12d
  char v7; // r14
  int v8; // r13d
  __int64 NextSession; // rax
  __int64 v10; // rbx
  void *v11; // rdi
  int v12; // esi
  int *p_SessionId; // r12
  unsigned int v14; // eax
  __int64 v16; // rax
  int SessionId; // [rsp+38h] [rbp-49h] BYREF
  __int64 OutputBuffer; // [rsp+40h] [rbp-41h] BYREF
  _QWORD InputBuffer[18]; // [rsp+48h] [rbp-39h] BYREF

  SessionId = 0;
  v4 = 0;
  v5 = a3;
  OutputBuffer = 0LL;
  v7 = 0;
  v8 = 0;
  memset(InputBuffer, 0, 0x60uLL);
  LODWORD(InputBuffer[0]) = 21;
  if ( ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u) >= 0 )
  {
    NextSession = MmGetNextSession(0LL);
    v10 = OutputBuffer;
    v11 = (void *)NextSession;
    do
    {
      if ( v5 == 2 && v11 )
      {
        v12 = 1;
        SessionId = MmGetSessionId((__int64)v11);
        p_SessionId = &SessionId;
        v16 = MmGetNextSession(v11);
        v10 = OutputBuffer;
        v11 = (void *)v16;
        if ( !v16 )
          v7 = 1;
      }
      else
      {
        v12 = v5;
        p_SessionId = a4;
        v7 = 1;
        if ( a4 )
          v8 = *a4;
        else
          v8 = -1;
      }
      if ( v10 )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = v10;
        HIDWORD(InputBuffer[2]) = v8;
        LODWORD(InputBuffer[2]) = 1000 * PopWin32kCalloutWatchdogTimeoutSeconds;
        LODWORD(InputBuffer[3]) = 417;
        InputBuffer[4] = KeGetCurrentThread();
        InputBuffer[10] = InputBuffer;
        InputBuffer[9] = PopWin32CalloutWatchdogCallbackLiveDump;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
      v14 = PsInvokeWin32Callout(a1, a2, v12, (__int64)p_SessionId);
      v10 = OutputBuffer;
      v4 = v14;
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
        v10 = OutputBuffer;
      }
      v5 = a3;
    }
    while ( !v7 );
    if ( v10 )
    {
      memset(InputBuffer, 0, 0x60uLL);
      LODWORD(InputBuffer[0]) = 21;
      InputBuffer[1] = v10;
      LOBYTE(InputBuffer[11]) = 1;
      ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    }
  }
  return v4;
}
