/*
 * XREFs of GetInputDelegate @ 0x1C009ECC8
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01A4C18 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A53D8 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 *     EditionGetInputDelegate @ 0x1C01C0740 (EditionGetInputDelegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDelegate(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // r8d

  result = 0LL;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 336);
    if ( v3 )
    {
      if ( (v3 & a2) != 0 )
        return *(_QWORD *)(a1 + 328);
    }
  }
  return result;
}
