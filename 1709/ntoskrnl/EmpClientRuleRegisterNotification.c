/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x1406AEDF0
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x1406AEDD0 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x1400B0F88 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400B0FAC (EmpSearchRuleDatabase.c)
 *     EmpQueueRuleUpdateState @ 0x140140C00 (EmpQueueRuleUpdateState.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(PVOID Object, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // r14
  PVOID PoolWithTag; // rsi
  unsigned int v9; // edi
  PVOID v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r11
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  volatile signed __int32 *v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  volatile signed __int32 *v18; // r9
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  volatile signed __int32 *v24; // r8

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
      goto LABEL_32;
    }
    v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v5), 0x6C634D45u);
    *((_QWORD *)PoolWithTag + 1) = v10;
    if ( !v10 )
    {
      v9 = -1073741670;
      goto LABEL_23;
    }
    memset(v10, 0, (unsigned int)(40 * v5));
    v11 = 0LL;
    *((_DWORD *)PoolWithTag + 4) = v5;
    while ( 1 )
    {
      v12 = (unsigned int)v11 + 2 * v11;
      v13 = *(_QWORD **)(a2 + 8 * v12);
      if ( !v13 || !*(_QWORD *)(a2 + 8 * v12 + 8) )
        break;
      v14 = EmpSearchRuleDatabase(v13);
      if ( !v14 || (v15 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v14), (v18 = v15) == 0LL) )
      {
        v9 = -1073741275;
        goto LABEL_23;
      }
      v19 = (unsigned int)v11 + 4 * v11;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + 8 * v19) = v15;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + 8 * v19 + 8) = *(_QWORD *)(a2 + 8 * v17 + 8);
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + 8 * v19 + 16) = *(_QWORD *)(a2 + 8 * v17 + 16);
      v20 = *(_QWORD **)(v16 + 88);
      v21 = (_QWORD *)(*((_QWORD *)PoolWithTag + 1) + 24LL + 8 * v19);
      if ( *v20 != v16 + 80 )
        __fastfail(3u);
      *v21 = v16 + 80;
      v21[1] = v20;
      *v20 = v21;
      *(_QWORD *)(v16 + 88) = v21;
      if ( _InterlockedIncrement(v18) == 1 )
        EmpQueueRuleUpdateState(v16, 0LL);
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= (unsigned int)v5 )
      {
        if ( Object )
          ObfReferenceObject(Object);
        *(_QWORD *)PoolWithTag = Object;
        *a4 = PoolWithTag;
        goto LABEL_32;
      }
    }
  }
  v9 = -1073741811;
LABEL_23:
  if ( PoolWithTag )
  {
    if ( *((_QWORD *)PoolWithTag + 1) )
    {
      if ( (_DWORD)v5 )
      {
        v22 = 0LL;
        v23 = v5;
        do
        {
          v24 = *(volatile signed __int32 **)(v22 + *((_QWORD *)PoolWithTag + 1));
          if ( v24 )
            _InterlockedAdd(v24, 0xFFFFFFFF);
          v22 += 40LL;
          --v23;
        }
        while ( v23 );
      }
      ExFreePoolWithTag(*((PVOID *)PoolWithTag + 1), 0x6C634D45u);
    }
    ExFreePoolWithTag(PoolWithTag, 0x6C634D45u);
  }
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v9;
}
