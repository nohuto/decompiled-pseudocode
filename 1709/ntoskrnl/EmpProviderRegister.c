/*
 * XREFs of EmpProviderRegister @ 0x1405BC000
 * Callers:
 *     EmProviderRegister @ 0x1405BBF90 (EmProviderRegister.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x140140C00 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x140140CD4 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x140140D0C (EmpSearchEntryDatabase.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(
        PVOID Object,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rsi
  unsigned int v10; // r12d
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rax
  PVOID v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r10
  __int64 v20; // r14
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rdx
  __int64 v25; // rax
  PVOID v26; // rax
  unsigned int v27; // r15d
  __int64 v28; // r14
  __int64 *v29; // r10
  __int64 v30; // rsi
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // r10
  _QWORD *v34; // r11
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 j; // rbp
  __int64 v38; // rdx
  _QWORD *k; // rsi
  __int64 m; // rbp
  __int64 v41; // rdx
  _QWORD *n; // rsi
  SIZE_T v44; // r14
  PVOID v45; // rax
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  _QWORD *v49; // rcx
  void *v50; // rcx
  unsigned int i; // edx
  _QWORD *v52; // r8
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx

  v7 = a3;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( !a6 || (_DWORD)v7 && !a2 || a5 && !a4 )
    goto LABEL_53;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x72704D45u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_40;
  }
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  PoolWithTag[5] = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  PoolWithTag[1] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  v14 = PoolWithTag + 7;
  v14[1] = v14;
  *v14 = v14;
  if ( (_DWORD)v7 )
  {
    v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * v7), 0x72704D45u);
    v11[1] = v15;
    if ( v15 )
    {
      memset(v15, 0, (unsigned int)(8 * v7));
      *((_DWORD *)v11 + 4) = v7;
      v16 = (_QWORD *)(a2 + 8);
      v17 = v7;
      do
      {
        if ( *v16 )
          ++*((_DWORD *)v11 + 8);
        v16 += 3;
        --v17;
      }
      while ( v17 );
      v18 = *((_DWORD *)v11 + 8);
      if ( !v18 )
      {
LABEL_14:
        v19 = 0LL;
        while ( 1 )
        {
          v20 = 3 * v19;
          v21 = *(_QWORD **)(a2 + 24 * v19);
          if ( !v21 )
            goto LABEL_53;
          v22 = EmpSearchEntryDatabase(v21);
          v24 = v22;
          if ( !v22 )
          {
LABEL_50:
            v12 = -1073741275;
            goto LABEL_54;
          }
          *(_QWORD *)(v11[1] + 8 * v23) = v22;
          v25 = *(_QWORD *)(a2 + 8 * v20 + 8);
          if ( v25 )
          {
            v46 = (_QWORD *)(v11[3] + 32LL * v10);
            *v46 = v25;
            v46[1] = *(_QWORD *)(a2 + 8 * v20 + 16);
            v47 = v24 + 7;
            v48 = (_QWORD *)v24[8];
            v49 = v46 + 2;
            if ( (_QWORD *)*v48 != v47 )
              __fastfail(3u);
            *v49 = v47;
            ++v10;
            v49[1] = v48;
            *v48 = v49;
            v47[1] = v49;
          }
          v19 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v19 >= (unsigned int)v7 )
            goto LABEL_19;
        }
      }
      v44 = (unsigned int)(32 * v18);
      v45 = ExAllocatePoolWithTag(PagedPool, v44, 0x72704D45u);
      v11[3] = v45;
      if ( v45 )
      {
        memset(v45, 0, (unsigned int)v44);
        goto LABEL_14;
      }
    }
LABEL_44:
    v12 = -1073741670;
    goto LABEL_54;
  }
LABEL_19:
  if ( a5 )
  {
    v26 = ExAllocatePoolWithTag(PagedPool, 8 * a5, 0x72704D45u);
    v11[5] = v26;
    if ( !v26 )
      goto LABEL_44;
    memset(v26, 0, 8 * a5);
    v27 = 0;
    *((_DWORD *)v11 + 12) = a5;
    v28 = 0LL;
    v29 = (__int64 *)(a4 + 8);
    while ( 1 )
    {
      v30 = *v29;
      if ( !*v29 )
        break;
      v31 = (_QWORD *)*(v29 - 1);
      if ( !v31 )
        break;
      v32 = EmpSearchCallbackDatabase(v31);
      v34 = v32;
      if ( !v32 )
        goto LABEL_50;
      v35 = v32[2];
      if ( v35 && v35 != v30 )
      {
        v12 = -1073741771;
        goto LABEL_54;
      }
      ++v27;
      *(_QWORD *)(v28 + v11[5]) = v34;
      v28 += 8LL;
      v34[2] = *v33;
      v36 = v33[1];
      v29 = v33 + 3;
      v34[4] = v36;
      if ( v27 >= a5 )
        goto LABEL_27;
    }
LABEL_53:
    v12 = -1073741811;
LABEL_54:
    if ( v11 )
    {
      v50 = (void *)v11[1];
      if ( v50 )
        ExFreePoolWithTag(v50, 0x72704D45u);
      if ( v11[3] )
      {
        for ( i = 0; i < v10; *(_QWORD *)(v53 + 8) = v54 )
        {
          v52 = (_QWORD *)(32LL * i + 16 + v11[3]);
          v53 = *v52;
          if ( *(_QWORD **)(*v52 + 8LL) != v52 || (v54 = (_QWORD *)v52[1], (_QWORD *)*v54 != v52) )
            __fastfail(3u);
          ++i;
          *v54 = v53;
        }
        ExFreePoolWithTag((PVOID)v11[3], 0x72704D45u);
      }
      if ( v11[5] )
      {
        if ( a5 )
        {
          v55 = 0LL;
          v56 = a5;
          do
          {
            v57 = *(_QWORD *)(v55 + v11[5]);
            if ( v57 && !*(_DWORD *)(v57 + 24) )
              *(_QWORD *)(v57 + 16) = 0LL;
            v55 += 8LL;
            --v56;
          }
          while ( v56 );
        }
        ExFreePoolWithTag((PVOID)v11[5], 0x72704D45u);
      }
      ExFreePoolWithTag(v11, 0x72704D45u);
    }
    goto LABEL_40;
  }
LABEL_27:
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v11 + 4); j = (unsigned int)(j + 1) )
  {
    v38 = *(_QWORD *)(v11[1] + 8 * j);
    _InterlockedIncrement((volatile signed __int32 *)(v38 + 16));
    for ( k = *(_QWORD **)(v38 + 72); k; k = (_QWORD *)*k )
      EmpQueueRuleUpdateState(*(k - 1), 0LL);
  }
  for ( m = 0LL; (unsigned int)m < *((_DWORD *)v11 + 12); m = (unsigned int)(m + 1) )
  {
    v41 = *(_QWORD *)(v11[5] + 8 * m);
    _InterlockedIncrement((volatile signed __int32 *)(v41 + 24));
    for ( n = *(_QWORD **)(v41 + 48); n; n = (_QWORD *)*n )
      EmpQueueRuleUpdateState(*(n - 1), 0LL);
  }
  if ( Object )
    ObfReferenceObject(Object);
  *v11 = Object;
  *a6 = v11;
LABEL_40:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v12;
}
