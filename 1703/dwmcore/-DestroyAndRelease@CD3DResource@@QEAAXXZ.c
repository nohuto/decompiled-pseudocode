/*
 * XREFs of ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x18004BF80
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 * Callees:
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x18004BEA4 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResource::DestroyAndRelease(CD3DResource *this)
{
  CD3DResource::Invalidate(this);
  (*(void (__fastcall **)(_QWORD, CD3DResource *))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2), this);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(CD3DResource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
}
