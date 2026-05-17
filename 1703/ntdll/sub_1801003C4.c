/*
 * XREFs of sub_1801003C4 @ 0x1801003C4
 * Callers:
 *     sub_1801005E0 @ 0x1801005E0 (sub_1801005E0.c)
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     RtlExtendMemoryZone @ 0x1800E9820 (RtlExtendMemoryZone.c)
 *     sub_1800FF204 @ 0x1800FF204 (sub_1800FF204.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18010F010 (RtlAllocateMemoryBlockLookaside.c)
 */

signed __int64 __fastcall sub_1801003C4(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  signed __int64 *v8; // r14
  signed __int64 v9; // rdi
  signed __int64 v10; // rbp
  signed __int64 v11; // rbx
  signed __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = qword_18015C7C0;
  v5 = a1;
  if ( !qword_18015C7C0 )
  {
    sub_1800FF204();
    v3 = qword_18015C7C0;
    if ( !qword_18015C7C0 )
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
      v12 = v10;
      v9 = v10;
      if ( v10 )
        break;
LABEL_15:
      if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)qword_18015C7C0, 8 * v5 + 16, &v12) < 0
        && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)qword_18015C7C0 + 16LL), 0x10000LL) < 0
         || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)qword_18015C7C0, 8 * v5 + 16, &v12) < 0) )
      {
        return 0LL;
      }
      v11 = v12;
      *(_DWORD *)(v12 + 8) = a3;
      *(_DWORD *)(v11 + 12) = v5;
      *(_QWORD *)v11 = v10;
      memmove((void *)(v11 + 16), a2, 8 * v5);
      if ( v10 == _InterlockedCompareExchange64(v8, v11, v10) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(qword_18015C7C0 + 8));
        return v12;
      }
      RtlInterlockedPushEntrySList_0(*(PSLIST_HEADER *)(v12 - 16), (PSLIST_ENTRY)(v12 - 48));
    }
    while ( *(_DWORD *)(v9 + 8) != a3
         || *(_DWORD *)(v9 + 12) != (_DWORD)v5
         || RtlCompareMemory(a2, (const void *)(v9 + 16), 8 * v5) != 8 * v5 )
    {
      v9 = *(_QWORD *)v9;
      v12 = v9;
      if ( !v9 )
        goto LABEL_15;
    }
    v8[1] = v9;
  }
  return v9;
}
