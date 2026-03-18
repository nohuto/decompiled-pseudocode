/*
 * XREFs of SmKmStoreHelperSendCommand @ 0x140097C0C
 * Callers:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140097874 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperCleanup @ 0x140099E74 (SmKmStoreHelperCleanup.c)
 * Callees:
 *     SmKmStoreHelperCheckWaitCommand @ 0x140097C88 (SmKmStoreHelperCheckWaitCommand.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

__int64 __fastcall SmKmStoreHelperSendCommand(__int64 a1, __int16 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // edi

  v7 = SmKmStoreHelperCheckWaitCommand(a1, a4);
  if ( v7 != -1073741650 )
  {
    v7 = 0;
    *(_WORD *)(a1 + 58) = a2;
    if ( a3 )
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)a3;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 16);
      *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 32);
    }
    KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  }
  return v7;
}
