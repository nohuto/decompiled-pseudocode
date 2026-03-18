/*
 * XREFs of ?Release@CHwDisplayRenderTarget@@UEAAKXZ @ 0x18002B810
 * Callers:
 *     ?Release@CHwDisplayRenderTarget@@WJA@EAAKXZ @ 0x1800C6CE0 (-Release@CHwDisplayRenderTarget@@WJA@EAAKXZ.c)
 *     ?Release@CHwDisplayRenderTarget@@WMA@EAAKXZ @ 0x1800C6CF0 (-Release@CHwDisplayRenderTarget@@WMA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Release(CHwDisplayRenderTarget *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 144);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    --*((_DWORD *)v1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
