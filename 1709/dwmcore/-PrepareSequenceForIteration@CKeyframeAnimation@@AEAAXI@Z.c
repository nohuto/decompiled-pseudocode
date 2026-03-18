/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800A3848
 * Callers:
 *     ?Seek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A38CC (-Seek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3B34 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  float v3; // xmm1_4
  char v4; // r8
  int v5; // eax
  __int64 v6; // rax

  v2 = *((_DWORD *)this + 112);
  v3 = FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v4 = *((_BYTE *)this + 457) >> 1;
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
    v4 = *((_BYTE *)this + 457) >> 1;
  }
  v5 = *((_DWORD *)this + 105);
  if ( v5 >= 0 && a2 == v5 && *((float *)this + 107) != 1.0 )
    v3 = *((float *)this + 107);
  v6 = *((_QWORD *)this + 39);
  *(_BYTE *)(v6 + 132) &= ~8u;
  *(_BYTE *)(v6 + 132) |= 8 * (v4 & 1);
  *(_DWORD *)(*((_QWORD *)this + 39) + 124LL) = 0;
  *(float *)(*((_QWORD *)this + 39) + 128LL) = v3;
}
