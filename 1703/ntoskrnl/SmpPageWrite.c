/*
 * XREFs of SmpPageWrite @ 0x1400560CC
 * Callers:
 *     MiStoreWriteIssue @ 0x140056248 (MiStoreWriteIssue.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x140062340 (SmpKeyedStoreReference.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall SmpPageWrite(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
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
    || (v11 = SmpKeyedStoreReference((ULONG_PTR)&qword_1403FA1A8), v10 = v11, v11 == -1) )
  {
    v12 = v16;
  }
  else
  {
    v12 = v11 & 0x3FF | a3 & 0xFFFFF800;
    v16 = v12;
  }
  if ( (v12 & 0x7FF) != 0x400 )
    goto LABEL_5;
  if ( dword_1403FA1D0 != -1 )
  {
    v16 = dword_1403FA1D0 & 0x3FF | v12 & 0xFFFFF800;
LABEL_5:
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite((__int64)&SmGlobals, a1, v16, a4, a5 & 0x7FFFFFFFFFFFFFFFLL, a6, a7);
    goto LABEL_6;
  }
  v13 = -1073741285;
LABEL_6:
  if ( v10 != -1 )
  {
    v14 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v10 & 0x3FF);
    ExReleaseRundownProtection(v14 + 1);
  }
  return v13;
}
