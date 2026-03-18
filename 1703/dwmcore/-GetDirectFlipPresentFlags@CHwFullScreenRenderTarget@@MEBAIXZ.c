/*
 * XREFs of ?GetDirectFlipPresentFlags@CHwFullScreenRenderTarget@@MEBAIXZ @ 0x1801A0CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetDirectFlipPresentFlags(CHwFullScreenRenderTarget *this)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( *((_QWORD *)this + 44) == (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 144LL))(*((_QWORD *)this + 27)) )
    return 2;
  return v1;
}
