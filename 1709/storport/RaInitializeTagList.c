/*
 * XREFs of RaInitializeTagList @ 0x1C0062C68
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C0016F34 (RaidUnitAllocateResources.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 */

__int64 __fastcall RaInitializeTagList(__int64 a1, unsigned int a2, __int64 a3)
{
  PVOID Pool; // rax
  unsigned int v7; // ebx
  unsigned int HighestNodeNumber; // r13d
  unsigned int v9; // r15d
  __int64 v10; // r14
  PVOID v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // eax

  Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, 16LL * a2, 0x4D546152u, a3);
  v7 = 0;
  *(_QWORD *)(a1 + 64) = Pool;
  if ( !Pool )
    return 3221225495LL;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v9 = HighestNodeNumber + 1;
  v10 = HighestNodeNumber + 1;
  v11 = RaidAllocatePool(NonPagedPoolNxCacheAligned, v10 << 6, 0x4D546152u, a3);
  *(_QWORD *)a1 = v11;
  if ( !v11 )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0x4D546152u);
    *(_QWORD *)(a1 + 64) = 0LL;
    return 3221225495LL;
  }
  *(_DWORD *)(a1 + 72) = a2 / v9;
  v12 = 0LL;
  do
  {
    InitializeSListHead((PSLIST_HEADER)(v12 + *(_QWORD *)a1));
    v12 += 64LL;
    --v10;
  }
  while ( v10 );
  if ( a2 )
  {
    v13 = 0LL;
    v14 = 0LL;
    do
    {
      v15 = HighestNodeNumber;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + v13 + 8) = v7;
      v16 = v7 / *(_DWORD *)(a1 + 72);
      if ( v16 < v9 )
        v15 = v16;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)a1 + (v15 << 6)),
        (PSLIST_ENTRY)(v14 + *(_QWORD *)(a1 + 64)));
      ++v7;
      v13 += 16LL;
      v14 += 16LL;
    }
    while ( v7 < a2 );
  }
  return 0LL;
}
