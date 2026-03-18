/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0004AE8
 * Callers:
 *     VidSchiControlVSync @ 0x1C0056C4C (VidSchiControlVSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2)
{
  return ((__int64 (__fastcall *)(DXGADAPTER *, __int64))DxgCoreInterface[12])(this, 3LL);
}
