/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DVidMemOnlyTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E49BC
 * Callers:
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x1801E48BC (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DVidMemOnlyTexture>::InternalRelease(CMILPoolResource **a1)
{
  CMILPoolResource *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILPoolResource::Release(v1);
  }
  return result;
}
