/*
 * XREFs of BgSetFrameBufferAccess @ 0x140755008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x140166C60 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140341B80 = a1;
  *(_QWORD *)&xmmword_140341B90 = a2;
  *((_QWORD *)&xmmword_140341B90 + 1) = a3;
}
