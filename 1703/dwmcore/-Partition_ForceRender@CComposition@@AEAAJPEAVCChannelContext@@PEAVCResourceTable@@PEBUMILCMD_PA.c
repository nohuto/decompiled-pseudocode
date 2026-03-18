/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x18005C81C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180046638 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x18005BB10 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18006B768 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_FORCERENDER *a4)
{
  bool v7; // r8
  char IsHardwareProtectionDisabled; // al
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // al

  if ( *((_DWORD *)a4 + 1) )
    *(_BYTE *)(*((_QWORD *)this + 4) + 150LL) = 1;
  if ( *((_DWORD *)a4 + 3) == 1 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTeardown = v7;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( (_BYTE)v9 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      goto LABEL_14;
  }
  else if ( *((_DWORD *)a4 + 3) == 2 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTeardown = 0;
    v11 = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( (_BYTE)v9 != v11 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v10 = 0LL;
LABEL_14:
      Template_q(v9, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v10);
    }
  }
  if ( *((_DWORD *)a4 + 4) )
    CRenderTargetManager::UpdateMPOCaps(*((CRenderTargetManager **)this + 4));
  CComposition::ForceFullRender(this, *((_DWORD *)a4 + 2) != 0);
  return 0LL;
}
