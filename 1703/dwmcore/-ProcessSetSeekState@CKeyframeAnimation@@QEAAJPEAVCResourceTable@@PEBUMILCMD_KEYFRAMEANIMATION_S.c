/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x18002FEE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx

  v3 = 0;
  if ( *((_QWORD *)this + 40) )
  {
    if ( *((_DWORD *)a3 + 6) )
      *((_QWORD *)this + 45) = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
    else
      *((_QWORD *)this + 45) = *((_QWORD *)a3 + 1);
    v5 = *((_QWORD *)a3 + 2);
    *((_BYTE *)this + 392) |= 2u;
    *((_QWORD *)this + 46) = v5;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 376LL) |= 2u;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x300u);
  }
  return v3;
}
