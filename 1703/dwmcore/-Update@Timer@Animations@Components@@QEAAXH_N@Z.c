/*
 * XREFs of ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800C57BC
 * Callers:
 *     ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x18001FCD8 (-Repeat@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1800210DC (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E08 (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x180091070 (-ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Timer::Update(Components::Animations::Timer *this, int a2, char a3)
{
  int v3; // edx
  int v4; // eax

  *(_DWORD *)this += a2;
  v3 = *(_DWORD *)this - *((_DWORD *)this + 1);
  if ( v3 >= *((_DWORD *)this + 3) || *(_DWORD *)this >= *((_DWORD *)this + 2) )
  {
    *((_BYTE *)this + 21) = a3;
    *((_BYTE *)this + 20) = 0;
    v4 = *((_DWORD *)this + 2) - *((_DWORD *)this + 1);
    if ( *((_DWORD *)this + 3) < v4 )
      v4 = *((_DWORD *)this + 3);
  }
  else
  {
    v4 = 0;
    if ( v3 >= 0 )
    {
      *((_WORD *)this + 10) = 1;
      *((_DWORD *)this + 4) = v3;
      return;
    }
    *((_WORD *)this + 10) = 0;
  }
  *((_DWORD *)this + 4) = v4;
}
