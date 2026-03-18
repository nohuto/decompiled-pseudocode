/*
 * XREFs of AutoRotationUpdateRegistry @ 0x1C00D6720
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 AutoRotationUpdateRegistry()
{
  return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 32LL))(P);
}
