/*
 * XREFs of CcUnregisterExternalCache @ 0x1401DD8A0
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x140150AD0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x1401DD7F8 (CcRemoveExternalCache.c)
 */

void __fastcall CcUnregisterExternalCache(unsigned __int64 *a1)
{
  CcRemoveExternalCache((__int64)a1);
  CcDeductDirtyPagesFromExternalCache((__int64)a1, a1[1]);
  ExFreePoolWithTag(a1, 0x43456343u);
}
