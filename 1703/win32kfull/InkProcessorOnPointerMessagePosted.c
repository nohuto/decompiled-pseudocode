/*
 * XREFs of InkProcessorOnPointerMessagePosted @ 0x1C01E96A0
 * Callers:
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C02183F0 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessorOnPointerMessagePosted(unsigned int a1, const GUID *a2)
{
  unsigned int v2; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+64h] [rbp-24h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnPointerMessagePosted((InkProcessor *)InkProcessor::s_pInstance, a1, (unsigned __int64)a2);
  }
  else if ( hProvider > 2u )
  {
    v2 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v4 = &v2;
    v6 &= (unsigned int)InkProcessor::s_pInstance;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a2, (LPCGUID)a1, 3u, &v3);
  }
}
