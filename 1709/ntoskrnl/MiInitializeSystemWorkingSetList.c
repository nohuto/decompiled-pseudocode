/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1405B471C
 * Callers:
 *     MiInitializeSystemCache @ 0x1405B3A64 (MiInitializeSystemCache.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 * Callees:
 *     MiInitializeWorkingSetList @ 0x1400145B4 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x140014724 (MiAllowWorkingSetExpansion.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiTranslateWsType @ 0x1400F0BB0 (MiTranslateWsType.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(ULONG_PTR *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 *v10; // rsi

  if ( a3 == 1 )
  {
    v10 = (__int64 *)qword_1403884A8;
LABEL_6:
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 172) = *(_WORD *)a1;
    MiInitializeWorkingSetList(a2, (__int64)v10, a3, a4);
    MiAllowWorkingSetExpansion(a2);
    return 1LL;
  }
  v8 = (int)MiTranslateWsType(a3);
  v9 = (-(__int64)(a1[722] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v10 = &MiState[5 * v8 + 305];
  if ( (unsigned int)MiChargeResident(a1, v9) )
  {
    if ( a1 != &MiSystemPartition )
    {
      a4 = MiState[34 * v8 + 667];
      v10 = (__int64 *)&a1[5 * v8 + 785];
    }
    *(_QWORD *)(a2 + 112) = v9;
    goto LABEL_6;
  }
  return 0LL;
}
