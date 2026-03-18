/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1801B6430
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x180036D60 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty(this);
  if ( *((_QWORD *)this + 53) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 56) + 48LL))((char *)this + 448);
}
