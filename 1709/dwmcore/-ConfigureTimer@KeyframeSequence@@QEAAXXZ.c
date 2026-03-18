/*
 * XREFs of ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A7534
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x1800A6C58 (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800A6C8C (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x1800A73C8 (-Repeat@KeyframeSequence@@QEAAXXZ.c)
 * Callees:
 *     ?Update@Timer@@QEAAXH_N@Z @ 0x1800BC034 (-Update@Timer@@QEAAXH_N@Z.c)
 */

void __fastcall KeyframeSequence::ConfigureTimer(KeyframeSequence *this)
{
  KeyframeSequence *v1; // r9
  int v2; // edx
  float v3; // xmm1_4
  int v4; // eax
  int v5; // r8d
  char *v6; // rcx
  float v7; // xmm1_4

  v1 = this;
  if ( *((_DWORD *)this + 26) )
    v2 = **((_DWORD **)this + 12);
  else
    v2 = 0;
  v3 = *((float *)this + 32);
  v4 = *((_DWORD *)this + 28);
  if ( v3 < 1.0 )
    v5 = (int)(float)((float)v4 * v3);
  else
    v5 = *((_DWORD *)this + 28);
  v6 = (char *)this + 72;
  *((_DWORD *)v6 + 1) = v2;
  *((_DWORD *)v6 + 2) = v5;
  *((_DWORD *)v6 + 3) = v4;
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_WORD *)v6 + 10) = 0;
  v7 = *((float *)v1 + 31);
  if ( v7 > 0.0 )
    Timer::Update((Timer *)v6, (int)(float)(fminf(v7, *((float *)v1 + 32)) * (float)*((int *)v1 + 28)), 0);
  *((_BYTE *)v1 + 132) |= 0x10u;
}
