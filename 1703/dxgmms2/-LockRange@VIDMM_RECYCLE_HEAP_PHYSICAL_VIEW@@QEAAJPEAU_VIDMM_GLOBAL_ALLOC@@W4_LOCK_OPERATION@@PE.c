/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0048C88
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0068F1C (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0048200 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0048FD0 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C00490D8 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        void *a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // rsi
  void *v8; // rbx
  _QWORD **v10; // rcx
  unsigned __int64 v11; // r15
  struct VIDMM_MDL_RANGE *v12; // r12
  int v13; // r10d
  struct VIDMM_MDL_RANGE *v14; // r13
  _QWORD *i; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  enum _LOCK_OPERATION v18; // r8d
  void *v19; // rdi
  __int64 v20; // rdx
  void *v21; // rsi
  int v22; // ecx
  int v23; // ebp
  int v24; // eax
  int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  void *v29; // rbx
  void *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 CurrentProcess; // rax

  v6 = (unsigned __int64)a6;
  v8 = a5;
  v10 = (_QWORD **)((char *)this + 8);
  v11 = a6 - (_BYTE *)a5;
  v12 = 0LL;
  v13 = -1;
  v14 = 0LL;
  for ( i = *v10; i != v10 && v13 < 0; i = (_QWORD *)*i )
  {
    if ( *(i - 1) > (unsigned __int64)a5 )
    {
      if ( *(i - 2) < (unsigned __int64)a6 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v14 = (struct VIDMM_MDL_RANGE *)(i - 3);
      }
    }
    else
    {
      v13 = -1;
      v12 = (struct VIDMM_MDL_RANGE *)(i - 3);
    }
  }
  v16 = operator new[](0x30uLL, 0x32316956u, PagedPool);
  v18 = IoReadAccess;
  v19 = v16;
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
    v19 = 0LL;
  }
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C003C630);
    v31 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v31 + 24) = 5525LL;
    WdLogEvent5_WdLowResource(v31);
    return 3221225495LL;
  }
  v20 = *(_QWORD *)this;
  v21 = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  v22 = **(_DWORD **)(v20 + 32);
  if ( (unsigned int)(v22 - 3) <= 3 && (unsigned int)(v22 - 5) > 1 )
  {
    v26 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v20 + 56),
            (__int64)v8,
            v11,
            ((v22 - 4) & 0xFFFFFFFD) == 0,
            (void **)&a6,
            &a5,
            0,
            0LL);
    v27 = v26;
    if ( v26 < 0 )
    {
      operator delete(v19);
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32);
      v34[3] = v11;
      v34[4] = v8;
      v34[5] = *(_QWORD *)this;
      v34[6] = v27;
      v34[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v34);
      return (unsigned int)v27;
    }
    v8 = a6;
    v21 = a5;
  }
  v23 = VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v19, v8, v18, a4, a2);
  v24 = **(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (unsigned int)(v24 - 3) <= 3 && (unsigned int)(v24 - 5) > 1 )
  {
    v28 = dword_1C003C33C;
    if ( (unsigned __int64)qword_1C003C128 > 0x53333333 )
      v28 = dword_1C003C32C;
    if ( v11 <= (unsigned int)(v28 << 20) )
    {
      CurrentProcess = PsGetCurrentProcess();
      MmUnmapViewOfSection(CurrentProcess, v21);
    }
    else
    {
      v29 = *(void **)(*(_QWORD *)this + 56LL);
      v30 = (void *)PsGetCurrentProcess();
      VidMmUnmapViewAsync(v30, v29, v21);
    }
  }
  if ( v23 < 0 )
    operator delete(v19);
  else
    VIDMM_MDL_RANGE::InsertBetween((VIDMM_MDL_RANGE *)v19, v12, v14);
  return (unsigned int)v23;
}
