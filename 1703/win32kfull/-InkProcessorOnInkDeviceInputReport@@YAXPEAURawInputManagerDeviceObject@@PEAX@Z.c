/*
 * XREFs of ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01E9358
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01A80E0 (EditionRimDeviceReadNotification.c)
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C0218628 (-ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceInputReport(
        struct RawInputManagerDeviceObject *a1,
        void *a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v4; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+64h] [rbp-24h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::ProcessInput(
      (InkProcessor *)InkProcessor::s_pInstance,
      (struct RawInputManagerDeviceObject *)InkProcessor::s_pInstance,
      a3);
  }
  else if ( hProvider > 2u )
  {
    v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v6 = &v4;
    v8 &= (unsigned int)InkProcessor::s_pInstance;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a3, a4, 3u, &v5);
  }
}
