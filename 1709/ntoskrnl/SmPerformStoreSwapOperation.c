/*
 * XREFs of SmPerformStoreSwapOperation @ 0x140275E70
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140003D64 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268DA4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MmOutSwapVirtualAddresses @ 0x140230E70 (MmOutSwapVirtualAddresses.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 *     MmInSwapVirtualAddresses @ 0x1406EC92C (MmInSwapVirtualAddresses.c)
 */

__int64 __fastcall SmPerformStoreSwapOperation(int a1, __int64 a2)
{
  bool v3; // zf
  struct _KPROCESS *Process; // rcx

  if ( a1 == 3 )
  {
    PspQueueApcSpecialApc(a2);
    return 0LL;
  }
  else
  {
    v3 = a1 == 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v3 )
      return MmInSwapVirtualAddresses(Process, (PVOID)a2);
    else
      return MmOutSwapVirtualAddresses(
               Process,
               *(unsigned __int64 **)(a2 + 8),
               *(unsigned int *)(a2 + 16),
               (_QWORD *)a2);
  }
}
