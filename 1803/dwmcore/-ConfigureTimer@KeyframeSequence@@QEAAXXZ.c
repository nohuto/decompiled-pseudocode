/*
 * XREFs of ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18003EE90
 * Callers:
 *     ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x180019C14 (-Repeat@KeyframeSequence@@QEAAXXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x18003F04C (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x18003F088 (-Play@KeyframeSequence@@QEAAXXZ.c)
 * Callees:
 *     ?Update@Timer@@QEAAXH_N@Z @ 0x1800C3EFC (-Update@Timer@@QEAAXH_N@Z.c)
 */

void __fastcall KeyframeSequence::ConfigureTimer(KeyframeSequence *this)
{
  int v2; // edx
  float v3; // xmm1_4
  int v4; // eax
  int v5; // r8d
  char *v6; // rcx
  float v7; // xmm1_4

  if ( *((_DWORD *)this + 28) )
    v2 = **((_DWORD **)this + 13);
  else
    v2 = 0;
  v3 = *((float *)this + 34);
  if ( v3 < 1.0 )
  {
    v5 = *((_DWORD *)this + 30);
    v4 = (int)(float)((float)v5 * v3);
  }
  else
  {
    v4 = *((_DWORD *)this + 30);
    v5 = v4;
  }
  v6 = (char *)this + 80;
  *((_DWORD *)v6 + 1) = v2;
  *((_DWORD *)v6 + 2) = v4;
  *((_DWORD *)v6 + 3) = v5;
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_WORD *)v6 + 10) = 0;
  v7 = *((float *)this + 33);
  if ( v7 > 0.0 )
    Timer::Update((Timer *)v6, (int)(float)(fminf(v7, *((float *)this + 34)) * (float)*((int *)this + 30)), 0);
  *((_BYTE *)this + 140) |= 0x20u;
}
