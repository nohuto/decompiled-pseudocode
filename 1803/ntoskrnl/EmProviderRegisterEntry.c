/*
 * XREFs of EmProviderRegisterEntry @ 0x140713B10
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EmpQueueRuleUpdateState @ 0x140175D14 (EmpQueueRuleUpdateState.c)
 *     EmpSearchEntryDatabase @ 0x140175E20 (EmpSearchEntryDatabase.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmProviderRegisterEntry(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r9
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  void *v15; // rcx
  _QWORD *PoolWithTag; // rax
  unsigned int v18; // eax
  PVOID v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rsi

  v8 = 0LL;
  v9 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( !a2 || !a1 || !a3 || !a4 || !*(_QWORD *)a3 || !*(_DWORD *)(a3 + 8) )
    goto LABEL_14;
  v13 = EmpSearchEntryDatabase(a2);
  if ( !v13 )
  {
    v9 = -1073741275;
    goto LABEL_15;
  }
  v11 = *(unsigned int *)(a1 + 16);
  v10 = 0LL;
  if ( (_DWORD)v11 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * v10);
      v14 = *v12 - *a2;
      if ( *v12 == *a2 )
        v14 = v12[1] - a2[1];
      if ( !v14 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= (unsigned int)v11 )
        goto LABEL_14;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x72704D45u);
    v8 = PoolWithTag;
    if ( PoolWithTag
      && (*PoolWithTag = v13,
          v18 = *(_DWORD *)(a3 + 8),
          *((_DWORD *)v8 + 4) = v18,
          v19 = ExAllocatePoolWithTag(PagedPool, v18, 0x72704D45u),
          (v8[1] = v19) != 0LL) )
    {
      memmove(v19, *(const void **)a3, *((unsigned int *)v8 + 4));
      v20 = *(_QWORD **)(a1 + 64);
      v21 = v8 + 5;
      if ( *v20 != a1 + 56 )
        __fastfail(3u);
      *v21 = a1 + 56;
      v8[6] = v20;
      *v20 = v21;
      *(_QWORD *)(a1 + 64) = v21;
      v10 = v13[6];
      v22 = v8 + 3;
      if ( *(_QWORD **)v10 != v13 + 5 )
        __fastfail(3u);
      *v22 = v13 + 5;
      v8[4] = v10;
      *(_QWORD *)v10 = v22;
      v13[6] = v22;
      v23 = (_QWORD *)v13[9];
      v13[4] = v22;
      while ( v23 )
      {
        EmpQueueRuleUpdateState(*(v23 - 1), (__int64)v13);
        v23 = (_QWORD *)*v23;
      }
      *a4 = v8;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
LABEL_14:
    v9 = -1073741811;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock, v10, v11, (__int64)v12);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  if ( v9 < 0 && v8 )
  {
    v15 = (void *)v8[1];
    if ( v15 )
      ExFreePoolWithTag(v15, 0x72704D45u);
    ExFreePoolWithTag(v8, 0x72704D45u);
  }
  return (unsigned int)v9;
}
