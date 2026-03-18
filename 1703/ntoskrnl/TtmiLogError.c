/*
 * XREFs of TtmiLogError @ 0x140584D50
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     TtmiAcquireCurrentSession @ 0x140584CA4 (TtmiAcquireCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405D5F00 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmNotifyDeviceDeparture @ 0x1406D6DE0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1406D6EA0 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1406D7004 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1406D71AC (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpCallAssignedToTerminal @ 0x1406D7410 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1406D7540 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1406D75E8 (TtmpCallSetInputMode.c)
 *     TtmpPushTerminalState @ 0x1406D7B20 (TtmpPushTerminalState.c)
 *     TtmiCreateTerminal @ 0x1406D7E80 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1406D8140 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1406D84F8 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1406D8ED4 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1406D9168 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x1406D9200 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1406D9278 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1406D92FC (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x1406D9408 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1406D9498 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1406D9530 (TtmSessionMonitorControl.c)
 *     TtmiSessionsRundown @ 0x1406D961C (TtmiSessionsRundown.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1406D9738 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1406D97BC (TtmiWriteEventToAllQueues.c)
 *     TtmpSessionWorker @ 0x1406D9A30 (TtmpSessionWorker.c)
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406DA024 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1406DA184 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1406DA238 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1406DA32C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1406DA41C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1406DA4D0 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1406DA594 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1406DA634 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x1406DA6EC (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1406DA7AC (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x1406DA90C (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1406DAAA4 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1406DAC1C (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 */

void __fastcall TtmiLogError(LPCSTR psz, int a2, int a3, int a4)
{
  int ProcessSessionId; // eax
  int v9; // r9d
  int v10; // [rsp+30h] [rbp-59h] BYREF
  int v11; // [rsp+34h] [rbp-55h] BYREF
  int v12; // [rsp+38h] [rbp-51h] BYREF
  int v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v15; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  int *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  int *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  int *v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+ACh] [rbp+23h]

  if ( TtmpBreakOnError
    && (!dword_1407AC24C || dword_1407AC24C == a2)
    && (!dword_1407AC250 || dword_1407AC250 == a3)
    && (!dword_1407AC254 || dword_1407AC254 == a4) )
  {
    __debugbreak();
  }
  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 2uLL) )
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
      TlgWrite(&stru_1407AC710, &unk_1402AE3BA, 0LL, 0LL, 7u, &pData);
    }
  }
}
