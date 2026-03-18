/*
 * XREFs of KseKasperskyInitialize @ 0x1408271F4
 * Callers:
 *     KseInitialize @ 0x1408404D4 (KseInitialize.c)
 * Callees:
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020EFB4 (KsepLogError.c)
 *     KseRegisterShim @ 0x1405C58F0 (KseRegisterShim.c)
 */

void KseKasperskyInitialize()
{
  int v0; // eax
  __int64 v1; // rcx
  char v2; // al

  v0 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 983162;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(12LL, "Kaspersky shim: failed to register.\n");
    KsepLogError(12, "Kaspersky shim: failed to register.\n");
  }
}
