/*
 * XREFs of SmKmStoreHelperWaitForCommand @ 0x14001FCB8
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14001F9B4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14001FDD8 (SmKmStoreHelperCheckWaitCommand.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

__int64 __fastcall SmKmStoreHelperWaitForCommand(__int64 a1, __int64 a2, LARGE_INTEGER *a3, int a4)
{
  unsigned int v8; // ecx
  int v9; // eax
  signed __int32 v11; // eax

  while ( 1 )
  {
    v8 = KeWaitForSingleObject((PVOID)(a1 + 32), Executive, 0, 0, a3);
    if ( !v8 )
      break;
    if ( !a4 )
      return v8;
    v11 = *(_DWORD *)(a1 + 56);
    if ( (v11 & 1) == 0 && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), v11 | 2, v11) & 1) == 0 )
      return (unsigned int)-1073741536;
  }
  KeResetEvent((PRKEVENT)(a1 + 32));
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 96);
  }
  v9 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = 0;
  return (v9 & 2) != 0 ? 0xC0000120 : 0;
}
