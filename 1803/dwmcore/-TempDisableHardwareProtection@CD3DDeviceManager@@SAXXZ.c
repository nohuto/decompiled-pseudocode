/*
 * XREFs of ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801DE8D0
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800C5F2C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

void CD3DDeviceManager::TempDisableHardwareProtection(void)
{
  char IsHardwareProtectionDisabled; // al
  char v1; // cl

  CD3DDeviceManager::IsHardwareProtectionDisabled();
  CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
  IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
  if ( v1 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1);
}
