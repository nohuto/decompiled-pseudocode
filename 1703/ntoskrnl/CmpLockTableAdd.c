/*
 * XREFs of CmpLockTableAdd @ 0x1401DFA5C
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     CmpTryToLockKcbExclusive @ 0x14066A484 (CmpTryToLockKcbExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall CmpLockTableAdd(__int64 a1, char a2)
{
  PSLIST_ENTRY v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r8
  signed __int32 v8; // eax

  v4 = RtlpInterlockedPopEntrySList(CmpLockTable);
  v5 = 0LL;
  if ( !v4 )
    KeBugCheckEx(0x51u, 0x14uLL, 0LL, 0LL, 0LL);
  v6 = (char *)v4 - (char *)CmpLockTable - 32;
  v4->Next = (_SLIST_ENTRY *)KeGetCurrentThread();
  v7 = v6 >> 4;
  LOBYTE(v5) = a2 != 0;
  *((_QWORD *)&v4->Next + 1) = a1 | v5;
  do
    v8 = *((_DWORD *)&CmpLockTable[1].HeaderX64 + 1);
  while ( v8 < (int)v7
       && _InterlockedCompareExchange((volatile signed __int32 *)&CmpLockTable[1].HeaderX64 + 1, v7, v8) < (int)v7 );
  return (unsigned int)v7;
}
