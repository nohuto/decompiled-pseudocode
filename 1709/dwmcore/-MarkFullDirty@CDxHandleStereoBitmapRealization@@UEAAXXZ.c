/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1801D3130
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x18002AFD0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty(this);
  if ( *((_QWORD *)this + 33) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 36) + 40LL))((char *)this + 288);
}
