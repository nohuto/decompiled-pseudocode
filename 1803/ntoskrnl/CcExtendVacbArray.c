/*
 * XREFs of CcExtendVacbArray @ 0x1400C48A4
 * Callers:
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     CcFreeUnusedVacbLevels @ 0x1400C4D50 (CcFreeUnusedVacbLevels.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400C4DA8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400C4DE8 (CcAcquireBcbLockAndVacbLock.c)
 *     CcAllocateVacbLevels @ 0x1400C4E1C (CcAllocateVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x1400C4EC0 (CcAllocateVacbLevel.c)
 *     VacbLevelReference @ 0x1400DAC48 (VacbLevelReference.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     CcCalculateVacbLevelLockCount @ 0x14014BC24 (CcCalculateVacbLevelLockCount.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r15d
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // r13d
  char *PoolWithTag; // r12
  char *v14; // r14
  __int64 v16; // rax
  char *v17; // rcx
  char *v18; // rdx
  __int64 v19; // r9
  char **v20; // r8
  char **v21; // r8
  char *j; // rdx
  char *v23; // r9
  unsigned int v24; // edi
  int v25; // ecx
  unsigned int v26; // ebp
  char **i; // rdx
  char *v28; // r8
  KIRQL v29; // al
  _QWORD *v30; // r14
  __int64 v31; // r8
  _QWORD *v32; // rax
  _QWORD *VacbLevel; // rax
  _DWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD v36[3]; // [rsp+20h] [rbp-48h] BYREF
  int v37; // [rsp+38h] [rbp-30h]
  unsigned int v38; // [rsp+78h] [rbp+10h]

  v2 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v36[2] = 0LL;
  v37 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v36[1] = v36;
  v36[0] = v36;
  if ( a2 <= v5 )
    goto LABEL_32;
  if ( v5 >= 0x2000000 )
    goto LABEL_31;
  v6 = a2;
  v7 = a2;
  if ( a2 >= 0x2000000 )
  {
    v6 = 0x2000000LL;
    v7 = 0x2000000;
  }
  v8 = 0;
  if ( a2 < 0x2000000 )
    v8 = HIDWORD(a2);
  v9 = -1;
  if ( v8 )
  {
    v10 = -1;
  }
  else if ( v7 <= 0x100000 )
  {
    v10 = 32;
  }
  else
  {
    v10 = 8 * (v7 >> 18);
  }
  v38 = v10;
  if ( !HIDWORD(v5) )
  {
    if ( (unsigned int)v5 > 0x100000 )
      v9 = 8 * ((unsigned int)v5 >> 18);
    else
      v9 = 32;
  }
  if ( v10 <= v9 )
  {
LABEL_30:
    *(_QWORD *)(a1 + 32) = v6;
    v5 = v6;
LABEL_31:
    if ( a2 <= v5 )
    {
LABEL_32:
      CcFreeUnusedVacbLevels(v36);
      return 0LL;
    }
    v24 = 1;
    v25 = 25;
    if ( v5 > 0x2000000 )
    {
      do
      {
        v25 += 7;
        ++v24;
      }
      while ( *(_QWORD *)(a1 + 32) > 1LL << v25 );
    }
    v26 = v24;
    if ( !((a2 - 1) >> v25) )
      goto LABEL_49;
    do
    {
      v25 += 7;
      ++v26;
    }
    while ( (a2 - 1) >> v25 );
    if ( v26 <= v24 )
    {
LABEL_49:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_32;
    }
    v29 = KeAcquireQueuedSpinLock(4uLL);
    if ( v26 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v26 + 1;
    KeReleaseQueuedSpinLock(4uLL, v29);
    if ( (unsigned __int8)CcAllocateVacbLevels(v26 - v24, 0LL, v36) )
    {
      CcAcquireBcbLockAndVacbLock(v2, a1);
      if ( v24 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD *)(a1 + 88));
      v30 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, v30, v24 - 1) )
      {
        do
        {
          ++v24;
          VacbLevel = (_QWORD *)CcAllocateVacbLevel(v36, 0LL);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v34 = (_DWORD *)VacbLevelReference(a1, VacbLevel, v24);
          ++*v34;
          *(_QWORD *)(a1 + 88) = v35;
        }
        while ( v24 < v26 );
      }
      else if ( v24 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel(v36, 0LL);
        v31 = v30[128];
        v32 = (_QWORD *)v30[255];
        *(_QWORD *)(v31 + 8) = v32;
        *v32 = v31;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v30);
      }
      *(_QWORD *)(a1 + 32) = a2;
      CcReleaseBcbLockAndVacbLock(v2, a1);
      goto LABEL_49;
    }
    return 3221225626LL;
  }
  if ( v2 )
    v10 += (v10 + 15) & 0xFFFFFFF0;
  v11 = v10 + 8;
  if ( a2 < 0x2000000 )
    v11 = v10;
  v12 = v11;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x70566343u);
  if ( PoolWithTag )
  {
    CcAcquireBcbLockAndVacbLock(v2, a1);
    v14 = *(char **)(a1 + 88);
    if ( v14 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v9);
    else
      v9 = 0;
    memset(&PoolWithTag[v9], 0, v38 - v9);
    if ( a2 >= 0x2000000 )
      *(_QWORD *)&PoolWithTag[v12 - 8] = 0LL;
    if ( v2 )
    {
      v16 = 0LL;
      v17 = &PoolWithTag[v38];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v14 )
      {
        v18 = &v14[v9];
        do
        {
          v19 = *(_QWORD *)v18;
          v20 = (char **)*((_QWORD *)v18 + 1);
          if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 || *v20 != v18 )
            __fastfail(3u);
          *v20 = (char *)v19;
          *(_QWORD *)(v19 + 8) = v20;
          if ( *v20 != (char *)v19 )
            __fastfail(3u);
          *(_QWORD *)v17 = v19;
          v16 += 0x80000LL;
          *(_QWORD *)&PoolWithTag[v38 - (unsigned __int64)v9 - (_QWORD)v14 + 8 + (_QWORD)v18] = v20;
          v18 += 16;
          *v20 = v17;
          *(_QWORD *)(v19 + 8) = v17;
          v17 += 16;
        }
        while ( v16 < *(_QWORD *)(a1 + 32) );
      }
      else
      {
        for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
        {
          if ( v16 <= (__int64)*(i - 1) )
          {
            v28 = *i;
            do
            {
              if ( *((char ***)v28 + 1) != i )
                __fastfail(3u);
              *(_QWORD *)v17 = v28;
              v16 += 0x80000LL;
              *((_QWORD *)v17 + 1) = i;
              *((_QWORD *)v28 + 1) = v17;
              v28 = v17;
              *i = v17;
              v17 += 16;
            }
            while ( v16 <= (__int64)*(i - 1) );
          }
        }
      }
      if ( v16 < v6 )
      {
        v21 = (char **)(a1 + 16);
        for ( j = *(char **)(a1 + 16); ; j = v23 )
        {
          v23 = v17;
          if ( *((char ***)j + 1) != v21 )
            __fastfail(3u);
          *(_QWORD *)v17 = j;
          v16 += 0x80000LL;
          *((_QWORD *)v17 + 1) = v21;
          *((_QWORD *)j + 1) = v17;
          *v21 = v17;
          v17 += 16;
          if ( v16 >= v6 )
            break;
        }
      }
    }
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v6;
    CcReleaseBcbLockAndVacbLock(v2, a1);
    if ( v14 != (char *)(a1 + 56) && v14 )
      ExFreePoolWithTag(v14, 0);
    goto LABEL_30;
  }
  return 3221225626LL;
}
