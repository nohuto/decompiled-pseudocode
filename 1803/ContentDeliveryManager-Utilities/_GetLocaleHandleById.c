/*
 * XREFs of _GetLocaleHandleById @ 0x1800AD6FC
 * Callers:
 *     _Tolower @ 0x1800A5A60 (_Tolower.c)
 *     _Toupper @ 0x1800AE168 (_Toupper.c)
 *     _Strcoll @ 0x1800C0078 (_Strcoll.c)
 *     _Getdateorder @ 0x1800C016C (_Getdateorder.c)
 *     _Wcscoll @ 0x1800C01C4 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800C02C0 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800C03EC (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(unsigned int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
