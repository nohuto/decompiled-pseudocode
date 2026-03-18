/*
 * XREFs of ExFreeHeapPool @ 0x1402BD494
 * Callers:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14000A140 (MiDeterminePoolType.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400A4600 (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     ExpReleasePoolQuota @ 0x1402B8F50 (ExpReleasePoolQuota.c)
 *     ExpRemoveTagForBigPages @ 0x1402B8FA4 (ExpRemoveTagForBigPages.c)
 *     ExGetHeapFromVA @ 0x1402BD6B4 (ExGetHeapFromVA.c)
 */

__int64 __fastcall ExFreeHeapPool(__int64 BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  int v2; // eax
  __int16 v3; // di
  unsigned __int64 v4; // r14
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  ULONG_PTR HeapFromVA; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // r10d
  __int64 v11; // r11
  unsigned int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // r8
  int v15; // eax
  int v16; // ecx
  __int64 result; // rax
  __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v19; // [rsp+90h] [rbp+38h] BYREF
  __int64 v20; // [rsp+98h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+48h] BYREF
  int v22; // [rsp+A8h] [rbp+50h] BYREF

  v1 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v6 = *(_BYTE *)(BugCheckParameter2 - 13);
    v1 = BugCheckParameter2 - 16;
    if ( (v6 & 4) != 0 )
    {
      v1 += -16LL * (unsigned __int8)*(_WORD *)v1;
      *(_BYTE *)(v1 + 3) |= 4u;
      v6 = *(_BYTE *)(v1 + 3);
    }
    v5 = *(_DWORD *)(v1 + 4);
    v4 = v1 + 16;
    v3 = v6;
    v21 = v5;
    v22 = v6;
    if ( (v6 & 8) != 0 )
      ExpReleasePoolQuota(v1);
  }
  else
  {
    v2 = MiDeterminePoolType(BugCheckParameter2);
    if ( v2 == 32 )
      v2 = 0;
    ExpRemoveTagForBigPages(v1, v2, &v21, &v22, v18, &v20, &v19);
    v3 = v22;
    v4 = v1;
    v5 = v21;
  }
  HeapFromVA = ExGetHeapFromVA(v1);
  RtlpHpFreeHeap(HeapFromVA, v1, 0, v18);
  v8 = v18[0];
  if ( v21 == PoolHitTag )
    __debugbreak();
  v9 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v3, v5, v4, v18[0]);
  if ( (v3 & 0x20) != 0 )
  {
    v11 = ExpSessionPoolTrackTable;
    v10 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    LODWORD(v9) = KeGetPcr()->Prcb.Number;
    v10 = PoolTrackTableMask;
    v11 = (__int64)*(&ExPoolTagTables + v9);
  }
  v12 = v10 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
  while ( 1 )
  {
    v13 = 56LL * v12;
    v14 = (_DWORD *)(v13 + v11);
    v15 = *(_DWORD *)(v13 + v11);
    if ( v15 == v5 )
      break;
    if ( v15 || (v3 & 0x20) != 0 || (v16 = *(_DWORD *)(v13 + PoolTrackTable)) == 0 )
    {
      v12 = v10 & (v12 + 1);
      if ( v12 == (v10 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32))) )
        return ExpRemovePoolTrackerExpansion(v5, v8, v3);
    }
    else
    {
      *v14 = v16;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)((char *)v14 + ((v3 & 1) != 0 ? 0x18 : 0) + 24));
  result = (v3 & 1) != 0 ? 0x18 : 0;
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v14 + result + 8), -v8);
  return result;
}
