/*
 * XREFs of WPP_SF_sZZ @ 0x1C0050230
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00D9594 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_sZZ(unsigned __int16 a1, __int64 a2, const char *a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  const wchar_t *v5; // rax
  const wchar_t *v6; // r10
  __int64 v8; // rdx
  __int64 v9; // r11
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r9

  v5 = a5;
  v6 = a4;
  v8 = 8LL;
  if ( a5 )
    v9 = *a5;
  else
    v9 = 8LL;
  v10 = L"NULL";
  if ( a5 )
    v11 = (const wchar_t *)*((_QWORD *)a5 + 1);
  else
    v11 = L"NULL";
  if ( !a5 )
    v5 = L"\b";
  if ( a4 )
  {
    v8 = *a4;
    v10 = (const wchar_t *)*((_QWORD *)a4 + 1);
  }
  else
  {
    v6 = L"\b";
  }
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a3 )
    a3 = "NULL";
  ndisWppFastTraceMessage(
    &WPP_bde249736f00345f1574c6c7be067711_Traceguids,
    a1,
    a3,
    v13,
    v6,
    2LL,
    v10,
    v8,
    v5,
    2LL,
    v11,
    v9,
    0LL);
}
