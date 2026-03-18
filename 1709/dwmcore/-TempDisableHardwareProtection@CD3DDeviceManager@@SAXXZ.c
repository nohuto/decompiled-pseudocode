/*
 * XREFs of ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801A5DB0
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800BC208 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
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
