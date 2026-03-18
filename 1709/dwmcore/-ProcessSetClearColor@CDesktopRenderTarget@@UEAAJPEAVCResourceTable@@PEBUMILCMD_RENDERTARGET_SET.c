/*
 * XREFs of ?ProcessSetClearColor@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETCLEARCOLOR@@@Z @ 0x180134260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetClearColor(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  __int64 v3; // rdx
  __int64 v5; // r8
  bool v6; // zf

  v3 = 0LL;
  *(_OWORD *)((char *)this + 348) = *(_OWORD *)((char *)a3 + 8);
  for ( *((_DWORD *)this + 90) = 1065353216; (unsigned int)v3 < *((_DWORD *)this + 36); v3 = (unsigned int)(v3 + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v3);
    v6 = *(_BYTE *)(v5 + 800) == 0;
    *(_OWORD *)(v5 + 396) = *(_OWORD *)((char *)a3 + 8);
    if ( !v6 )
      *(_BYTE *)(v5 + 802) = 1;
  }
  return 0LL;
}
