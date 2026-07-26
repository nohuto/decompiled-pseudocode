/*
 * XREFs of WPP_SF_qDdZ @ 0x1C005F468
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0061418 (ndisMResetCompleteStage1.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDdZ(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, unsigned __int16 *a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
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
  if ( a6 && *a6 )
    v8 = (const wchar_t *)*((_QWORD *)a6 + 1);
  else
    v8 = L"NULL";
  if ( !a6 )
    v6 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
    0x4Fu,
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
