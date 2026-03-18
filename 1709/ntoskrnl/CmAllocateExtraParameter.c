/*
 * XREFs of CmAllocateExtraParameter @ 0x14068A998
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1406A7B04 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140192F40 (memset.c)
 */

_QWORD *__fastcall CmAllocateExtraParameter(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  result = CmpAllocateTransientPoolWithTag(a1, 0x50uLL, 0x50454D43u);
  v2 = result;
  if ( result )
  {
    memset(result, 0, 0x50uLL);
    v2[5] = 32LL;
    v2[4] = VrpOriginalKeyNameParameterCleanup;
    result = v2 + 6;
    *((_OWORD *)v2 + 1) = VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
  }
  return result;
}
