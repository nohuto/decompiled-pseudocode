/*
 * XREFs of MX6GetByte @ 0x1402CD3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MX6GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  v3 = ((__int64 (__fastcall *)(_QWORD))off_140399430[0])(*a1);
  if ( (v3 & 0x8000) == 0 )
    return 1LL;
  if ( (v3 & 0x4000) != 0 )
    return 2LL;
  *a2 = v3;
  return 0LL;
}
