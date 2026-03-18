/*
 * XREFs of TtmiLogError @ 0x1405EA14C
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1405E9F20 (TtmNotifyDeviceArrival.c)
 *     TtmiAcquireCurrentSession @ 0x1405EA044 (TtmiAcquireCurrentSession.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405EA090 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmNotifyDeviceDeparture @ 0x14070D050 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14070D110 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x14070D274 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14070D41C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpCallAssignedToTerminal @ 0x14070D684 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x14070D7B4 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x14070D85C (TtmpCallSetInputMode.c)
 *     TtmpPushTerminalState @ 0x14070DEA8 (TtmpPushTerminalState.c)
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x14070E4C8 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x14070E880 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x14070F268 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x14070F2CC (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x14070F4FC (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x14070F594 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x14070F608 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14070F684 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x14070F790 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x14070F820 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x14070F8B8 (TtmSessionMonitorControl.c)
 *     TtmiSessionsRundown @ 0x14070FA28 (TtmiSessionsRundown.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x14070FB44 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x14070FBC8 (TtmiWriteEventToAllQueues.c)
 *     TtmpSessionWorker @ 0x14070FE40 (TtmpSessionWorker.c)
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140710434 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x140710594 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140710648 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14071073C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14071082C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1407108E0 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1407109A4 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140710A44 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x140710AFC (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140710BBC (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x140710D1C (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140710EB4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14071102C (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
    && (!dword_1407F320C || dword_1407F320C == a2)
    && (!dword_1407F3210 || dword_1407F3210 == a3)
    && (!dword_1407F3214 || dword_1407F3214 == a4) )
  {
    __debugbreak();
  }
  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407F37A0, 2uLL) )
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
      TlgWrite(&stru_1407F37A0, &unk_1402D358B, 0LL, 0LL, 7u, &pData);
    }
  }
}
