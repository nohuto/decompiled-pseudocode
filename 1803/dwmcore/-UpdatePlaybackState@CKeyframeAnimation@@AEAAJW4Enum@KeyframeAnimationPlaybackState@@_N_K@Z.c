/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18003E75C
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003D240 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18003ED28 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801977E8 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx
  char v5; // al

  v4 = 0;
  if ( *(_QWORD *)(a1 + 328) )
  {
    if ( a2 > 2 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2D0u);
    }
    else
    {
      *(_DWORD *)(a1 + 492) = a2;
      if ( !*(_DWORD *)(a1 + 488) && a2 )
      {
        if ( a3 )
          a4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL);
        *(_QWORD *)(a1 + 424) = a4;
        *(_QWORD *)(a1 + 432) = a4;
        if ( a2 == 1 )
        {
          v5 = *(_BYTE *)(a1 + 508);
          if ( (v5 & 1) == 0 )
            *(_BYTE *)(a1 + 508) = v5 | 1;
        }
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 424LL) |= 2u;
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x2C9u);
  }
  return v4;
}
