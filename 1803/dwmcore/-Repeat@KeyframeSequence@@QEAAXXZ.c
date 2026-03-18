/*
 * XREFs of ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x180019C14
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18003EE90 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x18003F088 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?Update@Timer@@QEAAXH_N@Z @ 0x1800C3EFC (-Update@Timer@@QEAAXH_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Repeat(KeyframeSequence *this)
{
  int v2; // ebx
  __int64 v3; // rsi
  unsigned int v4; // r8d
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 20) - *((_DWORD *)this + 22);
  KeyframeSequence::ConfigureTimer(this);
  KeyframeSequence::Play(this);
  v3 = 0LL;
  if ( v2 <= 0 )
    v2 = 0;
  Timer::Update((KeyframeSequence *)((char *)this + 80), v2, 1);
  v4 = *((_DWORD *)this + 28);
  if ( v4 )
  {
    do
    {
      v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24 * v3 + 8) + 20LL);
      if ( v5 != 1 && (unsigned int)(v5 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
}
