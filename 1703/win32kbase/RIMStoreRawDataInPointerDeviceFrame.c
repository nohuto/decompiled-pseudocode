/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C010E880
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0110D50 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0111A34 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0095120 (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C010EFA8 (rimStoreRawDataBlock.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r11

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  if ( result )
    return (_QWORD *)rimStoreRawDataBlock(v7, v6, v8);
  return result;
}
