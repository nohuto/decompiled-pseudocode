/*
 * XREFs of BgGetIsColorOverridden @ 0x140758E8C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140166C60 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140341BA0 )
    return 0;
  *a1 = HIDWORD(qword_140341BA0);
  return 1;
}
