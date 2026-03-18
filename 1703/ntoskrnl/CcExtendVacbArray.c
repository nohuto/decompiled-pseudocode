/*
 * XREFs of CcExtendVacbArray @ 0x14011DD28
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 * Callees:
 *     CcCalculateVacbLevelLockCount @ 0x140039F90 (CcCalculateVacbLevelLockCount.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400A9478 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400A94E0 (CcAcquireBcbLockAndVacbLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     VacbLevelReference @ 0x14011C30C (VacbLevelReference.c)
 *     CcAllocateVacbLevel @ 0x14011CCF8 (CcAllocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x14011CD78 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x14011CDD0 (CcAllocateVacbLevels.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v3; // r15d
  int v4; // edx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // r13d
  char *v13; // r14
  __int64 v14; // rdx
  unsigned int v16; // edi
  int v17; // ecx
  unsigned int v18; // ebp
  __int64 v19; // rax
  char *v20; // rcx
  char **i; // rdx
  KIRQL v22; // al
  _QWORD *v23; // r14
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *VacbLevel; // rax
  _DWORD *v29; // rax
  __int64 v30; // rdx
  char *v31; // r8
  __int64 v32; // rdx
  char **v33; // r9
  char *v34; // r8
  _QWORD v35[3]; // [rsp+20h] [rbp-58h] BYREF
  int v36; // [rsp+38h] [rbp-40h]
  int v37; // [rsp+88h] [rbp+10h]
  unsigned int v38; // [rsp+90h] [rbp+18h]
  char *PoolWithTag; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = 0;
  v37 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v3 = a2 > 0x200000;
  v35[2] = 0LL;
  v36 = 0;
  v35[1] = v35;
  v35[0] = v35;
  v6 = *(_QWORD *)(a1 + 32);
  if ( a2 <= v6 )
    goto LABEL_28;
  if ( v6 >= 0x2000000 )
    goto LABEL_27;
  v7 = a2;
  if ( a2 >= 0x2000000 )
  {
    v4 = 1;
    v7 = 0x2000000LL;
    v37 = 1;
  }
  v8 = -1;
  if ( HIDWORD(v7) )
  {
    v9 = -1;
  }
  else if ( (unsigned int)v7 <= 0x100000 )
  {
    v9 = 32;
  }
  else
  {
    v9 = 8 * ((unsigned int)v7 >> 18);
  }
  v38 = v9;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v10 = *(_DWORD *)(a1 + 32);
    if ( v10 > 0x100000 )
      v8 = 8 * (v10 >> 18);
    else
      v8 = 32;
  }
  if ( v9 <= v8 )
  {
LABEL_26:
    *(_QWORD *)(a1 + 32) = v7;
LABEL_27:
    v14 = *(_QWORD *)(a1 + 32);
    if ( a2 <= v14 )
    {
LABEL_28:
      CcFreeUnusedVacbLevels((__int64)v35);
      return 0LL;
    }
    v16 = 1;
    v17 = 25;
    if ( v14 > 0x2000000 )
    {
      do
      {
        v17 += 7;
        ++v16;
      }
      while ( v14 > 1LL << v17 );
    }
    v18 = v16;
    if ( !((a2 - 1) >> v17) )
      goto LABEL_36;
    do
    {
      v17 += 7;
      ++v18;
    }
    while ( (a2 - 1) >> v17 );
    if ( v18 <= v16 )
    {
LABEL_36:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_28;
    }
    v22 = KeAcquireQueuedSpinLock(4uLL);
    if ( v18 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v18 + 1;
    KeReleaseQueuedSpinLock(4uLL, v22);
    if ( CcAllocateVacbLevels(v18 - v16, 0, (__int64)v35) )
    {
      CcAcquireBcbLockAndVacbLock(v3, (struct _FAST_MUTEX *)a1);
      if ( v16 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD **)(a1 + 88));
      v23 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, (__int64)v23, v16 - 1) )
      {
        do
        {
          ++v16;
          VacbLevel = CcAllocateVacbLevel((__int64)v35, 0);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v29 = (_DWORD *)VacbLevelReference(a1, (__int64)VacbLevel, v16);
          ++*v29;
          *(_QWORD *)(a1 + 88) = v30;
        }
        while ( v16 < v18 );
      }
      else if ( v16 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel((__int64)v35, 0);
        v24 = v23[128];
        v25 = (_QWORD *)v23[255];
        *(_QWORD *)(v24 + 8) = v25;
        *v25 = v24;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v23);
      }
      *(_QWORD *)(a1 + 32) = a2;
      CcReleaseBcbLockAndVacbLock(v3, (struct _FAST_MUTEX *)a1);
      goto LABEL_36;
    }
    return 3221225626LL;
  }
  if ( v3 )
    v9 += (v9 + 15) & 0xFFFFFFF0;
  v11 = v9 + 8;
  if ( !v4 )
    v11 = v9;
  v12 = v11;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x70566343u);
  if ( PoolWithTag )
  {
    CcAcquireBcbLockAndVacbLock(v3, (struct _FAST_MUTEX *)a1);
    v13 = *(char **)(a1 + 88);
    if ( v13 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v8);
    else
      v8 = 0;
    memset(&PoolWithTag[v8], 0, v38 - v8);
    if ( v37 )
      *(_QWORD *)&PoolWithTag[v12 - 8] = 0LL;
    if ( v3 )
    {
      v19 = 0LL;
      v20 = &PoolWithTag[v38];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v13 )
      {
        v31 = &v13[v8];
        do
        {
          v32 = *(_QWORD *)v31;
          v33 = (char **)*((_QWORD *)v31 + 1);
          if ( *(char **)(*(_QWORD *)v31 + 8LL) != v31 || *v33 != v31 )
            __fastfail(3u);
          *v33 = (char *)v32;
          *(_QWORD *)(v32 + 8) = v33;
          if ( *v33 != (char *)v32 )
            __fastfail(3u);
          *(_QWORD *)v20 = v32;
          v19 += 0x80000LL;
          *((_QWORD *)v20 + 1) = v33;
          v31 += 16;
          *v33 = v20;
          *(_QWORD *)(v32 + 8) = v20;
          v20 += 16;
        }
        while ( v19 < *(_QWORD *)(a1 + 32) );
      }
      else
      {
        for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
        {
          while ( v19 <= (__int64)*(i - 1) )
          {
            v34 = *i;
            if ( *((char ***)*i + 1) != i )
              __fastfail(3u);
            *(_QWORD *)v20 = v34;
            v19 += 0x80000LL;
            *((_QWORD *)v20 + 1) = i;
            *((_QWORD *)v34 + 1) = v20;
            *i = v20;
            v20 += 16;
          }
        }
      }
      if ( v19 < v7 )
      {
        v26 = a1 + 16;
        do
        {
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
            __fastfail(3u);
          *(_QWORD *)v20 = v27;
          v19 += 0x80000LL;
          *((_QWORD *)v20 + 1) = v26;
          *(_QWORD *)(v27 + 8) = v20;
          *(_QWORD *)v26 = v20;
          v20 += 16;
        }
        while ( v19 < v7 );
      }
    }
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v7;
    CcReleaseBcbLockAndVacbLock(v3, (struct _FAST_MUTEX *)a1);
    if ( v13 != (char *)(a1 + 56) && v13 )
      ExFreePoolWithTag(v13, 0);
    goto LABEL_26;
  }
  return 3221225626LL;
}
