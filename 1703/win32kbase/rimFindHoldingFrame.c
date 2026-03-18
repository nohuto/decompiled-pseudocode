/*
 * XREFs of rimFindHoldingFrame @ 0x1C0095120
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C00950C8 (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C010E1D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010E78C (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C010E880 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010EAB8 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C010ED10 (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = (_QWORD *)(a1 + 664);
  v3 = *(_QWORD **)(a1 + 664);
  if ( v3 == (_QWORD *)(a1 + 664) )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  do
  {
    v6 = v3;
    if ( v3[3] == v5 )
      break;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v3 == v2 )
    return 0LL;
  return v6;
}
