/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F51CC
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00C6E80 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0218DF4 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
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
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
  if ( InkProcessor::s_pInstance )
  {
    v5 = InkProcessor::OnDeviceAttached((InkProcessor *)InkProcessor::s_pInstance, a1);
    v4 = v5;
    if ( v5 < 0 && (unsigned int)pRelatedActivityId > 2 )
    {
      v13 = 0;
      v9 = v5;
      v11 = &v9;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v6, v7, 3u, &pData);
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v13 &= (unsigned int)InkProcessor::s_pInstance;
    v11 = &v9;
    v9 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v12 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, a3, a4, 3u, &pData);
  }
  return v4;
}
