/*
 * XREFs of ?ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING@@@Z @ 0x180134148
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessDisableStereoRendering(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING *a3)
{
  __int64 v3; // rdx
  char v4; // r8
  __int64 v5; // r10

  v3 = 0LL;
  v4 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 377) != v4 )
  {
    *((_BYTE *)this + 377) = v4;
    if ( *((_DWORD *)this + 36) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v3);
        if ( *(_BYTE *)(v5 + 809) != v4 )
        {
          *(_BYTE *)(v5 + 809) = v4;
          *(_BYTE *)(v5 + 802) = 1;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 36) );
    }
  }
  return 0LL;
}
