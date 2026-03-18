/*
 * XREFs of MiAllocateContiguousMemory @ 0x140119418
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x140119380 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x140216E20 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MiFindContiguousMemoryInPool @ 0x140119800 (MiFindContiguousMemoryInPool.c)
 *     ExInsertPoolTag @ 0x140119970 (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 */

ULONG_PTR __fastcall MiAllocateContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // esi
  BOOL v10; // r12d
  unsigned __int64 v11; // r14
  unsigned int v12; // eax
  unsigned __int64 v13; // r10
  __int64 v14; // r11
  unsigned int v15; // r9d
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // rdi
  __int64 v19; // rax
  __int64 ContiguousMemoryInPool; // rax
  ULONG_PTR v21; // rbx
  unsigned __int16 *v22; // rbx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rbp
  __int64 v28; // rbx
  unsigned __int8 v29; // al
  __int64 v30; // rax
  SIZE_T v32; // rdx
  unsigned __int64 v33; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int16 *v34; // [rsp+68h] [rbp-40h]
  int v35; // [rsp+B0h] [rbp+8h]
  int v37; // [rsp+C8h] [rbp+20h]
  int v38; // [rsp+D0h] [rbp+28h]
  unsigned int v39; // [rsp+E0h] [rbp+38h]

  v6 = a5;
  v10 = MmProtectFreedNonPagedPool == 1;
  v11 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v6 = a5 & 0xFFFFFFFD;
  if ( a4 && v11 > a4 || a2 > a3 || v11 + a2 <= a2 || v11 + a2 - 1 > a3 )
    return 0LL;
  v12 = MiProtectionToCacheAttribute(v6);
  v15 = v12;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    a6 = v14;
  v39 = v12;
  if ( a6 == 0x80000000 )
    v17 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  else
    v17 = a6;
  v37 = v17;
  v18 = (unsigned __int16 *)((char *)qword_140388508 + 2 * v17 * (unsigned __int16)KeNumberNodes);
  if ( a6 == 0x80000000 )
    v19 = (unsigned __int16)KeNumberNodes;
  else
    v19 = 1LL;
  v35 = 512;
  v34 = &v18[v19];
  if ( (v6 & 2) != 0 )
  {
    v35 = v14;
    goto LABEL_18;
  }
  if ( v10 || v15 != 1 )
  {
LABEL_18:
    v38 = 135266304;
    v22 = (unsigned __int16 *)((char *)qword_140388508 + 2 * v37 * (unsigned __int16)KeNumberNodes);
    if ( (int)MiFindContiguousPages(
                (__int64)&MiSystemPartition,
                a2,
                v13,
                a4,
                v11,
                v15,
                *v22,
                0x80000000,
                135266304,
                v14,
                (__int64 *)&v33) < 0 )
    {
      while ( ++v22 != v34 )
      {
        v38 &= ~0x8000000u;
        if ( (int)MiFindContiguousPages(
                    (__int64)&MiSystemPartition,
                    a2,
                    a3,
                    a4,
                    v11,
                    v39,
                    *v22,
                    0x80000000,
                    v38,
                    0LL,
                    (__int64 *)&v33) >= 0 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v23 = v33;
      v24 = MiMapContiguousMemory(v33 << 12, v11 << 12, v6, v10);
      v25 = v24;
      if ( v24 && !(unsigned int)ExInsertPoolTag(1416523587, v24, a1, v35, 2 * v10 + 1) )
      {
        v32 = (v11 << 12) + 4096;
        if ( !v10 )
          v32 = v11 << 12;
        MmUnmapIoSpace((PVOID)v25, v32);
        v25 = 0LL;
      }
      v26 = 48 * v23 - 0x58000000000LL;
      v27 = v26 + 48 * v11;
      if ( v25 )
        v28 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v28 = 0LL;
      do
      {
        *(_QWORD *)(v26 + 40) = *(_QWORD *)(v26 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        v29 = MiLockPageInline(v26);
        *(_QWORD *)(v26 + 8) = v28;
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v29);
        v26 += 48LL;
        v30 = v28 + 8;
        if ( !v28 )
          v30 = 0LL;
        v28 = v30;
      }
      while ( v26 < v27 );
      if ( v25 )
      {
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogPerfMemoryRangeEvent(v25, 0LL, 13LL, v11);
        return v25;
      }
      MiFreeContiguousPages((__int64)&MiSystemPartition, v33, v11);
    }
    return 0LL;
  }
  while ( 1 )
  {
    ContiguousMemoryInPool = MiFindContiguousMemoryInPool(a2, v13, a4, a1, *v18);
    v14 = 0LL;
    v21 = ContiguousMemoryInPool;
    if ( ContiguousMemoryInPool )
      break;
    v13 = a3;
    if ( ++v18 == v34 )
    {
      v15 = v39;
      goto LABEL_18;
    }
  }
  if ( !(unsigned int)ExInsertPoolTag(1953394499, ContiguousMemoryInPool, a1, 512, 0) )
  {
    MiFreePoolPages(v21, a1);
    return 0LL;
  }
  return v21;
}
