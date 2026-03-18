/*
 * XREFs of MX6InitializePort @ 0x1402CD420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall MX6InitializePort(__int64 a1, __int64 *a2, char a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( !a3 )
    return 0;
  v6 = *a2;
  if ( (((__int64 (__fastcall *)(__int64))off_140399430[0])(*a2 + 128) & 1) == 0
    || (((__int64 (__fastcall *)(__int64))off_140399430[0])(v6 + 132) & 6) != 6 )
  {
    return 0;
  }
  v3 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v6 + 144);
  v4 = v3 & 0xFFFFFFC0;
  LODWORD(v4) = v3 & 0xFFFF7FC0 | 0x8000;
  ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v6 + 144, v4);
  return 1;
}
