/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1404B1720
 * Callers:
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
 *     ExpGetNextHandleTableEntry @ 0x1405064FC (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x140506C10 (ExDupHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140507D70 (ObpReferenceProcessObjectByHandle.c)
 *     NtSetInformationObject @ 0x140566540 (NtSetInformationObject.c)
 *     ExpGetHandleExtraInfo @ 0x140756A50 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x140756A98 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x140756B50 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
  {
    v4 = *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1);
    return v4 + 4 * (v2 & 0x3FF);
  }
  if ( (v3 & 3) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF));
    return v4 + 4 * (v2 & 0x3FF);
  }
  return v3 + 4 * v2;
}
