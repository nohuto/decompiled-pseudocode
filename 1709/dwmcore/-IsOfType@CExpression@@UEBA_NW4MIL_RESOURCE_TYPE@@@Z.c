/*
 * XREFs of ?IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A75E0
 * Callers:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CExpression::IsOfType(__int64 a1, int a2)
{
  return a2 == 48 || a2 == 10 || a2 == 94;
}
