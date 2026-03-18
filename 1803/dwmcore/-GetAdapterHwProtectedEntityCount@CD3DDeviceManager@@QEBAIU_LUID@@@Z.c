/*
 * XREFs of ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180088F48
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180088C74 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceManager::GetAdapterHwProtectedEntityCount(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 26);
  v3 = 0;
  v4 = 0;
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 10);
    while ( *(_QWORD *)(v6 + 12LL * v4) != a2 )
    {
      if ( ++v4 >= v2 )
        return v3;
    }
    return *(unsigned int *)(v6 + 12LL * v4 + 8);
  }
  return v3;
}
