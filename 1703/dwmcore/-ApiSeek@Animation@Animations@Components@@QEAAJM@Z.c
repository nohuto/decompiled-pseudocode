/*
 * XREFs of ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x18002C9F8
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x180029698 (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x18002C0AC (-PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z.c)
 *     ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x18002C120 (-GetTimeLength@Animation@Animations@Components@@QEBAMXZ.c)
 *     ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x180091070 (-ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSeek(Components::Animations::Animation *this, float a2)
{
  float v2; // xmm2_4
  char v3; // al
  unsigned int v4; // ebx
  int v5; // eax
  int *v6; // r9
  float TimeLength; // xmm0_4
  int v8; // ecx
  float v9; // xmm3_4
  int v10; // edx
  float v11; // xmm4_4
  unsigned int v12; // eax
  __int64 v13; // r9
  float v15; // xmm1_4

  v2 = a2;
  if ( a2 < 0.0 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v3 = *((_BYTE *)this + 72);
    v4 = 0;
    if ( (v3 & 4) != 0 && (v3 & 0x10) == 0 )
    {
      v5 = *((_DWORD *)this + 4);
      if ( v5 > 0 )
      {
        v15 = a2 * 1000.0;
        if ( v15 > (float)v5 )
        {
          v2 = v2 - (float)((float)v5 / 1000.0);
        }
        else
        {
          v5 = (int)v15;
          v2 = 0.0;
        }
        *((_DWORD *)this + 5) = v5;
      }
      TimeLength = Components::Animations::Animation::GetTimeLength(this);
      v8 = v6[8];
      v9 = TimeLength;
      v10 = (int)(float)(v2 / TimeLength);
      if ( v8 >= 0 && (v6[7] = v10, v6[9] = v8 - v10, v8 - v10 < 0) )
      {
        v6[9] = 0;
        v6[7] = v8;
      }
      else
      {
        v6[7] = v10;
        v9 = v2 - (float)((float)v10 * TimeLength);
      }
      Components::Animations::Animation::PrepareSequenceForIteration((Components::Animations::Animation *)v6, v6[7]);
      v12 = Components::Animations::Math::Round(v9 * v11);
      Components::Animations::Sequence::ResetTime(*(Components::Animations::Sequence **)(v13 + 8), v12, 0);
    }
  }
  return v4;
}
