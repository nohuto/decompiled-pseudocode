/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1404DFC44
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1404CC1C0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x1404DC4C0 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1404DF1B4 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

void __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2, v3, v4, v5);
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
