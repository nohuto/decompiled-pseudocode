/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18003AA30
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ @ 0x1800D6470 (-IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwDisplayRenderTarget::IsHardwareProtected(CHwDisplayRenderTarget *this)
{
  _BYTE *v1; // rcx
  bool result; // al
  __int64 (*v3)(void); // rax

  v1 = (_BYTE *)*((_QWORD *)this + 27);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 208LL);
    if ( (char *)v3 == (char *)CDWMSwapChain::IsHardwareProtected )
      return v1[456];
    else
      return v3();
  }
  return result;
}
