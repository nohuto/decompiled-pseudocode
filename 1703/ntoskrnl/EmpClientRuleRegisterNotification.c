/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x140683AF8
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x140683AE0 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x140070B2C (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x140070B50 (EmpSearchRuleDatabase.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x140154B40 (EmpQueueRuleUpdateState.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(PVOID Object, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // r14
  PVOID PoolWithTag; // rsi
  unsigned int v9; // edi
  PVOID v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // r12
  _QWORD *v13; // r15
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  volatile signed __int32 *v16; // rax
  __int64 v17; // r10
  volatile signed __int32 *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r9
  volatile signed __int32 *v23; // r8

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
    v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v5), 0x6C634D45u);
    *((_QWORD *)PoolWithTag + 1) = v10;
    if ( !v10 )
    {
      v9 = -1073741670;
      goto LABEL_24;
    }
    memset(v10, 0, (unsigned int)(40 * v5));
    v11 = 0;
    *((_DWORD *)PoolWithTag + 4) = v5;
    v12 = 0LL;
    v13 = (_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v14 = (_QWORD *)*(v13 - 1);
      if ( !v14 || !*v13 )
        break;
      v15 = EmpSearchRuleDatabase(v14);
      if ( !v15 || (v16 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v15), (v18 = v16) == 0LL) )
      {
        v9 = -1073741275;
        goto LABEL_24;
      }
      *(_QWORD *)(v12 + *((_QWORD *)PoolWithTag + 1)) = v16;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + v12 + 8) = *v13;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + v12 + 16) = v13[1];
      v19 = *(_QWORD **)(v17 + 88);
      v20 = (_QWORD *)(v12 + *((_QWORD *)PoolWithTag + 1) + 24LL);
      if ( *v19 != v17 + 80 )
        __fastfail(3u);
      *v20 = v17 + 80;
      v20[1] = v19;
      *v19 = v20;
      *(_QWORD *)(v17 + 88) = v20;
      if ( _InterlockedIncrement(v18) == 1 )
        EmpQueueRuleUpdateState(v17, 0LL);
      ++v11;
      v13 += 3;
      v12 += 40LL;
      if ( v11 >= (unsigned int)v5 )
      {
        if ( Object )
          ObfReferenceObject(Object);
        *(_QWORD *)PoolWithTag = Object;
        *a4 = PoolWithTag;
        goto LABEL_33;
      }
    }
  }
  v9 = -1073741811;
LABEL_24:
  if ( PoolWithTag )
  {
    if ( *((_QWORD *)PoolWithTag + 1) )
    {
      if ( (_DWORD)v5 )
      {
        v21 = 0LL;
        v22 = v5;
        do
        {
          v23 = *(volatile signed __int32 **)(v21 + *((_QWORD *)PoolWithTag + 1));
          if ( v23 )
            _InterlockedAdd(v23, 0xFFFFFFFF);
          v21 += 40LL;
          --v22;
        }
        while ( v22 );
      }
      ExFreePoolWithTag(*((PVOID *)PoolWithTag + 1), 0x6C634D45u);
    }
    ExFreePoolWithTag(PoolWithTag, 0x6C634D45u);
  }
LABEL_33:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v9;
}
