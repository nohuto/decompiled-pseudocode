/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004C7D8
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C006C9B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002360 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C004CE58 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C004CE78 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C004CF60 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CF8C (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C004D094 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0074858 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  char *v4; // rdx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // r9
  char *v7; // r8
  int v8; // eax
  void *v9; // rsi
  unsigned __int64 *v10; // rbx
  unsigned __int64 *NextRange; // r15
  void *i; // rdi
  unsigned __int64 v13; // rcx
  char v14; // di
  unsigned __int64 *v15; // r8
  _QWORD *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 *v18; // rdx
  __int64 v20; // r8
  int *v21; // rax
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // di
  unsigned __int64 *v29; // r8
  _QWORD *v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 *v32; // rdx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v33; // rdx
  VIDMM_MDL_RANGE *v34; // rdi
  unsigned __int64 v35; // rax
  VIDMM_MDL_RANGE *v36; // rax
  __int64 v37; // rdx
  enum _LOCK_OPERATION v38; // r8d
  VIDMM_MDL_RANGE *v39; // r14
  __int64 v40; // rdx
  enum _LOCK_OPERATION v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  struct VIDMM_MDL_RANGE *v45; // r13
  char v46; // r8
  unsigned __int64 *v47; // r10
  _QWORD *v48; // rax
  unsigned __int64 v49; // r9
  unsigned __int64 *v50; // r8
  _QWORD *v51; // r8
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  _QWORD *v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  VIDMM_MDL_RANGE *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  unsigned __int64 SmallAllocationSize; // rax
  void *v69; // rcx
  __int64 v70; // r8
  unsigned __int8 v71[8]; // [rsp+40h] [rbp-30h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v73; // [rsp+50h] [rbp-20h]
  unsigned __int64 v74; // [rsp+58h] [rbp-18h]
  struct VIDMM_MDL_RANGE *v75; // [rsp+60h] [rbp-10h]
  void *v77; // [rsp+C8h] [rbp+58h] BYREF

  v4 = (char *)this + 8;
  v5 = this;
  v7 = (char *)*((_QWORD *)this + 1);
  v8 = -1;
  LODWORD(v9) = 0;
  v10 = 0LL;
  while ( v7 != v4 && v8 < 0 )
  {
    v10 = (unsigned __int64 *)(v7 - 24);
    if ( *((_QWORD *)v7 - 1) > a2 )
      v8 = *((_QWORD *)v7 - 2) >= a3;
    else
      v8 = -1;
    v7 = *(char **)v7;
  }
  v75 = (struct VIDMM_MDL_RANGE *)v10;
  if ( !v8 )
  {
    NextRange = v10;
    for ( i = (void *)v10[1];
          NextRange[2] < a3;
          NextRange = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange) )
    {
      ;
    }
    v13 = NextRange[2];
    v74 = v13;
    if ( v13 <= a3 && (unsigned __int64)i >= a2 )
    {
      v14 = 0;
      do
      {
        VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
        v15 = v10;
        if ( v10 == NextRange )
          v14 = 1;
        else
          v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
        v16 = v15 + 3;
        v17 = v15[3];
        if ( *(unsigned __int64 **)(v17 + 8) != v15 + 3 || (v18 = (unsigned __int64 *)v15[4], (_QWORD *)*v18 != v16) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *v16 = 0LL;
        v15[4] = 0LL;
        operator delete(v15);
      }
      while ( !v14 );
      return (unsigned int)v9;
    }
    v20 = *(_QWORD *)v5;
    v77 = 0LL;
    MappedBase = 0LL;
    v71[0] = 0;
    v21 = *(int **)(v20 + 32);
    v73 = v13 - (_QWORD)i;
    v22 = *v21;
    if ( (unsigned int)(*v21 - 3) > 3 || (unsigned int)(v22 - 5) <= 1 )
    {
      v9 = i;
      v77 = i;
    }
    else
    {
      v57 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v20 + 56),
              (unsigned __int64)i,
              v13 - (_QWORD)i,
              ((v22 - 4) & 0xFFFFFFFD) == 0,
              &v77,
              &MappedBase,
              0,
              v71);
      v9 = (void *)v57;
      if ( v57 < 0 )
      {
        _InterlockedAdd(&dword_1C0040670, 1u);
        v60 = (_QWORD *)WdLogNewEntry5_WdLowResource(v59, v58);
        v60[3] = v73;
        v60[4] = v10[1];
        v60[5] = *(_QWORD *)this;
        v60[6] = v9;
        WdLogEvent5_WdLowResource(v60);
        return (unsigned int)v9;
      }
      v9 = v77;
      v13 = v74;
    }
    if ( (unsigned __int64)i >= a2 )
      goto LABEL_23;
    if ( v13 <= a3 )
    {
      LODWORD(v9) = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v10, v9, v10[1], a2);
      if ( (int)v9 >= 0 )
      {
        v28 = v10 == NextRange;
        if ( v10 != NextRange )
          v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
        if ( v75 != (struct VIDMM_MDL_RANGE *)NextRange )
        {
          do
          {
            VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
            v29 = v10;
            if ( v10 == NextRange )
              v28 = 1;
            else
              v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
            v30 = v29 + 3;
            v31 = v29[3];
            if ( *(unsigned __int64 **)(v31 + 8) != v29 + 3 || (v32 = (unsigned __int64 *)v29[4], (_QWORD *)*v32 != v30) )
              __fastfail(3u);
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
            *v30 = 0LL;
            v29[4] = 0LL;
            operator delete(v29);
          }
          while ( !v28 );
        }
        goto LABEL_26;
      }
      _InterlockedAdd(&dword_1C0040640, 1u);
      v61 = WdLogNewEntry5_WdLowResource(v27, v26);
      *(_QWORD *)(v61 + 24) = 5976LL;
LABEL_73:
      WdLogEvent5_WdLowResource(v61);
      goto LABEL_26;
    }
    if ( (unsigned __int64)i >= a2 )
    {
LABEL_23:
      if ( v13 > a3 )
      {
        LODWORD(v9) = VIDMM_MDL_RANGE::LockUnlock(
                        (VIDMM_MDL_RANGE *)NextRange,
                        (char *)v9 + a3 - v10[1],
                        a3,
                        NextRange[2]);
        if ( (int)v9 >= 0 )
        {
          while ( v10 != NextRange )
          {
            VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
            v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
            v53 = (_QWORD *)(v52 + 24);
            v54 = *(_QWORD *)(v52 + 24);
            if ( *(_QWORD **)(v54 + 8) != v53 || (v55 = (_QWORD *)v53[1], (_QWORD *)*v55 != v53) )
              __fastfail(3u);
            *v55 = v54;
            *(_QWORD *)(v54 + 8) = v55;
            *v53 = 0LL;
            v51[4] = 0LL;
            operator delete(v51);
          }
          goto LABEL_26;
        }
        _InterlockedAdd(&dword_1C0040640, 1u);
        v61 = WdLogNewEntry5_WdLowResource(v24, v23);
        *(_QWORD *)(v61 + 24) = 6032LL;
        goto LABEL_73;
      }
    }
    v34 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
    if ( v34 )
    {
      v35 = v10[1];
      v33 = this;
      *((_QWORD *)v34 + 2) = a2;
      *((_QWORD *)v34 + 3) = 0LL;
      *((_QWORD *)v34 + 4) = 0LL;
      *(_QWORD *)v34 = 0LL;
      *((_QWORD *)v34 + 1) = v35;
      *((_QWORD *)v34 + 5) = this;
    }
    else
    {
      v34 = 0LL;
    }
    if ( v34 )
    {
      v36 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
      v39 = v36;
      if ( v36 )
      {
        *((_QWORD *)v36 + 2) = NextRange[2];
        *((_QWORD *)v36 + 5) = this;
        *(_QWORD *)v36 = 0LL;
        *((_QWORD *)v36 + 1) = a3;
        *((_QWORD *)v36 + 3) = 0LL;
        *((_QWORD *)v36 + 4) = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      if ( v39 )
      {
        if ( VIDMM_MDL_RANGE::Lock(v34, v9, v38, 0LL, 0LL) < 0 )
        {
          _InterlockedAdd(&dword_1C0040640, 1u);
          v65 = WdLogNewEntry5_WdLowResource(0LL, v40);
          *(_QWORD *)(v65 + 24) = 6104LL;
          WdLogEvent5_WdLowResource(v65);
        }
        else
        {
          LODWORD(v9) = VIDMM_MDL_RANGE::Lock(v39, (char *)v9 + a3 - v10[1], v41, 0LL, 0LL);
          if ( (int)v9 >= 0 )
          {
            v44 = v10[4];
            v45 = (struct VIDMM_MDL_RANGE *)(v44 - 24);
            if ( v44 == v10[5] + 8 )
              v45 = 0LL;
            v75 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
            LOBYTE(v77) = v46;
            do
            {
              VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
              v47 = v10;
              if ( v10 == NextRange )
                LOBYTE(v77) = 1;
              else
                v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
              v48 = v47 + 3;
              v49 = v47[3];
              if ( *(unsigned __int64 **)(v49 + 8) != v47 + 3
                || (v50 = (unsigned __int64 *)v47[4], (_QWORD *)*v50 != v48) )
              {
                __fastfail(3u);
              }
              *v50 = v49;
              *(_QWORD *)(v49 + 8) = v50;
              *v48 = 0LL;
              v47[4] = 0LL;
              operator delete(v47);
            }
            while ( !(_BYTE)v77 );
            VIDMM_MDL_RANGE::InsertBetween(v34, v45, v39);
            VIDMM_MDL_RANGE::InsertBetween(v39, v34, v75);
            goto LABEL_26;
          }
          _InterlockedAdd(&dword_1C0040640, 1u);
          v66 = WdLogNewEntry5_WdLowResource(v43, v42);
          *(_QWORD *)(v66 + 24) = 6124LL;
          WdLogEvent5_WdLowResource(v66);
          VIDMM_MDL_RANGE::Unlock(v34);
        }
        operator delete(v34);
        v64 = v39;
      }
      else
      {
        _InterlockedAdd(&dword_1C0040640, 1u);
        v63 = WdLogNewEntry5_WdLowResource(0LL, v37);
        *(_QWORD *)(v63 + 24) = 6086LL;
        WdLogEvent5_WdLowResource(v63);
        v64 = v34;
      }
      operator delete(v64);
      LODWORD(v9) = -1073741801;
    }
    else
    {
      _InterlockedAdd(&dword_1C0040640, 1u);
      v62 = WdLogNewEntry5_WdLowResource(0LL, v33);
      *(_QWORD *)(v62 + 24) = 6076LL;
      WdLogEvent5_WdLowResource(v62);
      LODWORD(v9) = -1073741801;
    }
LABEL_26:
    v25 = **(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(v25 - 3) <= 3 && (unsigned int)(v25 - 5) > 1 )
    {
      if ( v71[0] )
        CurrentProcess = 0LL;
      else
        CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess();
      SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0);
      if ( v73 <= SmallAllocationSize )
      {
        if ( v69 )
          MmUnmapViewOfSection(v69, MappedBase);
        else
          MmUnmapViewInSystemSpace(MappedBase);
      }
      else
      {
        VidMmUnmapViewAsync(v69, *(PVOID *)(*(_QWORD *)v70 + 56LL), MappedBase);
      }
    }
    return (unsigned int)v9;
  }
  v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0xFFFFFFFFLL, v4, v7);
  v56[3] = 270LL;
  v56[4] = 52LL;
  v56[5] = 9LL;
  v56[6] = 0LL;
  v56[7] = 0LL;
  WdLogEvent5_WdCriticalError(v56);
  return 3221225473LL;
}
