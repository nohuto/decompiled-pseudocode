/*
 * XREFs of ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180013600
 * Callers:
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18000D4F0 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180013458 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v5);
  }
  return a1;
}
