/*
 * XREFs of NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00F4070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00F31C0 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStartMiracastDisplayDevice(__int64 a1)
{
  if ( IsAllowedToCallMiracast() )
    return ((__int64 (__fastcall *)(__int64))qword_1C0190898)(a1);
  else
    return 2147483656LL;
}
