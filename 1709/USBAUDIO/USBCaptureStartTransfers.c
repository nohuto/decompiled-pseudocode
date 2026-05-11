/*
 * XREFs of USBCaptureStartTransfers @ 0x1C0020D38
 * Callers:
 *     USBCaptureResetWorker @ 0x1C0004F20 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C00055E0 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0005A80 (USBCaptureChangePowerState.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C001C9BC (USBHwDataPipeReset.c)
 *     USBCaptureSubmitRequest @ 0x1C0020BE8 (USBCaptureSubmitRequest.c)
 */

__int64 __fastcall USBCaptureStartTransfers(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // rbp
  unsigned int v6; // ebx
  int v7; // ebx
  int v9; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  KeWaitForSingleObject((PVOID)(v5 + 136), Executive, 0, 0, 0LL);
  if ( a2 )
    v4 = USBHwDataPipeReset(a1);
  v6 = 0;
  do
  {
    if ( v4 < 0 )
      break;
    v4 = USBCaptureSubmitRequest((_QWORD *)(v5 + 56LL * v6++ + 272));
    *(_BYTE *)(v5 + 80) = v4 >= 0;
  }
  while ( v6 < 0xC );
  v7 = 0;
  if ( v4 != 259 )
    v7 = v4;
  KeReleaseMutex((PRKMUTEX)(v5 + 136), 0);
  if ( v7 < 0 )
  {
    v9 = v7;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      0x10u,
      (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
      a1,
      v9);
  }
  return (unsigned int)v7;
}
