/*
 * XREFs of MiAllocateContiguousMemory @ 0x140123DD8
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x140123D30 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x14020F0E0 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiFreeContiguousPages @ 0x1401233D4 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MiFindContiguousMemoryInPool @ 0x1401241D8 (MiFindContiguousMemoryInPool.c)
 *     ExInsertPoolTag @ 0x14012435C (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
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
  int v8; // r15d
  BOOL v9; // r13d
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  int v12; // r9d
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int16 v15; // r8
  unsigned int v16; // ebx
  unsigned __int16 v18; // cx
  char *v19; // r9
  unsigned __int16 *v20; // rdi
  __int64 v21; // rax
  __int64 ContiguousMemoryInPool; // rax
  ULONG_PTR v23; // rbx
  char *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r15
  __int64 v30; // rbx
  unsigned __int8 v31; // al
  __int64 v32; // rax
  SIZE_T v34; // rdx
  int v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int16 *v37; // [rsp+60h] [rbp-48h]
  int v38; // [rsp+B0h] [rbp+8h]
  int v41; // [rsp+D0h] [rbp+28h]
  unsigned int v42; // [rsp+E0h] [rbp+38h]

  v6 = a5;
  v8 = a1;
  v9 = MmProtectFreedNonPagedPool == 1;
  v10 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v6 = a5 & 0xFFFFFFFD;
  if ( a4 && v10 > a4 || a2 > a3 || v10 + a2 <= a2 || v10 + a2 - 1 > a3 )
    return 0LL;
  v11 = MiProtectionToCacheAttribute(v6);
  v15 = KeNumberNodes;
  v16 = v11;
  v42 = v11;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    a6 = v12;
  if ( a6 == 0x80000000 )
  {
    v15 = KeNumberNodes;
    v18 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  }
  else
  {
    v18 = a6;
  }
  v19 = (char *)qword_14036C1C0;
  v35 = v18;
  v20 = (unsigned __int16 *)((char *)qword_14036C1C0 + 2 * v18 * v15);
  if ( a6 == 0x80000000 )
    v21 = v15;
  else
    v21 = 1LL;
  v38 = 512;
  v37 = &v20[v21];
  if ( (v6 & 2) != 0 )
  {
    v38 = 0;
    goto LABEL_18;
  }
  if ( v9 || v16 != 1 )
  {
LABEL_18:
    v41 = 135266304;
    v24 = &v19[2 * v35 * v15];
    if ( (int)MiFindContiguousPages(
                (__int64)&MiSystemPartition,
                a2,
                v14,
                v13,
                v10,
                v42,
                *(unsigned __int16 *)v24,
                0x80000000,
                135266304,
                &v36) < 0 )
    {
      while ( 1 )
      {
        v24 += 2;
        if ( v24 == (char *)v37 )
          break;
        v41 &= ~0x8000000u;
        if ( (int)MiFindContiguousPages(
                    (__int64)&MiSystemPartition,
                    a2,
                    a3,
                    a4,
                    v10,
                    v42,
                    *(unsigned __int16 *)v24,
                    0x80000000,
                    v41,
                    &v36) >= 0 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v25 = v36;
      v26 = MiMapContiguousMemory(v36 << 12, v10 << 12, v6, v9);
      v27 = v26;
      if ( v26 && !(unsigned int)ExInsertPoolTag(1416523587, v26, v8, v38, 2 * v9 + 1) )
      {
        v34 = (v10 << 12) + 4096;
        if ( !v9 )
          v34 = v10 << 12;
        MmUnmapIoSpace((PVOID)v27, v34);
        v27 = 0LL;
      }
      v28 = 48 * v25 - 0x58000000000LL;
      v29 = v28 + 48 * v10;
      if ( v27 )
        v30 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v30 = 0LL;
      do
      {
        *(_QWORD *)(v28 + 40) = *(_QWORD *)(v28 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        v31 = MiLockPageInline(v28);
        *(_QWORD *)(v28 + 8) = v30;
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v31);
        v28 += 48LL;
        v32 = v30 + 8;
        if ( !v30 )
          v32 = 0LL;
        v30 = v32;
      }
      while ( v28 < v29 );
      if ( v27 )
      {
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogPerfMemoryRangeEvent(v27, 0LL, 13LL, v10);
        return v27;
      }
      MiFreeContiguousPages((__int64)&MiSystemPartition, v36, v10);
    }
    return 0LL;
  }
  while ( 1 )
  {
    ContiguousMemoryInPool = MiFindContiguousMemoryInPool(a2, v14, v13, v8, *v20);
    v23 = ContiguousMemoryInPool;
    if ( ContiguousMemoryInPool )
      break;
    v13 = a4;
    ++v20;
    v14 = a3;
    if ( v20 == v37 )
    {
      v15 = KeNumberNodes;
      v19 = (char *)qword_14036C1C0;
      goto LABEL_18;
    }
  }
  if ( !(unsigned int)ExInsertPoolTag(1953394499, ContiguousMemoryInPool, v8, 512, 0) )
  {
    MiFreePoolPages(v23);
    return 0LL;
  }
  return v23;
}
