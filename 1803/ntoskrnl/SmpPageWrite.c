/*
 * XREFs of SmpPageWrite @ 0x14008C594
 * Callers:
 *     MiStoreWriteIssue @ 0x14008C488 (MiStoreWriteIssue.c)
 * Callees:
 *     SmpKeyedStoreReference @ 0x14008BB9C (SmpKeyedStoreReference.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall SmpPageWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v8; // edi
  int v10; // ebx
  unsigned int v11; // r10d
  int v12; // eax
  unsigned int v13; // edi
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v16; // [rsp+68h] [rbp+10h]

  v16 = a3;
  v8 = a3;
  v10 = -1;
  v11 = a3;
  if ( (*(_DWORD *)(a2 + 8) & 3) == 0 )
  {
    v12 = SmpKeyedStoreReference((signed __int64 *)qword_140466188, (__int64)&SmGlobals);
    v10 = v12;
    v11 = v8;
    if ( v12 != -1 )
    {
      v11 = v12 & 0x3FF | v8 & 0xFFFFF800;
      LODWORD(v16) = v11;
    }
  }
  if ( (v11 & 0x7FF) != 0x400 )
    goto LABEL_5;
  if ( dword_1404661B0 != -1 )
  {
    LODWORD(v16) = dword_1404661B0 & 0x3FF | v11 & 0xFFFFF800;
LABEL_5:
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(&SmGlobals, a1, v16, a4, a5 & 0x7FFFFFFFFFFFFFFFLL, a6, a7);
    goto LABEL_6;
  }
  v13 = -1073741285;
LABEL_6:
  if ( v10 != -1 )
  {
    v14 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(&SmGlobals, v10 & 0x3FF);
    ExReleaseRundownProtection(v14 + 1);
  }
  return v13;
}
