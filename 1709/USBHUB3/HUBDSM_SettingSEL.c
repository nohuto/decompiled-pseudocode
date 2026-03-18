/*
 * XREFs of HUBDSM_SettingSEL @ 0x1C001E2E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C0025B1C (HUBDTX_SetSelUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingSEL(__int64 a1)
{
  HUBDTX_SetSelUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
