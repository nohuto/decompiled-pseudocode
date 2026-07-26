/*
 * XREFs of WPP_SF_qDdZ @ 0x1C005ECE4
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C00609C0 (ndisMResetCompleteStage1.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDdZ(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, unsigned __int16 *a6)
{
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  const wchar_t *v8; // rdx
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF
  int v10; // [rsp+98h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v6 = a6;
  if ( a6 )
    v7 = *a6;
  else
    v7 = 8LL;
  if ( a6 )
    v8 = (const wchar_t *)*((_QWORD *)a6 + 1);
  else
    v8 = L"NULL";
  if ( !a6 )
    v6 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids,
    0x4Bu,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v6,
    2LL,
    v8,
    v7,
    0LL);
}
