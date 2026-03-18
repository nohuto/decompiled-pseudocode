/*
 * XREFs of ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x14026C634
 * Callers:
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r14
  int v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // r9d
  int v14; // r15d
  unsigned int v15; // r8d
  __int64 v16; // rcx
  _DWORD *result; // rax

  v5 = 0;
  v6 = a2;
  v10 = *(_DWORD *)(a1 + 8LL * a2 + 1824);
  v11 = *(_DWORD *)(a1 + 8LL * a2 + 1828);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    v12 = v10 << *(_DWORD *)(a1 + 812);
  else
    v12 = v11;
  v13 = *(_DWORD *)(a1 + 816);
  v14 = *(_DWORD *)(a1 + 820);
  v15 = v10 * (v13 - v14 + 1) - v11;
  if ( v10 * (v13 - v14 + 1) >= v11 && v15 >= v13 )
  {
    v16 = *(unsigned int *)(a1 + 16 * (v6 + 78));
    if ( (_DWORD)v16 != -1 )
      v15 = v14 + (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v16) & 0x1FFF) - v13 + v15 - 1;
    if ( v15 >= v13 )
      v5 = v15;
  }
  *a3 += v10;
  *a4 += v12;
  result = a5;
  *a5 += v5;
  return result;
}
