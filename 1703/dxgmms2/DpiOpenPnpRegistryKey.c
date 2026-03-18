/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C0013E60
 * Callers:
 *     VidSchiReadNodeConfiguration @ 0x1C00707E0 (VidSchiReadNodeConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1)
{
  return DxgCoreInterface[1](a1, (_QWORD *)2, 131097LL);
}
