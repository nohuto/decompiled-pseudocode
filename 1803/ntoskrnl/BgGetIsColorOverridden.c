/*
 * XREFs of BgGetIsColorOverridden @ 0x14083DCBC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1401854B0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_14039D970 )
    return 0;
  *a1 = HIDWORD(qword_14039D970);
  return 1;
}
