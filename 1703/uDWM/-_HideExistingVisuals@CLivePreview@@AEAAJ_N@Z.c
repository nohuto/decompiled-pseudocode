/*
 * XREFs of ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18006ECA4
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004C608 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180075F80 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180081228 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

__int64 __fastcall CLivePreview::_HideExistingVisuals(CLivePreview *this, char a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // rcx
  int started; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 82) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 40 * v3) + 400LL);
      if ( v6 )
      {
        started = CTopLevelWindow::StartLivePreviewAnimation(v6, 2 - (unsigned int)(a2 != 0));
        v2 = started;
        if ( started < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 82) )
        return v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x485u);
  }
  return v2;
}
