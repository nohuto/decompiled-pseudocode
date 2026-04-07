/*
 * XREFs of ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x1800808E4
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x1800813FC (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180024894 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::LivePreviewAnimation_Flipped(CTopLevelWindow *this, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax

  v2 = *((_DWORD *)this + 62);
  v3 = 0;
  if ( v2 == 1 )
  {
    v5 = CTopLevelWindow::ShowWindow(this, 0LL);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x1043u);
      return v3;
    }
LABEL_10:
    CTopLevelWindow::StopLivePreviewAnimation(this);
    return v3;
  }
  if ( v2 == 2 )
  {
    v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
    if ( v6 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6 + 464) + 72LL) )
      {
        LOBYTE(a2) = 1;
        v7 = CTopLevelWindow::ShowWindow(this, a2);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x104Bu);
          return v3;
        }
        goto LABEL_10;
      }
    }
  }
  return v3;
}
