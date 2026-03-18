/*
 * XREFs of InkProcessorOnPointerMessagePosted @ 0x1C01F5680
 * Callers:
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C02195CC (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessorOnPointerMessagePosted(unsigned int a1, const GUID *a2)
{
  unsigned int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnPointerMessagePosted((InkProcessor *)InkProcessor::s_pInstance, a1, (unsigned __int64)a2);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v2 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v4 = &v2;
    v6 &= (unsigned int)InkProcessor::s_pInstance;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, a2, (LPCGUID)a1, 3u, &v3);
  }
}
