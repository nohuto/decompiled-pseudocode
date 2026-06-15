/*
 * XREFs of ??1?$SP_MEM@PEAG@@QEAA@XZ @ 0x1800D8B74
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SP_MEM<unsigned short *>::~SP_MEM<unsigned short *>(void **a1)
{
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(a1);
}
