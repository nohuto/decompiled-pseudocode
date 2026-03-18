/*
 * XREFs of TtmiLogError @ 0x1406535C4
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140653570 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 *     TtmNotifyDeviceArrival @ 0x1407704C0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407707B0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140770870 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1407709D4 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x140770B7C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpCallAssignedToTerminal @ 0x140770DF0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x140770F20 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140770FC8 (TtmpCallSetInputMode.c)
 *     TtmpPushTerminalState @ 0x140771654 (TtmpPushTerminalState.c)
 *     TtmiCreateTerminal @ 0x1407719C4 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x140771C84 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x140771FE0 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x140772A3C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x140772AA0 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x140772CD8 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x140772D70 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x140772DE4 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140772E60 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140772FA4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140773034 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1407730CC (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x140773184 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x140773298 (TtmiSessionsRundown.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407733B8 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x14077343C (TtmiWriteEventToAllQueues.c)
 *     TtmpSessionWorker @ 0x1407736B0 (TtmpSessionWorker.c)
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140773CB0 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x140773E10 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140773EC4 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140773FB8 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407740A8 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x14077415C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140774220 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1407742C0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x140774378 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140774438 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x1407745A4 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x14077473C (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407748B0 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall TtmiLogError(LPCSTR psz, int a2, int a3, int a4)
{
  int ProcessSessionId; // eax
  int v9; // r9d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_14086120C || dword_14086120C == a2)
    && (!dword_140861210 || dword_140861210 == a3)
    && (!dword_140861214 || dword_140861214 == a4) )
  {
    __debugbreak();
  }
  if ( stru_140861840.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140861840, 2uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v10 = ProcessSessionId;
      v11 = a2;
      v15 = &v10;
      v12 = a3;
      v13 = a4;
      v16 = 4;
      TlgCreateSz(&pDesc, psz);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v22 = &v12;
      v25 = &v13;
      v19 = &v11;
      v20 = v9;
      v23 = v9;
      v26 = v9;
      TlgWrite(&stru_140861840, &unk_14030D645, 0LL, 0LL, 7u, &pData);
    }
  }
}
