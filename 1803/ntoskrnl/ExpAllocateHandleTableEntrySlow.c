/*
 * XREFs of ExpAllocateHandleTableEntrySlow @ 0x140553A18
 * Callers:
 *     ExpAllocateHandleTableEntry @ 0x1404B7650 (ExpAllocateHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1405533A0 (ExDupHandleTable.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x140547764 (ExpFreeTablePagedPool.c)
 *     ExpAllocateMidLevelTable @ 0x1405532F0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x140553364 (ExpAllocateTablePagedPool.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x140553AE8 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x140553C18 (ExpAllocateLowLevelTable.c)
 */

char __fastcall ExpAllocateHandleTableEntrySlow(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 *v10; // rax
  unsigned __int64 TablePagedPool; // rsi
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 LowLevelTable; // rax
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*((_QWORD *)a1 + 1) & 3) == 0 )
  {
    v10 = ExpAllocateMidLevelTable((__int64)a1, &v18, *a1);
    if ( !v10 )
      return 0;
    v10[1] = *v10;
    *v10 = v4;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, (unsigned __int64)v10 | 1);
    goto LABEL_9;
  }
  if ( (a1[2] & 3) != 1 )
  {
    v13 = (unsigned int)v3 >> 19;
    if ( (unsigned int)v13 >= 0x80 )
      return 0;
    v14 = *(_QWORD *)(v4 + 8 * v13);
    v15 = (unsigned int)v13;
    if ( v14 )
    {
      LowLevelTable = ExpAllocateLowLevelTable(a1, *a1);
      v18 = LowLevelTable;
      v8 = LowLevelTable;
      if ( LowLevelTable )
      {
        *(_QWORD *)(v14 + 8 * ((v3 >> 10) & 0x1FF)) = LowLevelTable;
        goto LABEL_6;
      }
      return 0;
    }
    v16 = ExpAllocateMidLevelTable((__int64)a1, &v18, *a1);
    if ( !v16 )
      return 0;
    *(_QWORD *)(v4 + 8 * v15) = v16;
LABEL_9:
    v8 = v18;
    goto LABEL_6;
  }
  v6 = (unsigned int)v3 >> 10;
  if ( (unsigned int)v6 >= 0x200 )
  {
    TablePagedPool = (unsigned __int64)ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 0x400uLL);
    if ( !TablePagedPool )
      return 0;
    v12 = ExpAllocateMidLevelTable((__int64)a1, &v18, v3);
    if ( !v12 )
    {
      ExpFreeTablePagedPool(*((struct _KPROCESS **)a1 + 2), (void *)TablePagedPool, 1024LL);
      return 0;
    }
    *(_QWORD *)TablePagedPool = v4;
    *(_QWORD *)(TablePagedPool + 8) = v12;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, TablePagedPool | 2);
    goto LABEL_9;
  }
  v18 = ExpAllocateLowLevelTable(a1, (unsigned int)v3);
  v8 = v18;
  if ( v18 )
  {
    *(_QWORD *)(v4 + 8 * v6) = v18;
LABEL_6:
    LOBYTE(v7) = a2 != 0;
    ExpInsertLowLevelTableIntoFreeList(a1, v8, a2, v7);
    return 1;
  }
  return 0;
}
