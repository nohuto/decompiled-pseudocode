/*
 * XREFs of PostPointerDeviceOutOfRangeMessage @ 0x1C01CA4C0
 * Callers:
 *     <none>
 * Callees:
 *     PostPointerEventMessage @ 0x1C00C6E10 (PostPointerEventMessage.c)
 */

void __fastcall PostPointerDeviceOutOfRangeMessage(__int64 a1, __int64 a2, int a3)
{
  PostPointerEventMessage(a1, 0x23Au, a2, a3);
}
