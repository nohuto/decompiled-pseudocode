/*
 * XREFs of CcUnregisterExternalCache @ 0x1401E0810
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x14014B1D0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x1401E0768 (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache((__int64)P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
