/*
 * XREFs of WPP_SF_qsD @ 0x1C0065694
 * Callers:
 *     ndisPowerIrpWorker @ 0x1C00EBE60 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qsD(__int64 a1, __int64 a2, __int64 a3, const char *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
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
  ndisWppFastTraceMessage(&WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, 0x8Du, &v6, 8LL, a4, v5, va, 4LL, 0LL);
}
