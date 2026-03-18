/*
 * XREFs of ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C0138328
 * Callers:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132468 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132538 (-AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 * Callees:
 *     sqrt_0 @ 0x1C00AA9CD (sqrt_0.c)
 */

char __fastcall ndotprod(int a1, int a2, int a3, int a4, double *a5)
{
  double v9; // xmm6_8
  double v10; // xmm0_8

  v9 = sqrt_0((double)(a2 * a2 + a1 * a1));
  v10 = sqrt_0((double)(a4 * a4 + a3 * a3));
  *a5 = (double)a1 / v9 * ((double)a3 / v10) + (double)a2 / v9 * ((double)a4 / v10);
  return 1;
}
