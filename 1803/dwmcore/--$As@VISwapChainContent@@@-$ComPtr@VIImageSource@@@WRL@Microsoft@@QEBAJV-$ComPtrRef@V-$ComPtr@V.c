/*
 * XREFs of ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x180006700
 * Callers:
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x18000611C (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>(_QWORD *a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, a2);
}
