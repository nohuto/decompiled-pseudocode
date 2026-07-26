/*
 * XREFs of WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1C006FE9C
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C0072308 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
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
        char a28)
{
  __int64 v28; // rax
  const wchar_t *v29; // rcx

  if ( a4 )
    v28 = *a4;
  else
    v28 = 8LL;
  if ( a4 && *a4 )
    v29 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v29 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_250ba6082b573e143e643b46f787ca55_Traceguids,
    0x2Cu,
    a3,
    16LL,
    a4,
    2LL,
    v29,
    v28,
    &a5,
    4LL,
    &a6,
    4LL,
    &a7,
    4LL,
    &a8,
    4LL,
    &a9,
    4LL,
    &a10,
    4LL,
    &a11,
    4LL,
    &a12,
    4LL,
    &a13,
    4LL,
    &a14,
    4LL,
    &a15,
    4LL,
    &a16,
    4LL,
    &a17,
    4LL,
    &a18,
    4LL,
    &a19,
    4LL,
    &a20,
    4LL,
    &a21,
    4LL,
    &a22,
    4LL,
    &a23,
    4LL,
    &a24,
    4LL,
    &a25,
    4LL,
    &a26,
    4LL,
    &a27,
    4LL,
    &a28,
    4LL,
    0LL);
}
