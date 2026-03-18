/*
 * XREFs of ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800A6C8C
 * Callers:
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3B34 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x1800A73C8 (-Repeat@KeyframeSequence@@QEAAXXZ.c)
 * Callees:
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A74DC (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A7534 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Play(KeyframeSequence *this)
{
  char v1; // al
  __int64 i; // r11
  int v4; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 132);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 132) = v1 | 2;
  }
  else
  {
    KeyframeSequence::SortKeyFrames(this);
    KeyframeSequence::ConfigureTimer(this);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 24 * i + 8) + 20LL);
      if ( v4 != 1 && (unsigned int)(v4 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    *((_BYTE *)this + 132) |= 3u;
  }
}
