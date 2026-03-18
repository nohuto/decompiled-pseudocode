/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x18003ED74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = 0;
  if ( *((_QWORD *)this + 41) )
  {
    if ( *((_DWORD *)a3 + 6) )
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
    else
      v5 = *((_QWORD *)a3 + 1);
    *((_QWORD *)this + 55) = v5;
    v6 = *((_QWORD *)a3 + 2);
    *((_BYTE *)this + 508) |= 2u;
    *((_QWORD *)this + 56) = v6;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 424LL) |= 2u;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1B1u);
  }
  return v3;
}
