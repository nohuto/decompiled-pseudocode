/*
 * XREFs of ?Stop@KeyframeSequence@@QEAAXXZ @ 0x18003EDD8
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Stop(KeyframeSequence *this)
{
  unsigned int i; // r8d
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 28); ++i )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL * i + 8) + 20LL);
    if ( v2 != 1 && (unsigned int)(v2 - 2) > 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  *((_BYTE *)this + 140) &= 0xFCu;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 50) = 0;
  *((_BYTE *)this + 102) = 0;
}
