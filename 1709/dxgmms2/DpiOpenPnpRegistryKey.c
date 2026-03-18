/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C0016188
 * Callers:
 *     VidSchiReadNodeConfiguration @ 0x1C0076848 (VidSchiReadNodeConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1)
{
  return DxgCoreInterface[1](a1, (_QWORD *)2, 131097LL);
}
