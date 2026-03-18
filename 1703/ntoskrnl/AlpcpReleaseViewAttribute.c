/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x14044EE50
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140430600 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x140475E20 (AlpcpReleaseAttributes.c)
 *     AlpcMessageDestroyProcedure @ 0x14047EF00 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
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
