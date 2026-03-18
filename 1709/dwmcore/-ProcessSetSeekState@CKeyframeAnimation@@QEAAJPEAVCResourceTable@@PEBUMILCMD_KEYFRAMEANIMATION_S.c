/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x1800A3770
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx

  v3 = 0;
  if ( *((_QWORD *)this + 39) )
  {
    if ( *((_DWORD *)a3 + 6) )
      *((_QWORD *)this + 50) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    else
      *((_QWORD *)this + 50) = *((_QWORD *)a3 + 1);
    v5 = *((_QWORD *)a3 + 2);
    *((_BYTE *)this + 456) |= 2u;
    *((_QWORD *)this + 51) = v5;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 376LL) |= 2u;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x17Cu);
  }
  return v3;
}
