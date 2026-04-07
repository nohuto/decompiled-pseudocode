/*
 * XREFs of ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180042C40
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000DEB0 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x1800251CC (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180042B90 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearInterpolationMode(CVisual *this)
{
  if ( (*((_BYTE *)this + 196) & 2) != 0 )
  {
    *((_DWORD *)this + 49) &= ~2u;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
  }
}
