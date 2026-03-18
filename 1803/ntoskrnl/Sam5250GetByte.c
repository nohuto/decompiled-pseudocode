/*
 * XREFs of Sam5250GetByte @ 0x1402CE2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Sam5250GetByte(__int64 *a1, _BYTE *a2)
{
  __int64 v4; // rcx
  char v5; // si

  if ( !a1 )
    return 3LL;
  v4 = *a1;
  if ( !v4 )
    return 3LL;
  if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(v4 + 16) & 1) == 0 )
    return 1LL;
  v5 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(*a1 + 36);
  if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(*a1 + 20) & 0xE) != 0 )
  {
    *a2 = 0;
    return 2LL;
  }
  else
  {
    *a2 = v5;
    return 0LL;
  }
}
