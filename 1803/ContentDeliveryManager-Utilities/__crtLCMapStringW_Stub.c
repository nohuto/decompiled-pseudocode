/*
 * XREFs of __crtLCMapStringW_Stub @ 0x1800AD7CC
 * Callers:
 *     _Towlower @ 0x1800A590C (_Towlower.c)
 *     _Towupper @ 0x1800A5F28 (_Towupper.c)
 *     _Wcsxfrm @ 0x1800C02C0 (_Wcsxfrm.c)
 * Callees:
 *     __crtLCMapStringW_0 @ 0x1800C11DB (__crtLCMapStringW_0.c)
 */

__int64 __fastcall _crtLCMapStringW_Stub(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  return _crtLCMapStringW_0(0LL, a1, a2, a3, a4, a5, a6, a7);
}
