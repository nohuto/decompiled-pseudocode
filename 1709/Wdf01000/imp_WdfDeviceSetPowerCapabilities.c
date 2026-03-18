/*
 * XREFs of imp_WdfDeviceSetPowerCapabilities @ 0x1C00363C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z @ 0x1C0027CC4 (-SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qsd @ 0x1C0076568 (WPP_IFR_SF_qsd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetPowerCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int v6; // ecx
  unsigned __int8 *p_Offset; // rdx
  __int64 v8; // r8
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  _DEVICE_POWER_STATE *DeviceState; // rax
  unsigned int _a2; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  _DEVICE_POWER_STATE IdealDxStateForSx; // edx
  unsigned __int16 v15; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !PowerCapabilities )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( PowerCapabilities->Size != 80 )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x29u, WPP_FxDeviceApi_cpp_Traceguids, Device, PowerCapabilities->Size, 80);
    goto LABEL_27;
  }
  v6 = 0;
  p_Offset = &offsets[0].Offset;
  while ( 1 )
  {
    v8 = *p_Offset;
    if ( (unsigned __int64)(v8 + 4) > 0x50 )
      return;
    v9 = *(unsigned int *)((char *)&PowerCapabilities->Size + v8);
    if ( v9 > 2 )
      break;
    ++v6;
    p_Offset += 16;
    if ( v6 >= 6 )
    {
      v10 = 0;
      DeviceState = PowerCapabilities->DeviceState;
      do
      {
        if ( *DeviceState > (unsigned int)PowerDeviceMaximum )
        {
          WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x2Bu, WPP_FxDeviceApi_cpp_Traceguids, Device);
          goto LABEL_27;
        }
        ++v10;
        ++DeviceState;
      }
      while ( v10 < 7 );
      _a2 = PowerCapabilities->DeviceWake;
      if ( _a2 > 5 )
      {
        v15 = 44;
      }
      else
      {
        _a2 = PowerCapabilities->SystemWake;
        if ( _a2 > 7 )
        {
          v15 = 45;
        }
        else
        {
          m_PkgPnp = pDevice->m_PkgPnp;
          if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner || (_a2 = PowerCapabilities->IdealDxStateForSx, _a2 == 5) )
          {
            IdealDxStateForSx = PowerCapabilities->IdealDxStateForSx;
            if ( (unsigned int)(IdealDxStateForSx - 2) <= 3 )
            {
              FxPkgPnp::SetPowerCaps(m_PkgPnp, PowerCapabilities);
              return;
            }
            WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x2Fu, WPP_FxDeviceApi_cpp_Traceguids, Device, IdealDxStateForSx);
            goto LABEL_27;
          }
          v15 = 46;
        }
      }
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v15, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2);
      goto LABEL_27;
    }
  }
  WPP_IFR_SF_qsd(m_Globals, (unsigned __int8)p_Offset, v9, 0x2Au, traceGuid, Device, offsets[v6].Name, v9);
LABEL_27:
  FxVerifierDbgBreakPoint(m_Globals);
}
