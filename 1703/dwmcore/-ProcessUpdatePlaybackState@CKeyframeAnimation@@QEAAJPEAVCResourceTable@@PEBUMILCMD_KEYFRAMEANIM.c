/*
 * XREFs of ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18002FF44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x180030DF0 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessUpdatePlaybackState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  int updated; // eax
  unsigned int v6; // ebx

  if ( *((_QWORD *)this + 40) )
  {
    v3 = *((unsigned int *)a3 + 2);
    if ( (unsigned int)v3 > 2 )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2DAu);
    }
    else
    {
      v4 = *(_QWORD *)((char *)a3 + 12);
      LOBYTE(a3) = *((_DWORD *)a3 + 5) != 0;
      updated = CKeyframeAnimation::UpdatePlaybackState(this, v3, a3, v4);
      v6 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2E1u);
      else
        return 0;
    }
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2D3u);
  }
  return v6;
}
