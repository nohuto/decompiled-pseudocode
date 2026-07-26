/*
 * XREFs of WPP_SF_qs @ 0x1C0065628
 * Callers:
 *     ndisQueuePowerIrp @ 0x1C0065978 (ndisQueuePowerIrp.c)
 *     ndisPowerIrpWorker @ 0x1C00EBE60 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qs(unsigned __int16 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = a3;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  if ( !a4 )
    a4 = "NULL";
  ndisWppFastTraceMessage(&WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1, &v6, 8LL, a4, v5, 0LL);
}
