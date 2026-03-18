/*
 * XREFs of ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E92B4
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00B0690 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217F2C (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceClosed(
        struct RawInputManagerDeviceObject *a1,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  unsigned int v4; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+64h] [rbp-24h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceClosed((InkProcessor *)InkProcessor::s_pInstance, a1);
  }
  else if ( hProvider > 2u )
  {
    v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v6 = &v4;
    v8 &= (unsigned int)InkProcessor::s_pInstance;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, 0LL, a4, 3u, &v5);
  }
}
