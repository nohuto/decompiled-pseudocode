/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D1C4
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00695D0 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C006CAB0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002398 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006827C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006838C (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0069F8C (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A6AE8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(__int64 *a1, __int64 a2)
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
  unsigned int v23; // r14d
  VIDMM_RECYCLE_RANGE *v24; // rdi
  VIDMM_RECYCLE_RANGE *v25; // r15
  _QWORD *v26; // rcx
  char v27; // bl
  struct VIDMM_RECYCLE_RANGE *v28; // rax
  __int64 v29; // r8
  struct VIDMM_RECYCLE_RANGE *v30; // rsi
  NTSTATUS v31; // eax
  __int64 v32; // r15
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned int v35; // ebx
  _QWORD *v36; // rax
  __int64 v37; // r8
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
        goto LABEL_19;
      }
    }
    return 0LL;
  }
  v20 = *(void **)(a2 + 32);
LABEL_19:
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
    v31 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v32 = v31;
    if ( v31 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v11);
      v33[3] = BaseAddress;
      v33[4] = a1;
      v33[5] = v32;
      v33[6] = **(_QWORD **)(*(_QWORD *)(a1[4] + 8) + 8LL);
      WdLogEvent5_WdWarning(v33);
      return 0LL;
    }
    a1[6] = (__int64)BaseAddress;
  }
  if ( v13 )
  {
    v23 = *(_DWORD *)(v5 + 88);
    v24 = *(VIDMM_RECYCLE_RANGE **)(v5 + 64);
    v25 = *(VIDMM_RECYCLE_RANGE **)(v5 + 72);
    if ( v23 == 3 && g_IsInternalRelease )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9, v21);
      v34[5] = 0LL;
      v34[6] = 0LL;
      v34[7] = 0LL;
      v34[3] = 270LL;
      v34[4] = 9LL;
      WdLogEvent5_WdCriticalError(v34);
    }
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v23, v5);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v6, (struct _SLIST_ENTRY *)v5);
    v26 = (_QWORD *)*((_QWORD *)v24 + 16);
    v27 = 0;
    *v26 = a1 + 9;
    a1[10] = (__int64)v26;
    while ( 1 )
    {
      v28 = VIDMM_RECYCLE_RANGE::GetNextRange(v24);
      if ( v24 == v25 )
        v27 = 1;
      v30 = v28;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct _SLIST_ENTRY *)v24, v29);
      if ( v27 )
        break;
      v24 = v30;
    }
  }
  else
  {
    v35 = *(_DWORD *)(a2 + 88);
    if ( v35 == 3 && g_IsInternalRelease )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v9, v21);
      v36[5] = 0LL;
      v36[6] = 0LL;
      v36[7] = 0LL;
      v36[3] = 270LL;
      v36[4] = 9LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v35, a2);
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct _SLIST_ENTRY *)a2, v37);
  }
  return (unsigned int)(v22 != 0) + 1;
}
