/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003CE98
 * Callers:
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18003CF88 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18003D13C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x180197C68 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 * Callees:
 *     ?SetTimeReversed@KeyframeSequence@@QEAAX_N@Z @ 0x18003F838 (-SetTimeReversed@KeyframeSequence@@QEAAX_N@Z.c)
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  float v3; // xmm1_4
  char v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r9

  v2 = *((_DWORD *)this + 125);
  v3 = FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v4 = *((_BYTE *)this + 509) >> 2;
      if ( (a2 & 1) != 0 )
        v4 = ~v4;
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = *((_BYTE *)this + 509) >> 2;
  }
  v5 = *((_DWORD *)this + 118);
  if ( v5 >= 0 && a2 == v5 && *((float *)this + 120) != 1.0 )
    v3 = *((float *)this + 120);
  v6 = *((_QWORD *)this + 41);
  *(_BYTE *)(v6 + 140) &= ~8u;
  *(_BYTE *)(v6 + 140) |= 8 * (v4 & 1);
  KeyframeSequence::SetTimeReversed(*((KeyframeSequence **)this + 41), *((float *)this + 114) < 0.0);
  *(_DWORD *)(*(_QWORD *)(v7 + 328) + 132LL) = 0;
  *(float *)(*(_QWORD *)(v7 + 328) + 136LL) = v3;
}
