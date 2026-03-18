/*
 * XREFs of ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01F535C
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01AB480 (EditionRimDeviceReadNotification.c)
 *     ProcessHidInputViaRim @ 0x1C01AB5BC (ProcessHidInputViaRim.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C0219818 (-ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceInputReport(
        struct RawInputManagerDeviceObject *a1,
        void *a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::ProcessInput(
      (InkProcessor *)InkProcessor::s_pInstance,
      (struct RawInputManagerDeviceObject *)InkProcessor::s_pInstance,
      a3);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v6 = &v4;
    v8 &= (unsigned int)InkProcessor::s_pInstance;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, a3, a4, 3u, &v5);
  }
}
