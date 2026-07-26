/*
 * XREFs of WPP_SF_qS @ 0x1C0077B94
 * Callers:
 *     NdisMTriggerPDDrainNotification @ 0x1C0077A00 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qS(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
    a4 = L"NULL";
  ndisWppFastTraceMessage(&WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, 0x20u, &v6, 8LL, a4, 2 * v5, 0LL);
}
