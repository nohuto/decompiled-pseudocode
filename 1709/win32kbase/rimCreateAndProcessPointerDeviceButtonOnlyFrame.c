/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0110514
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010D6D4 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C010D7C8 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C011239C (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Du,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, a5) )
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, a3, a4, &v10);
    rimProcessPointerDeviceButtonContact(a1, a2, a3, a4, v10);
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    RIMCompletePointerDeviceFrame(a1, a2);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x1Eu,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x1Fu,
           (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
}
