/*
 * XREFs of CcFreeVacbArray @ 0x1406875A4
 * Callers:
 *     CcDereferenceVacbArray @ 0x1401E15FC (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcFreeVacbArray(_DWORD *a1)
{
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x243uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExFreePoolWithTag(a1, 0x61566356u);
}
