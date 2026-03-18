/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x1407136A0
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x140713680 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x1400749A0 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400749C4 (EmpSearchRuleDatabase.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EmpQueueRuleUpdateState @ 0x140175D14 (EmpQueueRuleUpdateState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(PVOID Object, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // r14
  _QWORD *PoolWithTag; // rsi
  unsigned int v9; // edi
  _QWORD *v10; // rdx
  __int64 v11; // r8
  volatile signed __int32 *v12; // r9
  PVOID v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r11
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  volatile signed __int32 *v18; // rax
  __int64 v19; // r10
  __int64 v20; // r11
  _QWORD *v21; // rax
  char *v22; // rcx
  char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // r9
  volatile signed __int32 *v26; // rdx

  v5 = a3;
  PoolWithTag = 0LL;
  v9 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( a4 && (_DWORD)v5 && a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x6C634D45u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_33;
    }
    v13 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v5), 0x6C634D45u);
    PoolWithTag[1] = v13;
    if ( !v13 )
    {
      v9 = -1073741670;
      goto LABEL_23;
    }
    memset(v13, 0, (unsigned int)(40 * v5));
    v14 = 0LL;
    *((_DWORD *)PoolWithTag + 4) = v5;
    while ( 1 )
    {
      v15 = (unsigned int)v14 + 2 * v14;
      v16 = *(_QWORD **)(a2 + 8 * v15);
      if ( !v16 || !*(_QWORD *)(a2 + 8 * v15 + 8) )
        break;
      v17 = EmpSearchRuleDatabase(v16);
      if ( !v17 || (v18 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v17), (v12 = v18) == 0LL) )
      {
        v9 = -1073741275;
        goto LABEL_23;
      }
      v11 = (unsigned int)v14 + 4 * v14;
      *(_QWORD *)(PoolWithTag[1] + 8 * v11) = v18;
      *(_QWORD *)(PoolWithTag[1] + 8 * v11 + 8) = *(_QWORD *)(a2 + 8 * v20 + 8);
      *(_QWORD *)(PoolWithTag[1] + 8 * v11 + 16) = *(_QWORD *)(a2 + 8 * v20 + 16);
      v10 = *(_QWORD **)(v19 + 88);
      v21 = (_QWORD *)(PoolWithTag[1] + 24LL + 8 * v11);
      if ( *v10 != v19 + 80 )
        __fastfail(3u);
      *v21 = v19 + 80;
      v21[1] = v10;
      *v10 = v21;
      *(_QWORD *)(v19 + 88) = v21;
      if ( _InterlockedIncrement(v12) == 1 )
        EmpQueueRuleUpdateState(v19, 0LL);
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= (unsigned int)v5 )
      {
        if ( Object )
          ObfReferenceObject(Object);
        *PoolWithTag = Object;
        *a4 = PoolWithTag;
        goto LABEL_33;
      }
    }
  }
  v9 = -1073741811;
LABEL_23:
  if ( PoolWithTag )
  {
    v22 = (char *)PoolWithTag[1];
    if ( v22 )
    {
      if ( (_DWORD)v5 )
      {
        v23 = (char *)PoolWithTag[1];
        v24 = 0LL;
        v25 = v5;
        do
        {
          v26 = *(volatile signed __int32 **)&v22[v24];
          if ( v26 )
          {
            _InterlockedAdd(v26, 0xFFFFFFFF);
            v22 = (char *)PoolWithTag[1];
            v23 = v22;
          }
          v24 += 40LL;
          --v25;
        }
        while ( v25 );
        v22 = v23;
      }
      ExFreePoolWithTag(v22, 0x6C634D45u);
    }
    ExFreePoolWithTag(PoolWithTag, 0x6C634D45u);
  }
LABEL_33:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock, (__int64)v10, v11, (__int64)v12);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v9;
}
