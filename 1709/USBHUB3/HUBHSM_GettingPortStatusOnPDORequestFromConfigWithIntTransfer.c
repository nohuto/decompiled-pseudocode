/*
 * XREFs of HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer @ 0x1C0007690
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00055C0 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer(__int64 a1)
{
  HUBHTX_GetRequestedPortStatusUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
