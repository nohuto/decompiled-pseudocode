/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400CC190
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreReferenceEx @ 0x1400902E8 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1400CC294 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rcx
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 SystemInformation[7]; // [rsp+28h] [rbp-60h] BYREF

  v1 = a1 - 1800;
  if ( ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL) >= 0 )
  {
    v3 = 128000LL;
    v4 = 0;
    if ( SystemInformation[0] <= 0x51400000 )
      v3 = 15360LL;
    v5 = 3 * (SystemInformation[0] / 0x14000);
    if ( v5 >= v3 )
      v5 = v3;
    v9 = v5;
    do
    {
      v6 = SmKmStoreReferenceEx(v1, v4);
      v7 = v6;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 6023) != 1 )
          SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v6, &v9);
        v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v1, *(_DWORD *)(v7 + 6016) & 0x3FF);
        ExReleaseRundownProtection(v8 + 1);
      }
      ++v4;
    }
    while ( v4 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
}
