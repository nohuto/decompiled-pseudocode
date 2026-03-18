/*
 * XREFs of ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F5490
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00C6E80 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0219408 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceRemoved(
        struct RawInputManagerDeviceObject *a1,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceRemoved((InkProcessor *)InkProcessor::s_pInstance, a1);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v6 = &v4;
    v8 &= (unsigned int)InkProcessor::s_pInstance;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, 0LL, a4, 3u, &v5);
  }
}
