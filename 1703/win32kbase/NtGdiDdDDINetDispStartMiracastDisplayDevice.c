/*
 * XREFs of NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00F13A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00F0600 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStartMiracastDisplayDevice(__int64 a1)
{
  if ( IsAllowedToCallMiracast() )
    return ((__int64 (__fastcall *)(__int64))qword_1C018BC30)(a1);
  else
    return 2147483656LL;
}
