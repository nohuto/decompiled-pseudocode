/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800A4FC0
 * Callers:
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x1800A3724 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A3C30 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx
  char v5; // al

  v4 = 0;
  if ( *(_QWORD *)(a1 + 312) )
  {
    if ( a2 > 2 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1F0u);
    }
    else
    {
      *(_DWORD *)(a1 + 440) = a2;
      if ( !*(_DWORD *)(a1 + 436) && a2 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 384) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 472LL);
        else
          *(_QWORD *)(a1 + 384) = a4;
        *(_QWORD *)(a1 + 392) = *(_QWORD *)(a1 + 384);
        if ( a2 == 1 )
        {
          v5 = *(_BYTE *)(a1 + 456);
          if ( (v5 & 1) == 0 )
            *(_BYTE *)(a1 + 456) = v5 | 1;
        }
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL) + 376LL) |= 2u;
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x1E9u);
  }
  return v4;
}
