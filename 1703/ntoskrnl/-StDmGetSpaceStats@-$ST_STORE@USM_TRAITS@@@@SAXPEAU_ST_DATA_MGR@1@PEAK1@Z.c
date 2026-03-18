/*
 * XREFs of ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140027AA0
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E63C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14002B434 (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024C954 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14024F000 (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ST_STORE<SM_TRAITS>::StDmGetSpaceStats(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  int *v6; // rcx

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  LOBYTE(v3) = -(char)*(_DWORD *)(a1 + 776);
  v4 = 0;
  v5 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 1 : 8;
  v6 = (int *)(a1 + 1812);
  do
  {
    if ( a2 )
    {
      v3 = *(v6 - 1);
      *a2 += v3;
    }
    if ( a3 )
    {
      v3 = *v6;
      *a3 += *v6;
    }
    ++v4;
    v6 += 2;
  }
  while ( v4 < v5 );
  return v3;
}
