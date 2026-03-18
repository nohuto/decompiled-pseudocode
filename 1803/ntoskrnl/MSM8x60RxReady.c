/*
 * XREFs of MSM8x60RxReady @ 0x1402CE120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall MSM8x60RxReady(__int64 *a1)
{
  __int64 v1; // rcx

  if ( a1 && (v1 = *a1) != 0 )
    return ((__int64 (__fastcall *)(__int64))off_140399430[0])(v1 + 8) & 1;
  else
    return 0;
}
