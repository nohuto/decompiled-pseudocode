/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1801AADD0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1801A83C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C00F4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseResourcesForDisplayChange(CD2DTarget **this)
{
  SAFE_DELETE<CD2DTarget>(this + 52);
  (*(void (__fastcall **)(CD2DTarget *, _QWORD, _QWORD))(*(_QWORD *)this[23] + 56LL))(this[23], 0LL, 0LL);
  (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)this[22] + 384LL))(this[22]);
  (*(void (__fastcall **)(CD2DTarget *, _QWORD, _QWORD))(*(_QWORD *)this[22] + 392LL))(this[22], 0LL, 0LL);
}
