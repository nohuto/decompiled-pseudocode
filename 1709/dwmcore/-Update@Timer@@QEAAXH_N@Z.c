/*
 * XREFs of ?Update@Timer@@QEAAXH_N@Z @ 0x1800BC034
 * Callers:
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x1800A6C58 (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x1800A73C8 (-Repeat@KeyframeSequence@@QEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A7534 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18011AAD0 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Timer::Update(Timer *this, int a2, char a3)
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
