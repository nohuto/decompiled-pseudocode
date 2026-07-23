/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140009270
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140009098 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x140009410 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x14011B018 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r13
  __int64 v3; // rdi
  _DWORD *PoolWithTag; // r14
  unsigned int i; // esi
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // r12
  _DWORD *v9; // rsi
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  _DWORD *v12; // rsi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v15; // r15
  unsigned int v16; // r12d
  __int64 v17; // r13
  _DWORD *v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 DataInUseKb; // rcx
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+20h] [rbp-78h]
  _QWORD SystemInformation[7]; // [rsp+30h] [rbp-68h] BYREF

  v1 = a1 - 1792;
  v2 = a1;
  v21 = a1 - 1792;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x77486D73u);
  if ( !PoolWithTag )
  {
LABEL_12:
    if ( (_DWORD)v3 )
    {
      v12 = PoolWithTag;
      do
      {
        v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v1, *v12 & 0x3FF);
        ExReleaseRundownProtection_0(v13 + 1);
        ++v12;
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
      if ( *(_BYTE *)(v6 + 6023) )
      {
        PoolWithTag[v3] = i;
        v3 = (unsigned int)(v3 + 1);
      }
      else
      {
        v14 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v1, i & 0x3FF);
        ExReleaseRundownProtection_0(v14 + 1);
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
      v10 = (_QWORD *)SmKmStoreRefFromStoreIndex(v1, *v9++ & 0x3FF);
      v7 += (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(*v10);
      --v8;
    }
    while ( v8 );
    if ( ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL) >= 0 )
    {
      v11 = SystemInformation[0] / 0x5000uLL;
      if ( SystemInformation[0] / 0x5000uLL >= 0x7D000 )
        v11 = 512000LL;
      if ( v7 >= v11 )
      {
        v15 = 0LL;
        v16 = 0;
        v17 = v21;
        v18 = PoolWithTag;
        v19 = (unsigned int)v3;
        do
        {
          v22 = *(_QWORD *)SmKmStoreRefFromStoreIndex(v17, *v18 & 0x3FF);
          DataInUseKb = (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(v22);
          if ( v16 <= DataInUseKb )
          {
            v15 = v22;
            v16 = DataInUseKb;
          }
          ++v18;
          --v19;
        }
        while ( v19 );
        v2 = a1;
        SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v15, 0);
        v1 = a1 - 1792;
      }
    }
    goto LABEL_12;
  }
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  _InterlockedExchange64((volatile __int64 *)(v2 + 24), 0LL);
}
