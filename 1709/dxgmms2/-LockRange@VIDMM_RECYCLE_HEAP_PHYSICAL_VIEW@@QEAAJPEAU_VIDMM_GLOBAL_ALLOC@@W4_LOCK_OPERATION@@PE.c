/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C004CC3C
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C006CBE0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002360 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CF8C (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C004D094 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0074858 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v6; // rdi
  char *v7; // r10
  void *v8; // rsi
  char *v9; // r8
  unsigned __int64 v10; // r15
  char v12; // bp
  int v13; // ecx
  struct VIDMM_MDL_RANGE *v14; // r12
  struct VIDMM_MDL_RANGE *v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  enum _LOCK_OPERATION v19; // r8d
  void *v20; // rbx
  __int64 v21; // rdx
  void *v22; // rdi
  int v23; // ecx
  int v24; // esi
  int v25; // eax
  int v27; // eax
  __int64 v28; // rdi
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  void *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  enum _LOCK_OPERATION v35; // [rsp+90h] [rbp+18h] BYREF
  struct VIDMM_SEGMENT *v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = a6;
  v7 = (char *)this + 8;
  v8 = a5;
  v9 = (char *)*((_QWORD *)this + 1);
  v10 = a6 - a5;
  v12 = 0;
  v13 = -1;
  v14 = 0LL;
  v15 = 0LL;
  while ( v9 != v7 && v13 < 0 )
  {
    if ( *((_QWORD *)v9 - 1) > (unsigned __int64)a5 )
    {
      if ( *((_QWORD *)v9 - 2) < (unsigned __int64)a6 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v15 = (struct VIDMM_MDL_RANGE *)(v9 - 24);
      }
    }
    else
    {
      v13 = -1;
      v14 = (struct VIDMM_MDL_RANGE *)(v9 - 24);
    }
    v9 = *(char **)v9;
  }
  v16 = operator new[](0x30uLL, 0x32316956u, PagedPool);
  v20 = v16;
  if ( v16 )
  {
    *v16 = 0LL;
    v16[1] = v8;
    v16[2] = v6;
    v16[5] = this;
    v16[3] = 0LL;
    v16[4] = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    _InterlockedIncrement(&dword_1C0040640);
    v31 = WdLogNewEntry5_WdLowResource(v18, v17);
    *(_QWORD *)(v31 + 24) = 5730LL;
    WdLogEvent5_WdLowResource(v31);
    return 3221225495LL;
  }
  v21 = *(_QWORD *)this;
  v22 = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  LOBYTE(v35) = 0;
  v23 = **(_DWORD **)(v21 + 32);
  if ( (unsigned int)(v23 - 3) <= 3 && (unsigned int)(v23 - 5) > 1 )
  {
    v27 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v21 + 56),
            (unsigned __int64)v8,
            v10,
            ((v23 - 4) & 0xFFFFFFFD) == 0,
            (void **)&a6,
            (void **)&a5,
            0,
            (unsigned __int8 *)&v35);
    v28 = v27;
    if ( v27 < 0 )
    {
      operator delete(v20);
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v32);
      v33[3] = v10;
      v33[4] = v8;
      v33[5] = *(_QWORD *)this;
      v33[6] = v28;
      v33[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v33);
      return (unsigned int)v28;
    }
    v8 = a6;
    v22 = a5;
    v12 = v35;
  }
  v24 = VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v20, v8, v19, v36, a2);
  v25 = **(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (unsigned int)(v25 - 3) <= 3 && (unsigned int)(v25 - 5) > 1 )
  {
    if ( v12 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess();
    if ( v10 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0) )
    {
      if ( v30 )
        MmUnmapViewOfSection(v30, v22);
      else
        MmUnmapViewInSystemSpace(v22);
    }
    else
    {
      VidMmUnmapViewAsync(v30, *(PVOID *)(*(_QWORD *)this + 56LL), v22);
    }
  }
  if ( v24 < 0 )
    operator delete(v20);
  else
    VIDMM_MDL_RANGE::InsertBetween((VIDMM_MDL_RANGE *)v20, v14, v15);
  return (unsigned int)v24;
}
