/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800AD6F8
 * Callers:
 *     _Towlower @ 0x1800A590C (_Towlower.c)
 *     _Tolower @ 0x1800A5A60 (_Tolower.c)
 *     _Towupper @ 0x1800A5F28 (_Towupper.c)
 *     _Toupper @ 0x1800AE168 (_Toupper.c)
 *     _Strcoll @ 0x1800C0078 (_Strcoll.c)
 *     _Wcscoll @ 0x1800C01C4 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800C02C0 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800C03EC (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
