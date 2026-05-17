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

signed __int64 __fastcall sub_1800FEEC4(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  signed __int64 *v8; // r14
  signed __int64 v9; // rdi
  signed __int64 v10; // rbp
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  signed __int64 v13; // [rsp+68h] [rbp+20h] BYREF

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
  v8 = (signed __int64 *)(v3 + 16 * (a3 % 0x191 + 1LL));
  v9 = v8[1];
  if ( !v9
    || *(_DWORD *)(v9 + 8) != a3
    || *(_DWORD *)(v9 + 12) != (_DWORD)v5
    || RtlCompareMemory(a2, (const void *)(v9 + 16), 8 * v5) != 8 * v5 )
  {
    while ( 1 )
    {
      v10 = *v8;
      v13 = v10;
      v9 = v10;
      if ( v10 )
        break;
LABEL_16:
      if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)qword_18015D818, 8 * v5 + 16, &v13) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)qword_18015D818 + 16LL), 0x10000LL) < 0
         || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)qword_18015D818, 8 * v5 + 16, &v13) < 0) )
      {
        return 0LL;
      }
      v12 = v13;
      *(_DWORD *)(v13 + 8) = a3;
      *(_DWORD *)(v12 + 12) = v5;
      *(_QWORD *)v12 = v10;
      memmove((void *)(v12 + 16), a2, 8 * v5);
      if ( v10 == _InterlockedCompareExchange64(v8, v12, v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(qword_18015D818 + 8));
        return v13;
      }
      RtlInterlockedPushEntrySList_0(*(PSLIST_HEADER *)(v13 - 16), (PSLIST_ENTRY)(v13 - 48));
    }
    v11 = v10;
    while ( *(_DWORD *)(v9 + 8) != a3
         || *(_DWORD *)(v9 + 12) != (_DWORD)v5
         || RtlCompareMemory(a2, (const void *)(v11 + 16), 8 * v5) != 8 * v5 )
    {
      v11 = *(_QWORD *)v9;
      v13 = v11;
      v9 = v11;
      if ( !v11 )
        goto LABEL_16;
    }
    v8[1] = v9;
  }
  return v9;
}
