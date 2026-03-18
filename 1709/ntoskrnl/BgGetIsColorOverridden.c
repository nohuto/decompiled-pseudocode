/*
 * XREFs of BgGetIsColorOverridden @ 0x1407CE658
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14013B660 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_14035A320 )
    return 0;
  *a1 = HIDWORD(qword_14035A320);
  return 1;
}
