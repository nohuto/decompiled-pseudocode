/*
 * XREFs of ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C00A3C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002EA30 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::StateCallback(FxPoxInterface *Context, unsigned int Component, unsigned int State)
{
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v11; // rbx
  FxPkgPnp *v12; // r11
  _FX_DRIVER_GLOBALS *v13; // rcx
  FxDeviceBase *v14; // r11
  const void *v15; // r10

  m_PkgPnp = Context->m_PkgPnp;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      5u,
      0xCu,
      0xAu,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v11 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentIdleStateCallback )
  {
    v12 = Context->m_PkgPnp;
    v13 = v12->m_Globals;
    if ( v13->FxVerboseOn )
    {
      v14 = v12->m_DeviceBase;
      v15 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qq(v13, 5u, 0xCu, 0xBu, WPP_PoxInterfaceKm_cpp_Traceguids, v15, v14->m_DeviceObject.m_DeviceObject);
    }
    v11->ComponentIdleStateCallback(v11->PoFxDeviceContext, Component, State);
  }
  else
  {
    PoFxCompleteIdleState(Context->m_PoHandle, Component);
  }
}
