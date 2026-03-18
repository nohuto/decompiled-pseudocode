/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0058920
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0071B6C (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0005640 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00533DC (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058BD8 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0058CE0 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00AE704 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v6; // rbp
  void *v7; // rbx
  void *CurrentProcess; // r15
  int v9; // r8d
  struct VIDMM_MDL_RANGE *v11; // rdi
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v12; // rax
  struct VIDMM_MDL_RANGE *i; // r13
  _QWORD *v14; // rax
  __int64 v15; // rcx
  enum _LOCK_OPERATION v16; // r8d
  void *v17; // rsi
  void *v18; // rbp
  __int64 v19; // rdx
  char v20; // r14
  int *v21; // rax
  int v22; // ecx
  int v23; // ebx
  int v24; // eax
  VIDMM_RECYCLE_HEAP_MGR *v26; // rcx
  int v27; // eax
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+90h] [rbp+8h]
  enum _LOCK_OPERATION v35; // [rsp+A0h] [rbp+18h] BYREF
  struct VIDMM_SEGMENT *v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = a6;
  v7 = a5;
  CurrentProcess = 0LL;
  v9 = -1;
  v33 = a6 - a5;
  v11 = 0LL;
  v12 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  for ( i = 0LL;
        v12 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
        v12 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v12 )
  {
    if ( v9 >= 0 )
      break;
    if ( *((_QWORD *)v12 - 1) > (unsigned __int64)a5 )
    {
      if ( *((_QWORD *)v12 - 2) < (unsigned __int64)a6 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        i = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v12 - 24);
      }
    }
    else
    {
      v9 = -1;
      v11 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v12 - 24);
    }
  }
  v14 = operator new[](0x30uLL, 0x32316956u, PagedPool);
  v17 = v14;
  if ( v14 )
  {
    v14[2] = v6;
    v18 = 0LL;
    *v14 = 0LL;
    v14[1] = v7;
    v14[5] = this;
    v14[3] = 0LL;
    v14[4] = 0LL;
    v19 = *(_QWORD *)this;
    v20 = 0;
    a6 = 0LL;
    a5 = 0LL;
    v21 = *(int **)(v19 + 32);
    LOBYTE(v35) = 0;
    v22 = *v21;
    if ( (unsigned int)(*v21 - 3) <= 3 && (unsigned int)(v22 - 5) > 1 )
    {
      v27 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v19 + 56),
              (unsigned __int64)v7,
              v33,
              ((v22 - 4) & 0xFFFFFFFD) == 0,
              (void **)&a6,
              (void **)&a5,
              0,
              (unsigned __int8 *)&v35);
      v28 = v27;
      if ( v27 < 0 )
      {
        operator delete(v17);
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29);
        v31[3] = v33;
        v31[4] = v7;
        v31[5] = *(_QWORD *)this;
        v31[6] = v28;
        v31[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v31);
        return (unsigned int)v28;
      }
      v7 = a6;
      v18 = a5;
      v20 = v35;
    }
    v23 = VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v17, v7, v16, v36, a2);
    v24 = **(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(v24 - 3) <= 3 )
    {
      v26 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v24 - 5);
      if ( (unsigned int)v26 > 1 )
      {
        if ( !v20 )
          CurrentProcess = (void *)PsGetCurrentProcess();
        if ( v33 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v26, 0) )
        {
          if ( CurrentProcess )
            MmUnmapViewOfSection(CurrentProcess, v18);
          else
            MmUnmapViewInSystemSpace(v18);
        }
        else
        {
          VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(*(_QWORD *)this + 56LL), v18);
        }
      }
    }
    if ( v23 < 0 )
      operator delete(v17);
    else
      VIDMM_MDL_RANGE::InsertBetween((VIDMM_MDL_RANGE *)v17, v11, i);
    return (unsigned int)v23;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0047640);
    v32 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v32 + 24) = 5929LL;
    WdLogEvent5_WdLowResource(v32);
    return 3221225495LL;
  }
}
