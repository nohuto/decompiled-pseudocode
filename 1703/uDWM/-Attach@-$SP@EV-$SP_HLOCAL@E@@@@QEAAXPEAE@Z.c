/*
 * XREFs of ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180048FA0
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x1800466B8 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180048FC4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 */

__int64 __fastcall SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(a1);
  *a1 = a2;
  return result;
}
