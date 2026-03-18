/*
 * XREFs of ?MarkFullDirty@CColorKeyBitmap@@UEAAXXZ @ 0x1801D1A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmap::MarkFullDirty(CColorKeyBitmap *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 16) + 40LL))((char *)this - 128);
}
