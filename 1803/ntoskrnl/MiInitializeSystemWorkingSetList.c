/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x14060B070
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x14062BC48 (MiInitializeSystemCache.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiInitializeWorkingSetList @ 0x14006A7A0 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x14006A904 (MiAllowWorkingSetExpansion.c)
 *     MiTranslateWsType @ 0x140080418 (MiTranslateWsType.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(ULONG_PTR *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 *v13; // rbp

  if ( a3 == 1 )
  {
    v13 = (__int64 *)qword_1403CB630;
LABEL_8:
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    MiInitializeWorkingSetList(a2, (__int64)v13, a3, a4);
    MiAllowWorkingSetExpansion(a2);
    return 1LL;
  }
  v8 = MiTranslateWsType(a3);
  if ( v8 > 2 )
  {
    *(_BYTE *)(v9 + 184) ^= (*(_BYTE *)(v9 + 184) ^ a3) & 7;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 174) = *(_WORD *)a1;
    return 1LL;
  }
  v11 = v8;
  v12 = (-(__int64)(a1[858] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v13 = &MiState[5 * v8 + 340];
  if ( (unsigned int)MiChargeResident(a1, v12, 20LL, v10) )
  {
    if ( a1 != &MiSystemPartition )
    {
      a4 = MiState[34 * v11 + 715];
      v13 = (__int64 *)&a1[5 * v11 + 920];
    }
    *(_QWORD *)(a2 + 112) = v12;
    goto LABEL_8;
  }
  return 0LL;
}
