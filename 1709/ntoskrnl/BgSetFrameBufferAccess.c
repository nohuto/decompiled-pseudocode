/*
 * XREFs of BgSetFrameBufferAccess @ 0x1407CE008
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14013B660 (BgkSetVirtualFrameBuffer.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_14035A300 = a1;
  *(_QWORD *)&xmmword_14035A310 = a2;
  *((_QWORD *)&xmmword_14035A310 + 1) = a3;
}
