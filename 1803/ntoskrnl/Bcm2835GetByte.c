/*
 * XREFs of Bcm2835GetByte @ 0x1402CBF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     Bcm2835RxReady @ 0x1402CC090 (Bcm2835RxReady.c)
 */

__int64 __fastcall Bcm2835GetByte(_QWORD *a1, _BYTE *a2)
{
  if ( !a1 || !*a1 )
    return 3LL;
  if ( !(unsigned __int8)Bcm2835RxReady() )
    return 1LL;
  *a2 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(*a1 + 64LL);
  return 0LL;
}
