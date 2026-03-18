/*
 * XREFs of UsifRxReady @ 0x1402CDC60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

bool __fastcall UsifRxReady(__int64 *a1)
{
  __int64 v1; // rcx

  return a1 && (v1 = *a1) != 0 && ((unsigned __int8 (__fastcall *)(__int64))off_140399430[0])(v1 + 68) != 0;
}
