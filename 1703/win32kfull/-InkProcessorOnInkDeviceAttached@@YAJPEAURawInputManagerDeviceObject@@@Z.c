/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E91BC
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00B0690 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217C64 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessorOnInkDeviceAttached(
        struct RawInputManagerDeviceObject *a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v9; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-48h] BYREF
  unsigned int *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]

  v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
  if ( InkProcessor::s_pInstance )
  {
    v5 = InkProcessor::OnDeviceAttached((InkProcessor *)InkProcessor::s_pInstance, a1);
    v4 = v5;
    if ( v5 < 0 && hProvider > 2u )
    {
      v13 = 0;
      v9 = v5;
      v11 = &v9;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v6, v7, 3u, &pData);
    }
  }
  else if ( hProvider > 2u )
  {
    v13 &= (unsigned int)InkProcessor::s_pInstance;
    v11 = &v9;
    v9 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v12 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a3, a4, 3u, &pData);
  }
  return v4;
}
