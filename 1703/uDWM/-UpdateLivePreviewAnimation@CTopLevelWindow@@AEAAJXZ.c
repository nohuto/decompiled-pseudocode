/*
 * XREFs of ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x1800813FC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180080874 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x1800808E4 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLivePreviewAnimation(CTopLevelWindow *this, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = *((_DWORD *)this + 62);
  if ( v2 <= 0 )
    goto LABEL_9;
  if ( v2 > 2 )
  {
    if ( v2 <= 4 )
    {
      v3 = CTopLevelWindow::LivePreviewAnimation_Animated((CLivePreviewTimeline **)this);
      v4 = v3;
      if ( v3 < 0 )
      {
        v7 = 4225;
LABEL_6:
        v5 = v3;
LABEL_10:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, v7);
        return v4;
      }
      return v4;
    }
LABEL_9:
    v4 = -2147467259;
    v7 = 4229;
    v5 = -2147467259;
    goto LABEL_10;
  }
  v3 = CTopLevelWindow::LivePreviewAnimation_Flipped(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 4220;
    goto LABEL_6;
  }
  return v4;
}
