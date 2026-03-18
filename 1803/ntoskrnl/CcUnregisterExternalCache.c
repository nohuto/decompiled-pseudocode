/*
 * XREFs of CcUnregisterExternalCache @ 0x14021FE10
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x14015B120 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x14021FD70 (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache((__int64)P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
