/*
 * XREFs of ?AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z @ 0x180146980
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMovedVisuals@CHwndRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180145C0C (-AddMovedVisuals@CHwndRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddMovedVisuals(CDesktopRenderTarget *this, struct CVisual *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v6; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v6 = CHwndRenderTarget::AddMovedVisuals(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8 * v3), a2);
      v2 = v6;
      if ( v6 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 8) )
        return v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x741u);
  }
  return v2;
}
