/*
 * XREFs of WPP_SF_qSD @ 0x1C0045B70
 * Callers:
 *     ndisMNotifyMachineName @ 0x1C00BD424 (ndisMNotifyMachineName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qSD(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v7 = a3;
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
  v6 = 2 * v5;
  if ( !a4 )
    a4 = L"NULL";
  ndisWppFastTraceMessage(&WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, 0x68u, &v7, 8LL, a4, v6, va, 4LL, 0LL);
}
