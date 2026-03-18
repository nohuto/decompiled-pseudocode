/*
 * XREFs of PostPointerDeviceInRangeMessage @ 0x1C01CA4A0
 * Callers:
 *     <none>
 * Callees:
 *     PostPointerEventMessage @ 0x1C00C6E10 (PostPointerEventMessage.c)
 */

void __fastcall PostPointerDeviceInRangeMessage(__int64 a1, __int64 a2, int a3)
{
  PostPointerEventMessage(a1, 0x239u, a2, a3);
}
