/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1405A4D70
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x1404B7360 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     RtlQueryAtomInAtomTable @ 0x140547C00 (RtlQueryAtomInAtomTable.c)
 *     ExEnumHandleTable @ 0x14054B830 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x14054BA14 (ExpGetNextHandleTableEntry.c)
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     ExDupHandleTable @ 0x1405533A0 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x1405541A0 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x14059B080 (PspReferenceCidTableEntry.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpGetHandleExtraInfo @ 0x1407BD4E4 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1407BD530 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1407BD5E8 (ExpSnapShotHandleTables.c)
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
