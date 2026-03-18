/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x140468A24
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140462A78 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x140465C84 (AlpcpReleaseAttributes.c)
 *     AlpcMessageDestroyProcedure @ 0x14049FFA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2);
  return AlpcpDereferenceBlobEx(BugCheckParameter2);
}
