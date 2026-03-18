/*
 * XREFs of HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1C001C640
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_LogBillboardEvent @ 0x1C0026190 (HUBDTX_LogBillboardEvent.c)
 */

__int64 __fastcall HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(**(_QWORD **)(v1 + 2640) + 3LL);
  if ( !v2 )
    HUBDTX_LogBillboardEvent(v1, 0LL);
  return v2 != 0 ? 4089 : 4061;
}
