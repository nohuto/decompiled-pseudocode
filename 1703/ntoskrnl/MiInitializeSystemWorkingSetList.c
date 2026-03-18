/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x14057EA30
 * Callers:
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x1405BA9B8 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x14081450C (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x14081469C (MiInitializeSystemPtes.c)
 * Callees:
 *     MiInitializeWorkingSetList @ 0x1400644D4 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x140064644 (MiAllowWorkingSetExpansion.c)
 *     MiTranslateWsType @ 0x140084C24 (MiTranslateWsType.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(ULONG_PTR *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  __int64 *v10; // rsi

  if ( a3 == 1 )
  {
    v10 = (__int64 *)qword_14036C168;
LABEL_6:
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 172) = *(_WORD *)a1;
    MiInitializeWorkingSetList(a2, (__int64)v10, a3, a4);
    MiAllowWorkingSetExpansion(a2);
    return 1LL;
  }
  v8 = (int)MiTranslateWsType(a3);
  v9 = (-(__int64)(a1[698] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v10 = &MiState[5 * v8 + 288];
  if ( (unsigned int)MiChargeResident(a1, v9, 20LL) )
  {
    if ( a1 != &MiSystemPartition )
    {
      v10 = (__int64 *)&a1[5 * v8 + 761];
      a4 = MiState[34 * v8 + 675];
    }
    *(_QWORD *)(a2 + 112) = v9;
    goto LABEL_6;
  }
  return 0LL;
}
