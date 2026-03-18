/*
 * XREFs of SmPerformStoreSwapOperation @ 0x1400040B8
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E5E0 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall SmPerformStoreSwapOperation(int a1, void *a2)
{
  bool v2; // zf
  struct _KPROCESS *Process; // rcx

  if ( a1 == 3 )
  {
    PspQueueApcSpecialApc(a2);
    return 0LL;
  }
  else
  {
    v2 = a1 == 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v2 )
      return MmInSwapVirtualAddresses(Process, a2);
    else
      return MmOutSwapVirtualAddresses(Process);
  }
}
