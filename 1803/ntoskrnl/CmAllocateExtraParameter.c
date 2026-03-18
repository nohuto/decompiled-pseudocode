/*
 * XREFs of CmAllocateExtraParameter @ 0x1406EEDC0
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14070AD00 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x14070C188 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_QWORD *CmAllocateExtraParameter()
{
  _QWORD *result; // rax
  _QWORD *v1; // rbx

  result = CmpAllocateTransientPoolWithTag(PagedPool, 0x50uLL, 0x50454D43u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x50uLL);
    v1[5] = 32LL;
    v1[4] = VrpOriginalKeyNameParameterCleanup;
    result = v1 + 6;
    *((_OWORD *)v1 + 1) = VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
  }
  return result;
}
