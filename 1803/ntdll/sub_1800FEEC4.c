/*
 * XREFs of sub_1800FEEC4 @ 0x1800FEEC4
 * Callers:
 *     sub_1800FF100 @ 0x1800FF100 (sub_1800FF100.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x180003E90 (RtlExtendMemoryZone.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     RtlCompareMemory @ 0x18009F080 (RtlCompareMemory.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800FDA58 @ 0x1800FDA58 (sub_1800FDA58.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18010F010 (RtlAllocateMemoryBlockLookaside.c)
 */

char *__fastcall sub_1800FEEC4(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v8; // r14
  char *v9; // rdi
  char *v10; // rbp
  char *v11; // rax
  _DWORD *v12; // rbx
  PVOID Block; // [rsp+68h] [rbp+20h] BYREF

  v3 = qword_18015D818;
  v5 = a1;
  if ( !qword_18015D818 )
  {
    sub_1800FDA58();
    v3 = qword_18015D818;
    if ( !qword_18015D818 )
      return 0LL;
  }
  if ( !(_DWORD)v5 )
    return 0LL;
  v8 = v3 + 16 * (a3 % 0x191 + 1LL);
  v9 = *(char **)(v8 + 8);
  if ( !v9
    || *((_DWORD *)v9 + 2) != a3
    || *((_DWORD *)v9 + 3) != (_DWORD)v5
    || RtlCompareMemory(a2, v9 + 16, 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *(char **)v8;
      Block = v10;
      v9 = v10;
      if ( v10 )
        break;
LABEL_16:
      if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)qword_18015D818, 8 * v5 + 16, &Block) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)qword_18015D818 + 16LL), 0x10000LL) < 0
         || RtlAllocateMemoryBlockLookaside(*(PVOID *)qword_18015D818, 8 * v5 + 16, &Block) < 0) )
      {
        return 0LL;
      }
      v12 = Block;
      *((_DWORD *)Block + 2) = a3;
      v12[3] = v5;
      *(_QWORD *)v12 = v10;
      memmove(v12 + 4, a2, 8 * v5);
      if ( v10 == (char *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)v8,
                            (signed __int64)v12,
                            (signed __int64)v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(qword_18015D818 + 8));
        return (char *)Block;
      }
      RtlInterlockedPushEntrySList_0(*((PSLIST_HEADER *)Block - 2), (PSLIST_ENTRY)Block - 3);
    }
    v11 = v10;
    while ( *((_DWORD *)v9 + 2) != a3
         || *((_DWORD *)v9 + 3) != (_DWORD)v5
         || RtlCompareMemory(a2, v11 + 16, 8 * v5) != 8 * v5 )
    {
      v11 = *(char **)v9;
      Block = v11;
      v9 = v11;
      if ( !v11 )
        goto LABEL_16;
    }
    *(_QWORD *)(v8 + 8) = v9;
  }
  return v9;
}
