/*
 * XREFs of ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180069AB8
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18006AC58 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18006ACC8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800793A0 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CLivePreview::GetAnimationDuration(int a1)
{
  float result; // xmm0_4
  int v2; // ecx

  result = FLOAT_0_001;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
  {
    if ( a1 && (v2 = a1 - 1) != 0 )
    {
      if ( (unsigned int)(v2 - 1) <= 1 )
        return FLOAT_0_15000001;
    }
    else
    {
      return FLOAT_0_2;
    }
  }
  return result;
}
