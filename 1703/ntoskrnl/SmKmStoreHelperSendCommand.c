/*
 * XREFs of SmKmStoreHelperSendCommand @ 0x14001FD5C
 * Callers:
 *     SmKmStoreHelperCleanup @ 0x14001F964 (SmKmStoreHelperCleanup.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14001F9B4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 * Callees:
 *     SmKmStoreHelperCheckWaitCommand @ 0x14001FDD8 (SmKmStoreHelperCheckWaitCommand.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
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
