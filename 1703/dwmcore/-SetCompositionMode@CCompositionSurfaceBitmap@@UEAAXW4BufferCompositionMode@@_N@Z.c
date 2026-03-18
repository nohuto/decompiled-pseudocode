/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x18012DB90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18000A6C8 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000B33C (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetCompositionMode(__int64 a1)
{
  char v1; // r8
  __int64 v2; // r9
  int v3; // r10d

  if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(a1 - 56)) )
    CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(v2 + 408), v3, v1);
}
