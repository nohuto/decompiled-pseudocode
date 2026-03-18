/*
 * XREFs of SmIssueIo @ 0x14024F868
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14024ABD8 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14024CF30 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     SmKmStoreReference @ 0x140053794 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SmKmIssueIo @ 0x14024DDDC (SmKmIssueIo.c)
 */

__int64 __fastcall SmIssueIo(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  int v7; // esi
  int v9; // ebp
  int v13; // r14d
  int v14; // edi
  bool v15; // zf
  unsigned __int64 v16; // rax
  void (*v17)(void *, struct _IO_STATUS_BLOCK *, unsigned int); // r8
  struct _EX_RUNDOWN_REF *v18; // rax
  _QWORD v20[6]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a6;
  v7 = 0;
  v9 = 0;
  if ( (a6 & 1) != 0 )
  {
    v6 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( (*(_DWORD *)(v6 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 5989) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1 + 5984)) )
      return (unsigned int)-1073741058;
    v7 = 1;
  }
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 6072), 1u);
    v9 = 1;
  }
  memset(v20, 0, 0x28uLL);
  HIDWORD(v20[3]) = *(_DWORD *)(a1 + 6176);
  v20[1] = a5;
  LODWORD(v20[3]) = a2;
  v15 = (*(_DWORD *)a1 & 0x2000) == 0;
  v20[2] = __PAIR64__(a3, a4);
  LODWORD(v20[4]) = v13 | v20[4] & 0xFFFFFFFE;
  if ( v15 )
  {
    v16 = v6 + 48;
    *(_QWORD *)(v6 + 40) = a1;
    *(_DWORD *)(v6 + 32) = a4;
    v17 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpDeviceIoCompletion;
  }
  else
  {
    v16 = v6 + 32;
    v6 = a1;
    v17 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpIoCompletionApc;
  }
  v20[0] = v16;
  v14 = SmKmIssueIo((struct _SMKM_FILE_INFO *)(a1 + 6184), (__int64)v20, v17, (void *)v6, (*(_DWORD *)a1 >> 13) & 1);
  if ( v14 >= 0 )
  {
    v7 = 0;
    v9 = 0;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6072));
  if ( v7 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a1 + 5984) & 0x3FF);
    ExReleaseRundownProtection(v18 + 1);
  }
  return (unsigned int)v14;
}
