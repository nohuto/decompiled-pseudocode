/*
 * XREFs of SmSwapStore @ 0x1404445CC
 * Callers:
 *     MiInSwapStoreWorker @ 0x1404444B0 (MiInSwapStoreWorker.c)
 *     SmStoreCompressionStart @ 0x140738EE0 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140738F5C (SmStoreCompressionStop.c)
 * Callees:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140003D04 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 */

__int64 __fastcall SmSwapStore(int a1)
{
  _QWORD *v2; // rax
  _DWORD **v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  _KPROCESS *Process; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_14041B178, &Process, 0, 0);
  if ( !v2 )
    return 3221226021LL;
  v3 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v2[2] & 0x3FF);
  v5 = 2;
  if ( a1 != 2 )
    v5 = a1 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(v4, *v3, v5);
}
