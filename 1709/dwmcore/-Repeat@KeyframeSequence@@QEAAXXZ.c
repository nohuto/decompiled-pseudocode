/*
 * XREFs of ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x1800A73C8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800A6C8C (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A7534 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?Update@Timer@@QEAAXH_N@Z @ 0x1800BC034 (-Update@Timer@@QEAAXH_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Repeat(KeyframeSequence *this)
{
  int v2; // ebx
  __int64 v3; // r9
  unsigned int v4; // r8d
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 18) - *((_DWORD *)this + 20);
  KeyframeSequence::ConfigureTimer(this);
  KeyframeSequence::Play(this);
  if ( v2 <= 0 )
    v2 = 0;
  Timer::Update((KeyframeSequence *)((char *)this + 72), v2, 1);
  v4 = *((_DWORD *)this + 26);
  if ( v4 )
  {
    do
    {
      v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 24 * v3 + 8) + 20LL);
      if ( v5 != 1 && (unsigned int)(v5 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
}
