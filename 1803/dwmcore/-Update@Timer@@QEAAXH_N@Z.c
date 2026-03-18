/*
 * XREFs of ?Update@Timer@@QEAAXH_N@Z @ 0x1800C3EFC
 * Callers:
 *     ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x180019C14 (-Repeat@KeyframeSequence@@QEAAXXZ.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18003EE90 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x18003F04C (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18013CE5C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Timer::Update(Timer *this, int a2, char a3)
{
  int v3; // r9d
  unsigned int v4; // edx
  int v5; // r11d
  int v6; // eax
  int *v7; // rdx

  v3 = 0;
  if ( a2 >= 0 || abs32(a2) <= *(_DWORD *)this )
  {
    *(_DWORD *)this += a2;
    v4 = *(_DWORD *)this;
    v5 = *((_DWORD *)this + 3);
  }
  else
  {
    v5 = *((_DWORD *)this + 3);
    v4 = a2 + v5 + *(_DWORD *)this;
    *(_DWORD *)this = v4;
  }
  v6 = v4 - *((_DWORD *)this + 1);
  if ( v6 >= v5 || v4 >= *((_DWORD *)this + 2) )
  {
    *((_BYTE *)this + 20) = 0;
    v7 = (int *)((char *)this + 16);
    if ( *((_BYTE *)this + 22) )
    {
      *((_BYTE *)this + 21) = 0;
      goto LABEL_7;
    }
    v3 = *((_DWORD *)this + 3);
    if ( v3 >= *((_DWORD *)this + 2) - *((_DWORD *)this + 1) )
      v3 = *((_DWORD *)this + 2) - *((_DWORD *)this + 1);
LABEL_20:
    *((_BYTE *)this + 21) = a3;
    goto LABEL_7;
  }
  if ( v6 < 0 )
  {
    *((_BYTE *)this + 20) = 0;
    if ( *((_BYTE *)this + 22) )
    {
      v3 = *((_DWORD *)this + 3);
      if ( v3 >= *((_DWORD *)this + 2) - *((_DWORD *)this + 1) )
        v3 = *((_DWORD *)this + 2) - *((_DWORD *)this + 1);
    }
    else
    {
      a3 = 0;
    }
    v7 = (int *)((char *)this + 16);
    goto LABEL_20;
  }
  *((_WORD *)this + 10) = 1;
  v7 = (int *)((char *)this + 16);
  v3 = v6;
LABEL_7:
  *v7 = v3;
}
