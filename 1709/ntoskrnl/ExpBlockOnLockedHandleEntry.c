/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x14059D508
 * Callers:
 *     ExLockHandleTableEntry @ 0x1400BD9D4 (ExLockHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PspReferenceCidTableEntry @ 0x1404C5740 (PspReferenceCidTableEntry.c)
 *     ExMapHandleToPointer @ 0x1404D4D40 (ExMapHandleToPointer.c)
 *     ExSweepHandleTable @ 0x1404DD240 (ExSweepHandleTable.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     ExEnumHandleTable @ 0x140506320 (ExEnumHandleTable.c)
 *     NtSetInformationObject @ 0x140566540 (NtSetInformationObject.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((volatile __int64 *)(a1 + 48), a2, &v4, 8uLL, 0LL);
}
