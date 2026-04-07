/*
 * XREFs of ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180048FC4
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x1800466B8 (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180048FA0 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(void **a1)
{
  void *v2; // rcx
  HLOCAL result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = LocalFree(v2);
    *a1 = 0LL;
  }
  return result;
}
