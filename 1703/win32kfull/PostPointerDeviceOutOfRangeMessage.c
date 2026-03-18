/*
 * XREFs of PostPointerDeviceOutOfRangeMessage @ 0x1C01A7540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PostPointerDeviceOutOfRangeMessage(__int64 a1, unsigned __int64 a2, int a3)
{
  PostPointerEventMessage(a1, 0x23Au, a2, a3);
}
