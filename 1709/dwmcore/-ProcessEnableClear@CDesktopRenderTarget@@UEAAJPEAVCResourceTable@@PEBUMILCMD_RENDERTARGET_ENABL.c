/*
 * XREFs of ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x1801341A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x180134240 (-ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECL.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessEnableClear(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  unsigned int v3; // esi
  char v7; // al
  __int64 v8; // rdi
  signed int v9; // eax

  v3 = 0;
  v7 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 364) != v7 )
  {
    v8 = 0LL;
    *((_BYTE *)this + 364) = v7;
    if ( *((_DWORD *)this + 36) )
    {
      while ( 1 )
      {
        v9 = CHwndRenderTarget::ProcessEnableClear(*(CHwndRenderTarget **)(*((_QWORD *)this + 15) + 8 * v8), a2, a3);
        v3 = v9;
        if ( v9 < 0 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= *((_DWORD *)this + 36) )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x573u);
    }
  }
  return v3;
}
