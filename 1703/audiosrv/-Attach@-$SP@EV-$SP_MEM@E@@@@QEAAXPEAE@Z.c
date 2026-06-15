/*
 * XREFs of ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x180057D54
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180057D78 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

__int64 __fastcall SP<unsigned char,SP_MEM<unsigned char>>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = SP<unsigned short *,SP_MEM<unsigned short *>>::Reset();
  *a1 = a2;
  return result;
}
