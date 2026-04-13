/*
 * XREFs of _GetLocaleHandleById @ 0x1800A0400
 * Callers:
 *     _Tolower @ 0x1800989B4 (_Tolower.c)
 *     _Toupper @ 0x1800A0EF8 (_Toupper.c)
 *     _Strcoll @ 0x1800B3020 (_Strcoll.c)
 *     _Getdateorder @ 0x1800B3114 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800B316C (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800B3268 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800B3394 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(unsigned int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
