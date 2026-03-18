/*
 * XREFs of MagpRevokeInputTransfrom @ 0x1C00A2330
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C00A22B4 (MagpDecomposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01EC5F4 (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C00A236C (_SetMagnificationInputTransform.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 MagpRevokeInputTransfrom()
{
  _DWORD v1[14]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, 0x24uLL);
  v1[8] = 3;
  return (unsigned int)SetMagnificationInputTransform(v1) == 0 ? 0xC0000001 : 0;
}
