/*
 * XREFs of CcExtendVacbArray @ 0x1400F814C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     VacbLevelReference @ 0x1400F7A78 (VacbLevelReference.c)
 *     CcAllocateVacbLevel @ 0x1400F7B28 (CcAllocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x1400F7BA8 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x1400F7C00 (CcAllocateVacbLevels.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400F8C0C (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400F8C4C (CcAcquireBcbLockAndVacbLock.c)
 *     CcCalculateVacbLevelLockCount @ 0x140150E28 (CcCalculateVacbLevelLockCount.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r14d
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebp
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // r13d
  char *PoolWithTag; // r12
  char *v13; // r15
  char **v14; // r8
  __int64 v15; // rdx
  __int64 v17; // rax
  char *v18; // rcx
  char *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // edi
  int v23; // ecx
  unsigned int v24; // ebp
  char **i; // rdx
  KIRQL v26; // al
  _QWORD *v27; // r15
  __int64 v28; // r8
  __int64 v29; // r8
  _QWORD *v30; // rax
  _QWORD *VacbLevel; // rax
  _DWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD v34[3]; // [rsp+20h] [rbp-48h] BYREF
  int v35; // [rsp+38h] [rbp-30h]
  unsigned int v36; // [rsp+78h] [rbp+10h]

  v2 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v34[2] = 0LL;
  v35 = 0;
  v34[1] = v34;
  v34[0] = v34;
  v5 = *(_QWORD *)(a1 + 32);
  if ( a2 <= v5 )
    goto LABEL_28;
  if ( v5 >= 0x2000000 )
    goto LABEL_27;
  v6 = a2;
  if ( a2 >= 0x2000000 )
    v6 = 0x2000000LL;
  v7 = -1;
  if ( HIDWORD(v6) )
  {
    v8 = -1;
  }
  else if ( (unsigned int)v6 <= 0x100000 )
  {
    v8 = 32;
  }
  else
  {
    v8 = 8 * ((unsigned int)v6 >> 18);
  }
  v36 = v8;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v9 = *(_DWORD *)(a1 + 32);
    if ( v9 > 0x100000 )
      v7 = 8 * (v9 >> 18);
    else
      v7 = 32;
  }
  if ( v8 <= v7 )
  {
LABEL_26:
    *(_QWORD *)(a1 + 32) = v6;
LABEL_27:
    v15 = *(_QWORD *)(a1 + 32);
    if ( a2 <= v15 )
    {
LABEL_28:
      CcFreeUnusedVacbLevels((__int64)v34);
      return 0LL;
    }
    v22 = 1;
    v23 = 25;
    if ( v15 > 0x2000000 )
    {
      do
      {
        v23 += 7;
        ++v22;
      }
      while ( v15 > 1LL << v23 );
    }
    v24 = v22;
    if ( !((a2 - 1) >> v23) )
      goto LABEL_47;
    do
    {
      v23 += 7;
      ++v24;
    }
    while ( (a2 - 1) >> v23 );
    if ( v24 <= v22 )
    {
LABEL_47:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_28;
    }
    v26 = KeAcquireQueuedSpinLock(4uLL);
    if ( v24 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v24 + 1;
    KeReleaseQueuedSpinLock(4uLL, v26);
    if ( CcAllocateVacbLevels(v24 - v22, 0, (__int64)v34) )
    {
      CcAcquireBcbLockAndVacbLock(v2, a1);
      if ( v22 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD *)(a1 + 88));
      v27 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, (__int64)v27, v22 - 1) )
      {
        do
        {
          ++v22;
          VacbLevel = CcAllocateVacbLevel((__int64)v34, 0);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v32 = (_DWORD *)VacbLevelReference(a1, (__int64)VacbLevel, v22);
          ++*v32;
          *(_QWORD *)(a1 + 88) = v33;
        }
        while ( v22 < v24 );
      }
      else if ( v22 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel((__int64)v34, 0);
        v29 = v27[128];
        v30 = (_QWORD *)v27[255];
        *(_QWORD *)(v29 + 8) = v30;
        *v30 = v29;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v27);
      }
      *(_QWORD *)(a1 + 32) = a2;
      CcReleaseBcbLockAndVacbLock(v2, a1, v28);
      goto LABEL_47;
    }
    return 3221225626LL;
  }
  if ( v2 )
    v8 += (v8 + 15) & 0xFFFFFFF0;
  v10 = v8 + 8;
  if ( a2 < 0x2000000 )
    v10 = v8;
  v11 = v10;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x70566343u);
  if ( PoolWithTag )
  {
    CcAcquireBcbLockAndVacbLock(v2, a1);
    v13 = *(char **)(a1 + 88);
    if ( v13 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v7);
    else
      v7 = 0;
    memset(&PoolWithTag[v7], 0, v36 - v7);
    if ( a2 >= 0x2000000 )
      *(_QWORD *)&PoolWithTag[v11 - 8] = 0LL;
    if ( v2 )
    {
      v17 = 0LL;
      v18 = &PoolWithTag[v36];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v13 )
      {
        v19 = &v13[v7];
        do
        {
          v20 = *(_QWORD *)v19;
          if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 || (v14 = (char **)*((_QWORD *)v19 + 1), *v14 != v19) )
            __fastfail(3u);
          *v14 = (char *)v20;
          *(_QWORD *)(v20 + 8) = v14;
          if ( *v14 != (char *)v20 )
            __fastfail(3u);
          *(_QWORD *)v18 = v20;
          v17 += 0x80000LL;
          *(_QWORD *)&PoolWithTag[v36 - (unsigned __int64)v7 - (_QWORD)v13 + 8 + (_QWORD)v19] = v14;
          v19 += 16;
          *v14 = v18;
          *(_QWORD *)(v20 + 8) = v18;
          v18 += 16;
        }
        while ( v17 < *(_QWORD *)(a1 + 32) );
      }
      else
      {
        for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
        {
          while ( v17 <= (__int64)*(i - 1) )
          {
            v14 = (char **)*i;
            if ( *((char ***)*i + 1) != i )
              __fastfail(3u);
            *(_QWORD *)v18 = v14;
            v17 += 0x80000LL;
            *((_QWORD *)v18 + 1) = i;
            v14[1] = v18;
            *i = v18;
            v18 += 16;
          }
        }
      }
      if ( v17 < v6 )
      {
        v21 = a1 + 16;
        do
        {
          v14 = *(char ***)v21;
          if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
            __fastfail(3u);
          *(_QWORD *)v18 = v14;
          v17 += 0x80000LL;
          *((_QWORD *)v18 + 1) = v21;
          v14[1] = v18;
          *(_QWORD *)v21 = v18;
          v18 += 16;
        }
        while ( v17 < v6 );
      }
    }
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v6;
    CcReleaseBcbLockAndVacbLock(v2, a1, v14);
    if ( v13 != (char *)(a1 + 56) && v13 )
      ExFreePoolWithTag(v13, 0);
    goto LABEL_26;
  }
  return 3221225626LL;
}
