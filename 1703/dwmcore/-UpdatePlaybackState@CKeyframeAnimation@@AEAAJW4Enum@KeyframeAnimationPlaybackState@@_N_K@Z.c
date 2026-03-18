/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x180030DF0
 * Callers:
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18002FF44 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180030010 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx
  char v5; // al

  v4 = 0;
  if ( *(_QWORD *)(a1 + 320) )
  {
    if ( a2 > 2 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x377u);
    }
    else
    {
      *(_DWORD *)(a1 + 384) = a2;
      if ( !*(_DWORD *)(a1 + 380) && a2 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 344) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 520LL);
        else
          *(_QWORD *)(a1 + 344) = a4;
        *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 344);
        if ( a2 == 1 )
        {
          v5 = *(_BYTE *)(a1 + 392);
          if ( (v5 & 1) == 0 )
            *(_BYTE *)(a1 + 392) = v5 | 1;
        }
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 376LL) |= 2u;
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x370u);
  }
  return v4;
}
