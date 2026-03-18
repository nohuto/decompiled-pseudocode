/*
 * XREFs of MNIspItemValid @ 0x1C0205948
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0097220 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNDoubleClick @ 0x1C0206E14 (xxxMNDoubleClick.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 */

bool __fastcall MNIspItemValid(__int64 a1, __int64 a2)
{
  return (unsigned int)MNGetpItemIndex(a1, a2) != -1;
}
