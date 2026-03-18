/*
 * XREFs of ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x180049310
 * Callers:
 *     ?SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z @ 0x180047400 (-SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::SetDisplayId(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax

  v2 = a1 - 176;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 192LL);
  if ( (char *)v3 == (char *)CHwTextureRenderTarget::UpdateDisplayId )
    return CHwTextureRenderTarget::UpdateDisplayId(v2, a2);
  else
    return v3();
}
