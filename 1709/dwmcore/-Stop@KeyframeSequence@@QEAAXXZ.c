/*
 * XREFs of ?Stop@KeyframeSequence@@QEAAXXZ @ 0x1800A6AC4
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Stop(KeyframeSequence *this)
{
  unsigned int i; // r8d
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 24LL * i + 8) + 20LL);
    if ( v2 != 1 && (unsigned int)(v2 - 2) > 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  *((_BYTE *)this + 132) &= 0xFCu;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_WORD *)this + 46) = 0;
}
