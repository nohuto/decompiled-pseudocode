/*
 * XREFs of ?SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z @ 0x1C0027CC4
 * Callers:
 *     imp_WdfDeviceSetPowerCapabilities @ 0x1C00363C0 (imp_WdfDeviceSetPowerCapabilities.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SetPowerCaps(FxPkgPnp *this, _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  __int16 v2; // r9
  _DEVICE_POWER_STATE *DeviceState; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  __int16 v7; // r11
  int v8; // eax
  int v9; // r8d
  _WDF_TRI_STATE DeviceD1; // ecx
  __int16 v11; // cx
  _WDF_TRI_STATE DeviceD2; // r8d
  _WDF_TRI_STATE WakeFromD0; // r8d
  __int16 v14; // cx
  __int16 v15; // ax
  _WDF_TRI_STATE WakeFromD1; // r8d
  __int16 v17; // cx
  __int16 v18; // ax
  _WDF_TRI_STATE WakeFromD2; // r8d
  __int16 v20; // cx
  __int16 v21; // ax
  _WDF_TRI_STATE WakeFromD3; // r8d
  __int16 v23; // cx

  v2 = 0;
  DeviceState = PowerCapabilities->DeviceState;
  v5 = 0;
  v6 = 0;
  v7 = 4;
  do
  {
    v8 = (*DeviceState & 0xF) << v6;
    v9 = ~(15 << v6);
    v6 += 4;
    v5 = v8 | v9 & v5;
    ++DeviceState;
  }
  while ( v6 < 0x1C );
  this->m_PowerCaps.States = v5;
  DeviceD1 = PowerCapabilities->DeviceD1;
  if ( DeviceD1 )
  {
    if ( DeviceD1 == WdfTrue )
      v11 = 1;
    else
      v11 = 2;
  }
  else
  {
    v11 = 0;
  }
  DeviceD2 = PowerCapabilities->DeviceD2;
  if ( DeviceD2 )
  {
    if ( DeviceD2 != WdfTrue )
      v7 = 8;
  }
  else
  {
    v7 = 0;
  }
  WakeFromD0 = PowerCapabilities->WakeFromD0;
  v14 = v7 | v11;
  if ( WakeFromD0 )
  {
    if ( WakeFromD0 == WdfTrue )
      v15 = 16;
    else
      v15 = 32;
  }
  else
  {
    v15 = 0;
  }
  WakeFromD1 = PowerCapabilities->WakeFromD1;
  v17 = v15 | v14;
  if ( WakeFromD1 )
  {
    if ( WakeFromD1 == WdfTrue )
      v18 = 64;
    else
      v18 = 128;
  }
  else
  {
    v18 = 0;
  }
  WakeFromD2 = PowerCapabilities->WakeFromD2;
  v20 = v18 | v17;
  if ( WakeFromD2 )
  {
    if ( WakeFromD2 == WdfTrue )
      v21 = 256;
    else
      v21 = 512;
  }
  else
  {
    v21 = 0;
  }
  WakeFromD3 = PowerCapabilities->WakeFromD3;
  v23 = v21 | v20;
  if ( WakeFromD3 )
  {
    v2 = 2048;
    if ( WakeFromD3 == WdfTrue )
      v2 = 1024;
  }
  this->m_PowerCaps.Caps = v23 | v2;
  if ( PowerCapabilities->DeviceWake != PowerDeviceMaximum )
    this->m_PowerCaps.DeviceWake = PowerCapabilities->DeviceWake;
  if ( PowerCapabilities->SystemWake != PowerSystemMaximum )
    this->m_PowerCaps.SystemWake = PowerCapabilities->SystemWake;
  this->m_PowerCaps.D1Latency = PowerCapabilities->D1Latency;
  this->m_PowerCaps.D2Latency = PowerCapabilities->D2Latency;
  this->m_PowerCaps.D3Latency = PowerCapabilities->D3Latency;
  if ( PowerCapabilities->IdealDxStateForSx != PowerDeviceMaximum )
    this->m_PowerPolicyMachine.m_Owner->m_IdealDxStateForSx = PowerCapabilities->IdealDxStateForSx;
}
