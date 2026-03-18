/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0055A58
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007047C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0071A10 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0005678 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006D734 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D844 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070D80 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00ADFD4 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(_QWORD *a1, __int64 a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  __int64 v5; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v6; // r12
  void *v7; // rbp
  unsigned __int64 SmallAllocationBlockSize; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // al
  bool v13; // r14
  bool v14; // al
  struct VIDMM_RECYCLE_RANGE *v16; // r10
  struct VIDMM_RECYCLE_RANGE *v17; // r11
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  char v19; // r9
  void *v20; // rax
  ULONG_PTR v21; // r8
  char v22; // bp
  NTSTATUS v23; // eax
  __int64 v24; // r15
  _QWORD *v25; // rax
  unsigned int v26; // r14d
  VIDMM_RECYCLE_RANGE *v27; // rsi
  VIDMM_RECYCLE_RANGE *v28; // r15
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  char v31; // di
  struct VIDMM_RECYCLE_RANGE *v32; // rax
  struct VIDMM_RECYCLE_RANGE *v33; // rbx
  unsigned int v34; // ebx
  _QWORD *v35; // rax
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = (VIDMM_RECYCLE_HEAP_MGR *)a1[4];
  if ( (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 136);
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 1);
  v7 = (void *)a1[5];
  SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(
                               v4,
                               (unsigned int)(*(_DWORD *)v4 - 5) <= 1);
  v11 = v10 - (_QWORD)v7;
  v12 = v10 - (__int64)v7 > SmallAllocationBlockSize;
  v13 = v5 && *(_QWORD *)(v5 + 40) == v10 && v12;
  v14 = !v5 && *(_QWORD *)(a2 + 40) == v10 && v12;
  if ( !v13 && !v14 )
    return 0LL;
  BaseAddress = 0LL;
  if ( v13 )
  {
    v16 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 64);
    v17 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 72);
    NextRange = v16;
    while ( !*((_DWORD *)NextRange + 16) )
    {
      if ( NextRange == v17 )
        v19 = 1;
      else
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      if ( v19 )
      {
        v20 = (void *)*((_QWORD *)v16 + 4);
        goto LABEL_24;
      }
    }
    return 0LL;
  }
  v20 = *(void **)(a2 + 32);
LABEL_24:
  v21 = v10 - (_QWORD)v20;
  BaseAddress = v20;
  RegionSize = v21;
  if ( v20 == v7 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 0;
    v23 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v24 = v23;
    if ( v23 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v9);
      v25[3] = BaseAddress;
      v25[4] = a1;
      v25[5] = v24;
      v25[6] = **(_QWORD **)(*(_QWORD *)(a1[4] + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v25);
      return 0LL;
    }
    a1[6] = BaseAddress;
  }
  if ( v13 )
  {
    v26 = *(_DWORD *)(v5 + 88);
    v27 = *(VIDMM_RECYCLE_RANGE **)(v5 + 64);
    v28 = *(VIDMM_RECYCLE_RANGE **)(v5 + 72);
    if ( v26 == 3 && g_IsInternalRelease )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9, v21);
      v29[5] = 0LL;
      v29[6] = 0LL;
      v29[7] = 0LL;
      v29[3] = 270LL;
      v29[4] = 9LL;
      WdLogEvent5_WdCriticalError(v29);
    }
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v26, v5);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v6, (struct VIDMM_RECYCLE_MULTIRANGE *)v5);
    v30 = (_QWORD *)*((_QWORD *)v27 + 16);
    *v30 = a1 + 9;
    a1[10] = v30;
    v31 = 0;
    do
    {
      v32 = VIDMM_RECYCLE_RANGE::GetNextRange(v27);
      if ( v27 == v28 )
        v31 = 1;
      v33 = v32;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, v27);
      if ( v31 )
        v33 = v27;
      v27 = v33;
    }
    while ( !v31 );
  }
  else
  {
    v34 = *(_DWORD *)(a2 + 88);
    if ( v34 == 3 && g_IsInternalRelease )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9, v21);
      v35[5] = 0LL;
      v35[6] = 0LL;
      v35[7] = 0LL;
      v35[3] = 270LL;
      v35[4] = 9LL;
      WdLogEvent5_WdCriticalError(v35);
    }
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v34, a2);
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct VIDMM_RECYCLE_RANGE *)a2);
  }
  return (unsigned int)(v22 != 0) + 1;
}
