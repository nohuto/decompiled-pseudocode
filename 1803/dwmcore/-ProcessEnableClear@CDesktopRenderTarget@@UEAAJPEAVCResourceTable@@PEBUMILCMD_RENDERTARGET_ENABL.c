/*
 * XREFs of ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x1800444F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x180157FD0 (-ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECL.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessEnableClear(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  unsigned int v3; // esi
  char v7; // al
  __int64 v9; // rdi
  int v10; // eax

  v3 = 0;
  v7 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 312) != v7 )
  {
    v9 = 0LL;
    *((_BYTE *)this + 312) = v7;
    if ( *((_DWORD *)this + 50) )
    {
      while ( 1 )
      {
        v10 = CHwndRenderTarget::ProcessEnableClear(*(CHwndRenderTarget **)(*((_QWORD *)this + 22) + 8 * v9), a2, a3);
        v3 = v10;
        if ( v10 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *((_DWORD *)this + 50) )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x515u);
    }
  }
  return v3;
}
