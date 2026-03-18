/*
 * XREFs of BgSetFrameBufferAccess @ 0x14083B008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1401854B0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_14039D950 = a1;
  *(_QWORD *)&xmmword_14039D960 = a2;
  *((_QWORD *)&xmmword_14039D960 + 1) = a3;
}
