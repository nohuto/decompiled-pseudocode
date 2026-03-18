/*
 * XREFs of ExpLookupHandleTableEntry @ 0x140531E20
 * Callers:
 *     NtSetInformationObject @ 0x1404276F0 (NtSetInformationObject.c)
 *     ExEnumHandleTable @ 0x140428630 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x140428814 (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x14042B980 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x14042F3C0 (ExSweepHandleTable.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 *     PspReferenceCidTableEntry @ 0x14050F9F0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140517B10 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpGetHandleExtraInfo @ 0x1407172E0 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x140717328 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1407173E0 (ExpSnapShotHandleTables.c)
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
