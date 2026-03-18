/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1801287A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18001B594 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x1800B054C (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800BC208 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     ?EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ @ 0x1801A5760 (-EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_FORCERENDER *a4)
{
  char IsHardwareProtectionDisabled; // al
  char v7; // cl

  if ( *((_DWORD *)a4 + 1) )
    *(_BYTE *)(*((_QWORD *)this + 9) + 147LL) = 1;
  if ( *((_DWORD *)a4 + 3) == 1 )
  {
    CD3DDeviceManager::EnterHardwareProtectionTeardown();
  }
  else if ( *((_DWORD *)a4 + 3) == 2 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTeardown = 0;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( v7 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0);
  }
  if ( *((_DWORD *)a4 + 4) )
    CRenderTargetManager::UpdateMPOCaps(*((CRenderTargetManager **)this + 9));
  CComposition::ForceFullRender(this, *((_DWORD *)a4 + 2) != 0);
  return 0LL;
}
