/*
 * XREFs of SmSwapStore @ 0x1404C9EBC
 * Callers:
 *     MiInSwapStoreWorker @ 0x1404C9E00 (MiInSwapStoreWorker.c)
 *     SmStoreCompressionStop @ 0x1404CA338 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1404CA430 (SmStoreCompressionStart.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E55C (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 */

__int64 __fastcall SmSwapStore(int a1)
{
  __int64 v2; // rax
  _DWORD **v3; // rax
  int v4; // ecx
  unsigned int v5; // r8d
  _KPROCESS *Process; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403FA1A8, &Process, 0, 0);
  if ( !v2 )
    return 3221226021LL;
  v3 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v2 + 16) & 0x3FF);
  v5 = 2;
  if ( a1 != 2 )
    v5 = a1 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(v4, *v3, v5);
}
