/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0037F50
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C00383EC (--1CFlipToken@@MEAA@XZ.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0037D88 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0037E14 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0037E38 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  char v2; // al

  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
  v2 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 136LL))(this);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, v2);
}
