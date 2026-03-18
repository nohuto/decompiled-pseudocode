/*
 * XREFs of imp_WdfDeviceAssignSxWakeSettings @ 0x1C0039A20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C002C0A4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignSxWakeSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings)
{
  unsigned __int8 v5; // dl
  unsigned __int8 IndicateChildWakeOnParentWake; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPkgPnp *m_PkgPnp; // r11
  unsigned int Size; // ecx
  unsigned __int8 ArmForWakeIfChildrenAreArmedForWake; // al
  int v12; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  IndicateChildWakeOnParentWake = 0;
  m_Globals = pDevice->m_Globals;
  if ( !Settings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v12 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x11u, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
    return v12;
  }
  Size = Settings->Size;
  if ( ((Settings->Size - 16) & 0xFFFFFFFB) != 0 )
  {
    v12 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v5, 0x12u, 0x12u, WPP_FxDeviceApi_cpp_Traceguids, 20, Size, -1073741820);
    return v12;
  }
  if ( (unsigned int)(Settings->DxState - 2) > 3
    || (unsigned int)(Settings->UserControlOfWakeSettings - 1) > 1
    || Settings->Enabled > (unsigned int)WdfUseDefault )
  {
    v12 = -1073741811;
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x13u, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
    return v12;
  }
  if ( Size <= 0x10 )
    ArmForWakeIfChildrenAreArmedForWake = 0;
  else
    ArmForWakeIfChildrenAreArmedForWake = Settings->ArmForWakeIfChildrenAreArmedForWake;
  if ( Size > 0x10 )
    IndicateChildWakeOnParentWake = Settings->IndicateChildWakeOnParentWake;
  return FxPkgPnp::PowerPolicySetSxWakeSettings(
           m_PkgPnp,
           Settings,
           ArmForWakeIfChildrenAreArmedForWake,
           IndicateChildWakeOnParentWake);
}
