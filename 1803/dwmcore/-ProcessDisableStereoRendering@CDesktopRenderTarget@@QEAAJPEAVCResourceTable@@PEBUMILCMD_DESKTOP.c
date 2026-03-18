/*
 * XREFs of ?ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING@@@Z @ 0x1800454AC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
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
  __int64 v6; // r10

  v3 = 0LL;
  v4 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 329) != v4 )
  {
    *((_BYTE *)this + 329) = v4;
    if ( *((_DWORD *)this + 50) )
    {
      do
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v3);
        if ( *(_BYTE *)(v6 + 854) != v4 )
        {
          *(_BYTE *)(v6 + 854) = v4;
          *(_BYTE *)(v6 + 161) = 1;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 50) );
    }
  }
  return 0LL;
}
