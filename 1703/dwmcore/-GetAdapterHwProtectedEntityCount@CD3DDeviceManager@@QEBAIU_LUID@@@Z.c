/*
 * XREFs of ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x1800428D0
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18003A580 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180043400 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceManager::GetAdapterHwProtectedEntityCount(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  __int64 v6; // r10

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
