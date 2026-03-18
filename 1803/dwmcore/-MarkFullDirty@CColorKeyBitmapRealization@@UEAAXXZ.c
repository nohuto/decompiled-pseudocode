/*
 * XREFs of ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ @ 0x1802139B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmapRealization::MarkFullDirty(CColorKeyBitmapRealization *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 24LL) + 128LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 16) + 40LL))((char *)this - 128);
}
