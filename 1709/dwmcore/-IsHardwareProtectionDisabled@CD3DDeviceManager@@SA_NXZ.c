/*
 * XREFs of ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800BC208
 * Callers:
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x18001B188 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1801287A0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ @ 0x1801A5760 (-EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A5C6C (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801A5DB0 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

char CD3DDeviceManager::IsHardwareProtectionDisabled(void)
{
  char result; // al

  result = 0;
  if ( CD3DDeviceManager::s_bHwProtectionTempDisabled || CD3DDeviceManager::s_bHwProtectionTeardown )
    return 1;
  return result;
}
