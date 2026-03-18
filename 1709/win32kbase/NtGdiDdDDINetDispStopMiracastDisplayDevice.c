/*
 * XREFs of NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00F40B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00F31C0 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStopMiracastDisplayDevice(__int64 a1, __int64 a2)
{
  if ( IsAllowedToCallMiracast() )
    return ((__int64 (__fastcall *)(__int64, __int64))qword_1C01908A0)(a1, a2);
  else
    return 2147483656LL;
}
