/*
 * XREFs of SmKmStoreReference @ 0x140053794
 * Callers:
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1400049F4 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     SmKmStoreReferenceEx @ 0x140053A78 (SmKmStoreReferenceEx.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmpKeyedStoreReference @ 0x140062340 (SmpKeyedStoreReference.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14024F5C0 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmIssueIo @ 0x14024F868 (SmIssueIo.c)
 *     SmProcessListRequestExtended @ 0x140700A28 (SmProcessListRequestExtended.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

unsigned __int64 __fastcall SmKmStoreReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  v3 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, a2 & 0x3FF);
  v4 = v3;
  if ( v3 && ExAcquireRundownProtection(v3 + 1) )
  {
    if ( (v4[4].Count & 0x3F) == a2 >> 10 )
      return v4->Count;
    ExReleaseRundownProtection(v4 + 1);
  }
  return 0LL;
}
