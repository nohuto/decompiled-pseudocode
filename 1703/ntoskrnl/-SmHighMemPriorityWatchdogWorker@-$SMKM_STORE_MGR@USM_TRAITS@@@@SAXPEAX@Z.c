/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053800
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14002F340 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x140034AE8 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     SmKmStoreReferenceEx @ 0x140053A78 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 v3; // rdi
  _DWORD *PoolWithTag; // r14
  unsigned int i; // esi
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  _DWORD *v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // rsi
  struct _EX_RUNDOWN_REF *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // r15
  unsigned int v17; // r12d
  __int64 v18; // r13
  _DWORD *v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rdx
  unsigned __int64 DataInUseKb; // rcx
  __int64 v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+20h] [rbp-78h]
  _QWORD SystemInformation[7]; // [rsp+30h] [rbp-68h] BYREF

  v1 = a1 - 1768;
  v2 = a1;
  v23 = a1 - 1768;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x77486D73u);
  if ( !PoolWithTag )
  {
LABEL_12:
    if ( (_DWORD)v3 )
    {
      v13 = PoolWithTag;
      do
      {
        v14 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v1, *v13 & 0x3FF);
        ExReleaseRundownProtection(v14 + 1);
        ++v13;
        --v3;
      }
      while ( v3 );
    }
    goto LABEL_15;
  }
  for ( i = 0; i < 0x400; ++i )
  {
    v6 = SmKmStoreReferenceEx(v1, i);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 5991) )
      {
        PoolWithTag[v3] = i;
        v3 = (unsigned int)(v3 + 1);
      }
      else
      {
        v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v1, i & 0x3FF);
        ExReleaseRundownProtection(v15 + 1);
      }
    }
  }
  if ( (_DWORD)v3 )
  {
    v7 = 0LL;
    v8 = (unsigned int)v3;
    v9 = PoolWithTag;
    do
    {
      v10 = (__int64 *)SmKmStoreRefFromStoreIndex(v1, *v9++ & 0x3FF);
      v7 += (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(*v10, v11);
      --v8;
    }
    while ( v8 );
    if ( ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL) >= 0 )
    {
      v12 = SystemInformation[0] / 0x5000uLL;
      if ( SystemInformation[0] / 0x5000uLL >= 0x7D000 )
        v12 = 512000LL;
      if ( v7 >= v12 )
      {
        v16 = 0LL;
        v17 = 0;
        v18 = v23;
        v19 = PoolWithTag;
        v20 = (unsigned int)v3;
        do
        {
          v24 = *(_QWORD *)SmKmStoreRefFromStoreIndex(v18, *v19 & 0x3FF);
          DataInUseKb = (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(v24, v21);
          if ( v17 <= DataInUseKb )
          {
            v16 = v24;
            v17 = DataInUseKb;
          }
          ++v19;
          --v20;
        }
        while ( v20 );
        v2 = a1;
        SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v16, 0);
        v1 = a1 - 1768;
      }
    }
    goto LABEL_12;
  }
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  _InterlockedExchange64((volatile __int64 *)(v2 + 24), 0LL);
}
