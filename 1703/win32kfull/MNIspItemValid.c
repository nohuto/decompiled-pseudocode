/*
 * XREFs of MNIspItemValid @ 0x1C0203E8C
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNDoubleClick @ 0x1C0205230 (xxxMNDoubleClick.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 */

bool __fastcall MNIspItemValid(__int64 a1, __int64 a2)
{
  return (unsigned int)MNGetpItemIndex(a1, a2) != -1;
}
