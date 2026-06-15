/*
 * XREFs of ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x18002F484
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 */

void __fastcall SP<unsigned short,SP_MEM<unsigned short>>::Reset(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
