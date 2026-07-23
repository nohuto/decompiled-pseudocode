/*
 * XREFs of ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14013AC60
 * Callers:
 *     <none>
 * Callees:
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011FD0C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14011FD64 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011FD90 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout(__int64 a1)
{
  unsigned int Issue; // edi

  *(_DWORD *)(a1 + 24) = 0;
  Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  ST_STORE<SM_TRAITS>::StReleaseReadContext(*(_SLIST_HEADER **)a1, *(_QWORD *)(a1 + 16));
  if ( Issue != -1073741550 )
  {
    SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(*(_QWORD *)a1, *(_SLIST_ENTRY **)(a1 + 8), Issue);
    *(_DWORD *)(a1 + 24) = 1;
  }
}
