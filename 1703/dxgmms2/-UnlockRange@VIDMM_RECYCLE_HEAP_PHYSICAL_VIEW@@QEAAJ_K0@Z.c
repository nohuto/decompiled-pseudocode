/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004880C
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0068D24 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0048200 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0048E9C (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C0048EBC (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C0048FA4 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0048FD0 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C00490D8 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
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
  unsigned __int64 *NextRange; // rbp
  void *i; // rdi
  unsigned __int64 v13; // rcx
  char v14; // di
  unsigned __int64 *v15; // r8
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  bool v25; // di
  unsigned __int64 *v26; // r8
  _QWORD *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rdx
  _QWORD *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  VIDMM_MDL_RANGE *v35; // rax
  VIDMM_MDL_RANGE *v36; // rdi
  VIDMM_MDL_RANGE *v37; // rax
  enum _LOCK_OPERATION v38; // r8d
  VIDMM_MDL_RANGE *v39; // r14
  __int64 v40; // rcx
  enum _LOCK_OPERATION v41; // r8d
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  struct VIDMM_MDL_RANGE *v44; // r12
  unsigned __int64 *v45; // r9
  _QWORD *v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 *v48; // r8
  _QWORD *v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  VIDMM_MDL_RANGE *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // eax
  void *v60; // rbx
  void *v61; // rax
  __int64 CurrentProcess; // rax
  PVOID MappedBase; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v64; // [rsp+48h] [rbp-40h]
  unsigned __int64 v65; // [rsp+50h] [rbp-38h]
  struct VIDMM_MDL_RANGE *v66; // [rsp+58h] [rbp-30h]
  void *v68; // [rsp+A8h] [rbp+20h] BYREF

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
  v66 = (struct VIDMM_MDL_RANGE *)v10;
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
    v65 = v13;
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
        v18 = (unsigned __int64 *)v15[4];
        if ( *(unsigned __int64 **)(v17 + 8) != v15 + 3 || (_QWORD *)*v18 != v16 )
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
    v68 = 0LL;
    MappedBase = 0LL;
    v64 = v13 - (_QWORD)i;
    v21 = **(_DWORD **)(v20 + 32);
    if ( (unsigned int)(v21 - 3) > 3 || (unsigned int)(v21 - 5) <= 1 )
    {
      v9 = i;
      v68 = i;
    }
    else
    {
      v50 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v20 + 56),
              (__int64)i,
              v13 - (_QWORD)i,
              ((v21 - 4) & 0xFFFFFFFD) == 0,
              &v68,
              &MappedBase,
              0,
              0LL);
      v9 = (void *)v50;
      if ( v50 < 0 )
      {
        _InterlockedIncrement(&dword_1C003C660);
        v52 = (_QWORD *)WdLogNewEntry5_WdLowResource(v51);
        v52[3] = v64;
        v52[4] = v10[1];
        v52[5] = *(_QWORD *)this;
        v52[6] = v9;
        WdLogEvent5_WdLowResource(v52);
        return (unsigned int)v9;
      }
      v9 = v68;
      v13 = v65;
    }
    if ( (unsigned __int64)i >= a2 )
      goto LABEL_23;
    if ( v13 <= a3 )
    {
      LODWORD(v9) = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v10, v9, v10[1], a2);
      if ( (int)v9 >= 0 )
      {
        v25 = v10 == NextRange;
        if ( v10 != NextRange )
          v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
        if ( v66 != (struct VIDMM_MDL_RANGE *)NextRange )
        {
          do
          {
            VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
            v26 = v10;
            if ( v10 == NextRange )
              v25 = 1;
            else
              v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
            v27 = v26 + 3;
            v28 = v26[3];
            v29 = (unsigned __int64 *)v26[4];
            if ( *(unsigned __int64 **)(v28 + 8) != v26 + 3 || (_QWORD *)*v29 != v27 )
              __fastfail(3u);
            *v29 = v28;
            *(_QWORD *)(v28 + 8) = v29;
            *v27 = 0LL;
            v26[4] = 0LL;
            operator delete(v26);
          }
          while ( !v25 );
        }
        goto LABEL_26;
      }
      _InterlockedIncrement(&dword_1C003C630);
      v53 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v53 + 24) = 5767LL;
LABEL_76:
      WdLogEvent5_WdLowResource(v53);
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
            v32 = (_QWORD *)(v31 + 24);
            v33 = *(_QWORD *)(v31 + 24);
            v34 = (_QWORD *)v32[1];
            if ( *(_QWORD **)(v33 + 8) != v32 || (_QWORD *)*v34 != v32 )
              __fastfail(3u);
            *v34 = v33;
            *(_QWORD *)(v33 + 8) = v34;
            *v32 = 0LL;
            v30[4] = 0LL;
            operator delete(v30);
          }
          goto LABEL_26;
        }
        _InterlockedIncrement(&dword_1C003C630);
        v53 = WdLogNewEntry5_WdLowResource(v22);
        *(_QWORD *)(v53 + 24) = 5823LL;
        goto LABEL_76;
      }
    }
    v35 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
    v36 = v35;
    if ( v35 )
    {
      *((_QWORD *)v35 + 1) = v10[1];
      *((_QWORD *)v35 + 5) = this;
      *(_QWORD *)v35 = 0LL;
      *((_QWORD *)v35 + 2) = a2;
      *((_QWORD *)v35 + 3) = 0LL;
      *((_QWORD *)v35 + 4) = 0LL;
    }
    else
    {
      v36 = 0LL;
    }
    if ( v36 )
    {
      v37 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
      v39 = v37;
      if ( v37 )
      {
        *((_QWORD *)v37 + 2) = NextRange[2];
        *((_QWORD *)v37 + 5) = this;
        *(_QWORD *)v37 = 0LL;
        *((_QWORD *)v37 + 1) = a3;
        *((_QWORD *)v37 + 3) = 0LL;
        *((_QWORD *)v37 + 4) = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      if ( v39 )
      {
        if ( VIDMM_MDL_RANGE::Lock(v36, v9, v38, 0LL, 0LL) < 0 )
        {
          _InterlockedIncrement(&dword_1C003C630);
          v57 = WdLogNewEntry5_WdLowResource(v40);
          *(_QWORD *)(v57 + 24) = 5895LL;
          WdLogEvent5_WdLowResource(v57);
        }
        else
        {
          LODWORD(v9) = VIDMM_MDL_RANGE::Lock(v39, (char *)v9 + a3 - v10[1], v41, 0LL, 0LL);
          if ( (int)v9 >= 0 )
          {
            v43 = v10[4];
            if ( v43 == v10[5] + 8 )
              v44 = 0LL;
            else
              v44 = (struct VIDMM_MDL_RANGE *)(v43 - 24);
            v66 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
            LOBYTE(v68) = 0;
            do
            {
              VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v10);
              v45 = v10;
              if ( v10 == NextRange )
                LOBYTE(v68) = 1;
              else
                v10 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v10);
              v46 = v45 + 3;
              v47 = v45[3];
              v48 = (unsigned __int64 *)v45[4];
              if ( *(unsigned __int64 **)(v47 + 8) != v45 + 3 || (_QWORD *)*v48 != v46 )
                __fastfail(3u);
              *v48 = v47;
              *(_QWORD *)(v47 + 8) = v48;
              *v46 = 0LL;
              v45[4] = 0LL;
              operator delete(v45);
            }
            while ( !(_BYTE)v68 );
            VIDMM_MDL_RANGE::InsertBetween(v36, v44, v39);
            VIDMM_MDL_RANGE::InsertBetween(v39, v36, v66);
            goto LABEL_26;
          }
          _InterlockedIncrement(&dword_1C003C630);
          v58 = WdLogNewEntry5_WdLowResource(v42);
          *(_QWORD *)(v58 + 24) = 5915LL;
          WdLogEvent5_WdLowResource(v58);
          VIDMM_MDL_RANGE::Unlock(v36);
        }
        operator delete(v36);
        v56 = v39;
      }
      else
      {
        _InterlockedIncrement(&dword_1C003C630);
        v55 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v55 + 24) = 5877LL;
        WdLogEvent5_WdLowResource(v55);
        v56 = v36;
      }
      operator delete(v56);
    }
    else
    {
      _InterlockedIncrement(&dword_1C003C630);
      v54 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v54 + 24) = 5867LL;
      WdLogEvent5_WdLowResource(v54);
    }
    LODWORD(v9) = -1073741801;
LABEL_26:
    v23 = **(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(v23 - 3) <= 3 && (unsigned int)(v23 - 5) > 1 )
    {
      v59 = dword_1C003C33C;
      if ( (unsigned __int64)qword_1C003C128 > 0x53333333 )
        v59 = dword_1C003C32C;
      if ( v64 <= (unsigned int)(v59 << 20) )
      {
        CurrentProcess = PsGetCurrentProcess();
        MmUnmapViewOfSection(CurrentProcess, MappedBase);
      }
      else
      {
        v60 = *(void **)(*(_QWORD *)this + 56LL);
        v61 = (void *)PsGetCurrentProcess();
        VidMmUnmapViewAsync(v61, v60, MappedBase);
      }
    }
    return (unsigned int)v9;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0xFFFFFFFFLL, v4, v7);
  v49[3] = 270LL;
  v49[4] = 52LL;
  v49[5] = 9LL;
  v49[6] = 0LL;
  v49[7] = 0LL;
  WdLogEvent5_WdCriticalError(v49);
  return 3221225473LL;
}
