/*
 * XREFs of EmpProviderRegister @ 0x14062AC40
 * Callers:
 *     EmProviderRegister @ 0x14062ABD0 (EmProviderRegister.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EmpQueueRuleUpdateState @ 0x140175D14 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x140175DE8 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x140175E20 (EmpSearchEntryDatabase.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  PVOID v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r10
  __int64 v22; // r14
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r10
  _QWORD *v26; // rdx
  __int64 v27; // rax
  PVOID v28; // rax
  unsigned int v29; // r15d
  __int64 v30; // r14
  __int64 *v31; // r10
  __int64 v32; // rsi
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // r10
  _QWORD *v36; // r11
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 j; // rbp
  __int64 v40; // rdx
  _QWORD *k; // rsi
  __int64 m; // rbp
  __int64 v43; // rdx
  _QWORD *n; // rsi
  __int64 v45; // rdx
  SIZE_T v47; // r14
  PVOID v48; // rax
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rcx
  void *v53; // rcx
  unsigned int i; // edx
  _QWORD *v55; // r8
  __int64 v56; // rcx
  _QWORD *v57; // rax
  char *v58; // rcx
  char *v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax

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
  v16 = PoolWithTag + 7;
  v16[1] = v16;
  *v16 = v16;
  if ( (_DWORD)v7 )
  {
    v17 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * v7), 0x72704D45u);
    v11[1] = v17;
    if ( v17 )
    {
      memset(v17, 0, (unsigned int)(8 * v7));
      *((_DWORD *)v11 + 4) = v7;
      v18 = (_QWORD *)(a2 + 8);
      v19 = v7;
      do
      {
        if ( *v18 )
          ++*((_DWORD *)v11 + 8);
        v18 += 3;
        --v19;
      }
      while ( v19 );
      v20 = *((_DWORD *)v11 + 8);
      if ( !v20 )
      {
LABEL_14:
        v21 = 0LL;
        while ( 1 )
        {
          v22 = 3 * v21;
          v23 = *(_QWORD **)(a2 + 24 * v21);
          if ( !v23 )
            goto LABEL_53;
          v24 = EmpSearchEntryDatabase(v23);
          v26 = v24;
          if ( !v24 )
          {
LABEL_50:
            v12 = -1073741275;
            goto LABEL_54;
          }
          *(_QWORD *)(v11[1] + 8 * v25) = v24;
          v27 = *(_QWORD *)(a2 + 8 * v22 + 8);
          if ( v27 )
          {
            v49 = (_QWORD *)(v11[3] + 32LL * v10);
            *v49 = v27;
            v49[1] = *(_QWORD *)(a2 + 8 * v22 + 16);
            v50 = v26 + 7;
            v51 = (_QWORD *)v26[8];
            v52 = v49 + 2;
            if ( (_QWORD *)*v51 != v50 )
              __fastfail(3u);
            *v52 = v50;
            ++v10;
            v52[1] = v51;
            *v51 = v52;
            v50[1] = v52;
          }
          v21 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v21 >= (unsigned int)v7 )
            goto LABEL_19;
        }
      }
      v47 = (unsigned int)(32 * v20);
      v48 = ExAllocatePoolWithTag(PagedPool, v47, 0x72704D45u);
      v11[3] = v48;
      if ( v48 )
      {
        memset(v48, 0, (unsigned int)v47);
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
    v28 = ExAllocatePoolWithTag(PagedPool, 8 * a5, 0x72704D45u);
    v11[5] = v28;
    if ( !v28 )
      goto LABEL_44;
    memset(v28, 0, 8 * a5);
    v29 = 0;
    *((_DWORD *)v11 + 12) = a5;
    v30 = 0LL;
    v31 = (__int64 *)(a4 + 8);
    while ( 1 )
    {
      v32 = *v31;
      if ( !*v31 )
        break;
      v33 = (_QWORD *)*(v31 - 1);
      if ( !v33 )
        break;
      v34 = EmpSearchCallbackDatabase(v33);
      v36 = v34;
      if ( !v34 )
        goto LABEL_50;
      v37 = v34[2];
      if ( v37 && v37 != v32 )
      {
        v12 = -1073741771;
        goto LABEL_54;
      }
      ++v29;
      *(_QWORD *)(v30 + v11[5]) = v36;
      v30 += 8LL;
      v36[2] = *v35;
      v38 = v35[1];
      v31 = v35 + 3;
      v36[4] = v38;
      if ( v29 >= a5 )
        goto LABEL_27;
    }
LABEL_53:
    v12 = -1073741811;
LABEL_54:
    if ( v11 )
    {
      v53 = (void *)v11[1];
      if ( v53 )
        ExFreePoolWithTag(v53, 0x72704D45u);
      if ( v11[3] )
      {
        for ( i = 0; i < v10; *(_QWORD *)(v56 + 8) = v57 )
        {
          v55 = (_QWORD *)(32LL * i + 16 + v11[3]);
          v56 = *v55;
          if ( *(_QWORD **)(*v55 + 8LL) != v55 || (v57 = (_QWORD *)v55[1], (_QWORD *)*v57 != v55) )
            __fastfail(3u);
          ++i;
          *v57 = v56;
        }
        ExFreePoolWithTag((PVOID)v11[3], 0x72704D45u);
      }
      v58 = (char *)v11[5];
      if ( v58 )
      {
        if ( a5 )
        {
          v59 = (char *)v11[5];
          v60 = 0LL;
          v61 = a5;
          do
          {
            v62 = *(_QWORD *)&v58[v60];
            if ( v62 && !*(_DWORD *)(v62 + 24) )
            {
              *(_QWORD *)(v62 + 16) = 0LL;
              v58 = (char *)v11[5];
              v59 = v58;
            }
            v60 += 8LL;
            --v61;
          }
          while ( v61 );
          v58 = v59;
        }
        ExFreePoolWithTag(v58, 0x72704D45u);
      }
      ExFreePoolWithTag(v11, 0x72704D45u);
    }
    goto LABEL_40;
  }
LABEL_27:
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v11 + 4); j = (unsigned int)(j + 1) )
  {
    v40 = *(_QWORD *)(v11[1] + 8 * j);
    _InterlockedIncrement((volatile signed __int32 *)(v40 + 16));
    for ( k = *(_QWORD **)(v40 + 72); k; k = (_QWORD *)*k )
      EmpQueueRuleUpdateState(*(k - 1), 0LL);
  }
  for ( m = 0LL; (unsigned int)m < *((_DWORD *)v11 + 12); m = (unsigned int)(m + 1) )
  {
    v43 = *(_QWORD *)(v11[5] + 8 * m);
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 24));
    for ( n = *(_QWORD **)(v43 + 48); n; n = (_QWORD *)*n )
      EmpQueueRuleUpdateState(*(n - 1), 0LL);
  }
  if ( Object )
    ObfReferenceObject(Object);
  *v11 = Object;
  *a6 = v11;
LABEL_40:
  v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v45) = v45 & 6;
  if ( (_BYTE)v45 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock, v45, v13, v14);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v12;
}
