/*
 * XREFs of InkProcessorOnThreadExit @ 0x1C00E09F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00E0A50 (-OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall InkProcessorOnThreadExit(struct tagTHREADINFO *a1, __int64 a2, __int64 a3, const GUID *a4)
{
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnThreadExit((InkProcessor *)InkProcessor::s_pInstance, a1);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v8 = 0;
    v6 = &v4;
    v4 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, 0LL, a4, 3u, &pData);
  }
}
