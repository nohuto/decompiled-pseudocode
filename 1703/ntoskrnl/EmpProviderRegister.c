/*
 * XREFs of EmpProviderRegister @ 0x1405A3390
 * Callers:
 *     EmProviderRegister @ 0x1405A3350 (EmProviderRegister.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x140154B40 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x140154CAC (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x140154CE4 (EmpSearchEntryDatabase.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  __int64 v7; // rsi
  unsigned int v9; // r12d
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rax
  PVOID v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ebp
  __int64 v19; // r14
  _QWORD *v20; // r10
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r10
  PVOID v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // r14
  __int64 *v27; // r10
  __int64 v28; // rsi
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r10
  _QWORD *v32; // r11
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 i; // rbp
  __int64 v36; // rdx
  _QWORD *j; // rsi
  __int64 k; // rbp
  __int64 v39; // rdx
  _QWORD *m; // rsi
  SIZE_T v42; // rbp
  PVOID v43; // rax
  _QWORD *v44; // r11
  _QWORD *v45; // rcx
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  void *v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // r9
  _QWORD *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx

  v7 = a3;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( !a6 || (_DWORD)v7 && !a2 || a5 && !a4 )
    goto LABEL_53;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x72704D45u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    goto LABEL_40;
  }
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  PoolWithTag[5] = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  PoolWithTag[1] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  v13 = PoolWithTag + 7;
  v13[1] = v13;
  *v13 = v13;
  if ( (_DWORD)v7 )
  {
    v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * v7), 0x72704D45u);
    v10[1] = v14;
    if ( v14 )
    {
      memset(v14, 0, (unsigned int)(8 * v7));
      *((_DWORD *)v10 + 4) = v7;
      v15 = (_QWORD *)(a2 + 8);
      v16 = v7;
      do
      {
        if ( *v15 )
          ++*((_DWORD *)v10 + 8);
        v15 += 3;
        --v16;
      }
      while ( v16 );
      v17 = *((_DWORD *)v10 + 8);
      if ( !v17 )
      {
LABEL_14:
        v18 = 0;
        v19 = 0LL;
        v20 = (_QWORD *)(a2 + 8);
        while ( 1 )
        {
          v21 = (_QWORD *)*(v20 - 1);
          if ( !v21 )
            goto LABEL_53;
          v22 = EmpSearchEntryDatabase(v21);
          if ( !v22 )
          {
LABEL_50:
            v11 = -1073741275;
            goto LABEL_54;
          }
          *(_QWORD *)(v19 + v10[1]) = v22;
          if ( *v23 )
          {
            v44 = v22 + 7;
            v45 = (_QWORD *)(v10[3] + 32LL * v9);
            *v45 = *v23;
            v45[1] = v23[1];
            v46 = v45 + 2;
            v47 = (_QWORD *)v22[8];
            if ( (_QWORD *)*v47 != v44 )
              __fastfail(3u);
            *v46 = v44;
            ++v9;
            v46[1] = v47;
            *v47 = v46;
            v44[1] = v46;
          }
          ++v18;
          v19 += 8LL;
          v20 = v23 + 3;
          if ( v18 >= (unsigned int)v7 )
            goto LABEL_19;
        }
      }
      v42 = (unsigned int)(32 * v17);
      v43 = ExAllocatePoolWithTag(PagedPool, v42, 0x72704D45u);
      v10[3] = v43;
      if ( v43 )
      {
        memset(v43, 0, (unsigned int)v42);
        goto LABEL_14;
      }
    }
LABEL_44:
    v11 = -1073741670;
    goto LABEL_54;
  }
LABEL_19:
  if ( a5 )
  {
    v24 = ExAllocatePoolWithTag(PagedPool, 8 * a5, 0x72704D45u);
    v10[5] = v24;
    if ( !v24 )
      goto LABEL_44;
    memset(v24, 0, 8 * a5);
    v25 = 0;
    *((_DWORD *)v10 + 12) = a5;
    v26 = 0LL;
    v27 = (__int64 *)(a4 + 8);
    while ( 1 )
    {
      v28 = *v27;
      if ( !*v27 )
        break;
      v29 = (_QWORD *)*(v27 - 1);
      if ( !v29 )
        break;
      v30 = EmpSearchCallbackDatabase(v29);
      v32 = v30;
      if ( !v30 )
        goto LABEL_50;
      v33 = v30[2];
      if ( v33 && v33 != v28 )
      {
        v11 = -1073741771;
        goto LABEL_54;
      }
      ++v25;
      *(_QWORD *)(v26 + v10[5]) = v32;
      v26 += 8LL;
      v32[2] = *v31;
      v34 = v31[1];
      v27 = v31 + 3;
      v32[4] = v34;
      if ( v25 >= a5 )
        goto LABEL_27;
    }
LABEL_53:
    v11 = -1073741811;
LABEL_54:
    if ( v10 )
    {
      v48 = (void *)v10[1];
      if ( v48 )
        ExFreePoolWithTag(v48, 0x72704D45u);
      if ( v10[3] )
      {
        v49 = 0;
        if ( v9 )
        {
          v50 = 0LL;
          do
          {
            v51 = (_QWORD *)(v50 + v10[3] + 16LL);
            v52 = *v51;
            v53 = (_QWORD *)v51[1];
            if ( *(_QWORD **)(*v51 + 8LL) != v51 || (_QWORD *)*v53 != v51 )
              __fastfail(3u);
            ++v49;
            *v53 = v52;
            v50 += 32LL;
            *(_QWORD *)(v52 + 8) = v53;
          }
          while ( v49 < v9 );
        }
        ExFreePoolWithTag((PVOID)v10[3], 0x72704D45u);
      }
      if ( v10[5] )
      {
        if ( a5 )
        {
          v54 = 0LL;
          v55 = a5;
          do
          {
            v56 = *(_QWORD *)(v54 + v10[5]);
            if ( v56 && !*(_DWORD *)(v56 + 24) )
              *(_QWORD *)(v56 + 16) = 0LL;
            v54 += 8LL;
            --v55;
          }
          while ( v55 );
        }
        ExFreePoolWithTag((PVOID)v10[5], 0x72704D45u);
      }
      ExFreePoolWithTag(v10, 0x72704D45u);
    }
    goto LABEL_40;
  }
LABEL_27:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v10 + 4); i = (unsigned int)(i + 1) )
  {
    v36 = *(_QWORD *)(v10[1] + 8 * i);
    _InterlockedIncrement((volatile signed __int32 *)(v36 + 16));
    for ( j = *(_QWORD **)(v36 + 72); j; j = (_QWORD *)*j )
      EmpQueueRuleUpdateState(*(j - 1), 0LL);
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)v10 + 12); k = (unsigned int)(k + 1) )
  {
    v39 = *(_QWORD *)(v10[5] + 8 * k);
    _InterlockedIncrement((volatile signed __int32 *)(v39 + 24));
    for ( m = *(_QWORD **)(v39 + 48); m; m = (_QWORD *)*m )
      EmpQueueRuleUpdateState(*(m - 1), 0LL);
  }
  if ( a1 )
    ObfReferenceObject(a1);
  *v10 = a1;
  *a6 = v10;
LABEL_40:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v11;
}
