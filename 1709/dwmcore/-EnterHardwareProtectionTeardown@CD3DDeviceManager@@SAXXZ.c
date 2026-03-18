/*
 * XREFs of ?EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ @ 0x1801A5760
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1801287A0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800BC208 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 */

void CD3DDeviceManager::EnterHardwareProtectionTeardown(void)
{
  char IsHardwareProtectionDisabled; // al
  char v1; // cl

  CD3DDeviceManager::IsHardwareProtectionDisabled();
  CD3DDeviceManager::s_bHwProtectionTeardown = 1;
  IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
  if ( v1 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1);
}
