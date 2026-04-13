/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800A03FC
 * Callers:
 *     _Towlower @ 0x180098860 (_Towlower.c)
 *     _Tolower @ 0x1800989B4 (_Tolower.c)
 *     _Towupper @ 0x180098E6C (_Towupper.c)
 *     _Toupper @ 0x1800A0EF8 (_Toupper.c)
 *     _Strcoll @ 0x1800B3020 (_Strcoll.c)
 *     _Wcscoll @ 0x1800B316C (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800B3268 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800B3394 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
