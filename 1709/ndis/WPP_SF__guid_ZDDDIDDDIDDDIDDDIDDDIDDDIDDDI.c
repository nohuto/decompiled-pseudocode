/*
 * XREFs of WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1C006F864
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C0071A88 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32)
{
  __int64 v32; // rax
  const wchar_t *v33; // rcx

  if ( a4 )
    v32 = *a4;
  else
    v32 = 8LL;
  if ( a4 )
    v33 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v33 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids,
    0x2Bu,
    a3,
    16LL,
    a4,
    2LL,
    v33,
    v32,
    &a5,
    4LL,
    &a6,
    4LL,
    &a7,
    4LL,
    &a8,
    8LL,
    &a9,
    4LL,
    &a10,
    4LL,
    &a11,
    4LL,
    &a12,
    8LL,
    &a13,
    4LL,
    &a14,
    4LL,
    &a15,
    4LL,
    &a16,
    8LL,
    &a17,
    4LL,
    &a18,
    4LL,
    &a19,
    4LL,
    &a20,
    8LL,
    &a21,
    4LL,
    &a22,
    4LL,
    &a23,
    4LL,
    &a24,
    8LL,
    &a25,
    4LL,
    &a26,
    4LL,
    &a27,
    4LL,
    &a28,
    8LL,
    &a29,
    4LL,
    &a30,
    4LL,
    &a31,
    4LL,
    &a32);
}
