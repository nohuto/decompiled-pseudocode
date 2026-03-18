/*
 * XREFs of SmpPageWrite @ 0x1402718E0
 * Callers:
 *     MiStoreWriteIssue @ 0x14022CD90 (MiStoreWriteIssue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14026784C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x14027183C (SmpKeyedStoreReference.c)
 */

__int64 __fastcall SmpPageWrite(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  struct _EX_RUNDOWN_REF *v14; // rax
  unsigned int v16; // [rsp+68h] [rbp+10h]

  v16 = a3;
  v10 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 3) != 0
    || (v11 = SmpKeyedStoreReference((signed __int64 *)qword_14041B178, (__int64)&SmGlobals, *(_QWORD *)a2),
        v10 = v11,
        v11 == -1) )
  {
    v12 = v16;
  }
  else
  {
    v12 = v11 & 0x3FF | a3 & 0xFFFFF800;
    v16 = v12;
  }
  if ( (v12 & 0x7FF) == 0x400 )
  {
    if ( dword_14041B1A0 == -1 )
    {
      v13 = -1073741285;
      goto LABEL_10;
    }
    v16 = dword_14041B1A0 & 0x3FF | v12 & 0xFFFFF800;
  }
  v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite((__int64)&SmGlobals, a1, v16, a4, a5 & 0x7FFFFFFFFFFFFFFFLL, a6, a7);
LABEL_10:
  if ( v10 != -1 )
  {
    v14 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v10 & 0x3FF);
    ExReleaseRundownProtection_0(v14 + 1);
  }
  return v13;
}
