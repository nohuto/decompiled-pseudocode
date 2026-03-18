/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C00584DC
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00718B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0005640 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00533DC (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0058AA4 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C0058AC4 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C0058BAC (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058BD8 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0058CE0 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00AE704 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
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
  bool v11; // zf
  unsigned __int64 *NextRange; // r13
  struct VIDMM_MDL_RANGE *i; // rdi
  struct VIDMM_MDL_RANGE *v14; // rcx
  char v15; // di
  unsigned __int64 *v16; // r8
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // rdx
  __int64 v21; // r8
  int *v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  bool v25; // di
  VIDMM_MDL_RANGE *v26; // rbx
  VIDMM_MDL_RANGE *v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  int v32; // edx
  VIDMM_MDL_RANGE *v33; // rax
  VIDMM_MDL_RANGE *v34; // rdi
  VIDMM_MDL_RANGE *v35; // rax
  enum _LOCK_OPERATION v36; // r8d
  VIDMM_MDL_RANGE *v37; // r15
  enum _LOCK_OPERATION v38; // r8d
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  struct VIDMM_MDL_RANGE *v41; // r12
  char v42; // r8
  unsigned __int64 *v43; // r10
  _QWORD *v44; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 *v46; // r8
  _QWORD *v47; // r8
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  VIDMM_MDL_RANGE *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  unsigned __int64 SmallAllocationSize; // rax
  void *v64; // rcx
  __int64 v65; // r8
  unsigned __int8 v66[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v68; // [rsp+50h] [rbp-10h]
  struct VIDMM_MDL_RANGE *v69; // [rsp+58h] [rbp-8h]
  void *v71; // [rsp+B8h] [rbp+58h] BYREF

  v4 = (char *)this + 8;
  v5 = this;
  v7 = (char *)*((_QWORD *)this + 1);
  v8 = -1;
  LODWORD(v9) = 0;
  v10 = 0LL;
  while ( v7 != v4 )
  {
    v11 = v8 == 0;
    if ( v8 >= 0 )
      goto LABEL_8;
    v10 = (unsigned __int64 *)(v7 - 24);
    if ( *((_QWORD *)v7 - 1) > a2 )
      v8 = *((_QWORD *)v7 - 2) >= a3;
    else
      v8 = -1;
    v7 = *(char **)v7;
  }
  v11 = v8 == 0;
LABEL_8:
  if ( v11 )
  {
    NextRange = v10;
    for ( i = (struct VIDMM_MDL_RANGE *)v10[1];
          NextRange[2] < a3;
          NextRange = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange) )
    {
      ;
    }
    v14 = (struct VIDMM_MDL_RANGE *)NextRange[2];
    v69 = v14;
    if ( (unsigned __int64)i >= a2 && (unsigned __int64)v14 <= a3 )
    {
      v15 = 0;
      do
      {
        VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
        v16 = v10;
        if ( v10 == NextRange )
          v15 = 1;
        else
          v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
        v17 = v16 + 3;
        v18 = v16[3];
        if ( *(unsigned __int64 **)(v18 + 8) != v16 + 3 || (v19 = (unsigned __int64 *)v16[4], (_QWORD *)*v19 != v17) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        v16[4] = 0LL;
        operator delete(v16);
      }
      while ( !v15 );
      return (unsigned int)v9;
    }
    v21 = *(_QWORD *)v5;
    v71 = 0LL;
    MappedBase = 0LL;
    v66[0] = 0;
    v22 = *(int **)(v21 + 32);
    v68 = v14 - i;
    v23 = *v22;
    if ( (unsigned int)(*v22 - 3) > 3 || (unsigned int)(v23 - 5) <= 1 )
    {
      v9 = i;
      v71 = i;
    }
    else
    {
      v53 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v21 + 56),
              (unsigned __int64)i,
              v14 - i,
              ((v23 - 4) & 0xFFFFFFFD) == 0,
              &v71,
              &MappedBase,
              0,
              v66);
      v9 = (void *)v53;
      if ( v53 < 0 )
      {
        _InterlockedAdd(&dword_1C0047670, 1u);
        v55 = (_QWORD *)WdLogNewEntry5_WdLowResource(v54);
        v55[3] = v68;
        v55[4] = v10[1];
        v55[5] = *(_QWORD *)this;
        v55[6] = v9;
        WdLogEvent5_WdLowResource(v55);
        return (unsigned int)v9;
      }
      v9 = v71;
      v14 = v69;
    }
    if ( (unsigned __int64)i >= a2 )
    {
      if ( (unsigned __int64)v14 > a3 )
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
            v49 = (_QWORD *)(v48 + 24);
            v50 = *(_QWORD *)(v48 + 24);
            if ( *(_QWORD **)(v50 + 8) != v49 || (v51 = (_QWORD *)v49[1], (_QWORD *)*v51 != v49) )
              __fastfail(3u);
            *v51 = v50;
            *(_QWORD *)(v50 + 8) = v51;
            *v49 = 0LL;
            v47[4] = 0LL;
            operator delete(v47);
          }
          goto LABEL_37;
        }
        _InterlockedAdd(&dword_1C0047640, 1u);
        v56 = WdLogNewEntry5_WdLowResource(v31);
        *(_QWORD *)(v56 + 24) = 6231LL;
LABEL_72:
        WdLogEvent5_WdLowResource(v56);
        goto LABEL_37;
      }
    }
    else if ( (unsigned __int64)v14 <= a3 )
    {
      LODWORD(v9) = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v10, v9, v10[1], a2);
      if ( (int)v9 >= 0 )
      {
        v25 = v10 == NextRange;
        if ( v10 != NextRange )
        {
          v26 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
          do
          {
            VIDMM_MDL_RANGE::Unlock(v26);
            v27 = v26;
            if ( v26 == (VIDMM_MDL_RANGE *)NextRange )
              v25 = 1;
            else
              v26 = VIDMM_MDL_RANGE::GetNextRange(v26);
            v28 = (_QWORD *)((char *)v27 + 24);
            v29 = *((_QWORD *)v27 + 3);
            if ( *(VIDMM_MDL_RANGE **)(v29 + 8) != (VIDMM_MDL_RANGE *)((char *)v27 + 24)
              || (v30 = (_QWORD *)*((_QWORD *)v27 + 4), (_QWORD *)*v30 != v28) )
            {
              __fastfail(3u);
            }
            *v30 = v29;
            *(_QWORD *)(v29 + 8) = v30;
            *v28 = 0LL;
            *((_QWORD *)v27 + 4) = 0LL;
            operator delete(v27);
          }
          while ( !v25 );
        }
        goto LABEL_37;
      }
      _InterlockedAdd(&dword_1C0047640, 1u);
      v56 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v56 + 24) = 6175LL;
      goto LABEL_72;
    }
    v33 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
    v34 = v33;
    if ( v33 )
    {
      *((_QWORD *)v33 + 1) = v10[1];
      *((_QWORD *)v33 + 2) = a2;
      *((_QWORD *)v33 + 5) = this;
      *(_QWORD *)v33 = 0LL;
      *((_QWORD *)v33 + 3) = 0LL;
      *((_QWORD *)v33 + 4) = 0LL;
    }
    else
    {
      v34 = 0LL;
    }
    if ( v34 )
    {
      v35 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
      v37 = v35;
      if ( v35 )
      {
        *((_QWORD *)v35 + 2) = NextRange[2];
        *((_QWORD *)v35 + 5) = this;
        *(_QWORD *)v35 = 0LL;
        *((_QWORD *)v35 + 1) = a3;
        *((_QWORD *)v35 + 3) = 0LL;
        *((_QWORD *)v35 + 4) = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v37 )
      {
        if ( VIDMM_MDL_RANGE::Lock(v34, v9, v36, 0LL, 0LL) < 0 )
        {
          _InterlockedAdd(&dword_1C0047640, 1u);
          v60 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v60 + 24) = 6303LL;
          WdLogEvent5_WdLowResource(v60);
        }
        else
        {
          LODWORD(v9) = VIDMM_MDL_RANGE::Lock(v37, (char *)v9 + a3 - v10[1], v38, 0LL, 0LL);
          if ( (int)v9 >= 0 )
          {
            v40 = v10[4];
            v41 = (struct VIDMM_MDL_RANGE *)(v40 - 24);
            if ( v40 == v10[5] + 8 )
              v41 = 0LL;
            v69 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
            LOBYTE(v71) = v42;
            do
            {
              VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
              v43 = v10;
              if ( v10 == NextRange )
                LOBYTE(v71) = 1;
              else
                v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
              v44 = v43 + 3;
              v45 = v43[3];
              if ( *(unsigned __int64 **)(v45 + 8) != v43 + 3
                || (v46 = (unsigned __int64 *)v43[4], (_QWORD *)*v46 != v44) )
              {
                __fastfail(3u);
              }
              *v46 = v45;
              *(_QWORD *)(v45 + 8) = v46;
              *v44 = 0LL;
              v43[4] = 0LL;
              operator delete(v43);
            }
            while ( !(_BYTE)v71 );
            VIDMM_MDL_RANGE::InsertBetween(v34, v41, v37);
            VIDMM_MDL_RANGE::InsertBetween(v37, v34, v69);
            goto LABEL_37;
          }
          _InterlockedAdd(&dword_1C0047640, 1u);
          v61 = WdLogNewEntry5_WdLowResource(v39);
          *(_QWORD *)(v61 + 24) = 6323LL;
          WdLogEvent5_WdLowResource(v61);
          VIDMM_MDL_RANGE::Unlock(v34);
        }
        operator delete(v34);
        v59 = v37;
      }
      else
      {
        _InterlockedAdd(&dword_1C0047640, 1u);
        v58 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v58 + 24) = 6285LL;
        WdLogEvent5_WdLowResource(v58);
        v59 = v34;
      }
      operator delete(v59);
      LODWORD(v9) = -1073741801;
    }
    else
    {
      _InterlockedAdd(&dword_1C0047640, 1u);
      v57 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v57 + 24) = 6275LL;
      WdLogEvent5_WdLowResource(v57);
      LODWORD(v9) = -1073741801;
    }
LABEL_37:
    v32 = **(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(v32 - 3) <= 3 && (unsigned int)(v32 - 5) > 1 )
    {
      if ( v66[0] )
        CurrentProcess = 0LL;
      else
        CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess();
      SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0);
      if ( v68 <= SmallAllocationSize )
      {
        if ( v64 )
          MmUnmapViewOfSection(v64, MappedBase);
        else
          MmUnmapViewInSystemSpace(MappedBase);
      }
      else
      {
        VidMmUnmapViewAsync(v64, *(PVOID *)(*(_QWORD *)v65 + 56LL), MappedBase);
      }
    }
    return (unsigned int)v9;
  }
  v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0xFFFFFFFFLL, v4, v7);
  v52[3] = 270LL;
  v52[4] = 52LL;
  v52[5] = 9LL;
  v52[6] = 0LL;
  v52[7] = 0LL;
  WdLogEvent5_WdCriticalError(v52);
  return 3221225473LL;
}
