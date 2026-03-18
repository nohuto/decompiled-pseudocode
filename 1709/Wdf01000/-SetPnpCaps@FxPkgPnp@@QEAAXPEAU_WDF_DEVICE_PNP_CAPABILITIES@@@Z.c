/*
 * XREFs of ?SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z @ 0x1C002BE20
 * Callers:
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C0036550 (imp_WdfDeviceSetPnpCapabilities.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxPkgPnp::SetPnpCaps(FxPkgPnp *this, _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  _WDF_TRI_STATE LockSupported; // r8d
  int v4; // r9d
  int v5; // r10d
  int v6; // r8d
  _WDF_TRI_STATE EjectSupported; // ecx
  int v8; // r11d
  _WDF_TRI_STATE Removable; // ecx
  _WDF_TRI_STATE DockDevice; // ecx
  int v11; // r8d
  int v12; // ecx
  int v13; // r9d
  int v14; // r10d
  _WDF_TRI_STATE UniqueID; // r11d
  int v16; // ecx
  _WDF_TRI_STATE SilentInstall; // r8d
  int v18; // ebx
  int v19; // r9d
  int v20; // r10d
  _WDF_TRI_STATE SurpriseRemovalOK; // r8d
  int v22; // ebx
  _WDF_TRI_STATE HardwareDisabled; // ecx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  _WDF_TRI_STATE NoDisplayInUI; // r10d
  unsigned int Address; // eax
  int v29; // ebx
  unsigned int UINumber; // eax
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  LockSupported = PnpCapabilities->LockSupported;
  if ( LockSupported )
  {
    if ( LockSupported == WdfTrue )
    {
      v4 = 4096;
      v5 = 69632;
      v6 = 135168;
    }
    else
    {
      v4 = 0x2000;
      v5 = 73728;
      v6 = 139264;
    }
  }
  else
  {
    v4 = 0;
    v5 = 0x10000;
    v6 = 0x20000;
  }
  EjectSupported = PnpCapabilities->EjectSupported;
  if ( EjectSupported )
  {
    if ( EjectSupported == WdfTrue )
      v8 = 0x4000;
    else
      v8 = 0x8000;
  }
  else
  {
    v8 = 0;
  }
  Removable = PnpCapabilities->Removable;
  if ( Removable )
  {
    if ( Removable == WdfTrue )
      v6 = v5;
  }
  else
  {
    v6 = v4;
  }
  DockDevice = PnpCapabilities->DockDevice;
  v11 = v8 | v6;
  if ( DockDevice )
  {
    if ( DockDevice == WdfTrue )
    {
      v12 = 2359296;
      v13 = 0x40000;
      v14 = 1310720;
    }
    else
    {
      v12 = 2621440;
      v13 = 0x80000;
      v14 = 1572864;
    }
  }
  else
  {
    v13 = 0;
    v12 = 0x200000;
    v14 = 0x100000;
  }
  UniqueID = PnpCapabilities->UniqueID;
  if ( UniqueID )
  {
    if ( UniqueID == WdfTrue )
      v12 = v14;
  }
  else
  {
    v12 = v13;
  }
  v16 = v11 | v12;
  SilentInstall = PnpCapabilities->SilentInstall;
  if ( SilentInstall )
  {
    if ( SilentInstall == WdfTrue )
    {
      v18 = 37748736;
      v19 = 0x400000;
      v20 = 20971520;
    }
    else
    {
      v18 = 41943040;
      v19 = 0x800000;
      v20 = 25165824;
    }
  }
  else
  {
    v19 = 0;
    v18 = 0x2000000;
    v20 = 0x1000000;
  }
  SurpriseRemovalOK = PnpCapabilities->SurpriseRemovalOK;
  if ( SurpriseRemovalOK )
  {
    if ( SurpriseRemovalOK == WdfTrue )
      v18 = v20;
  }
  else
  {
    v18 = v19;
  }
  v22 = v16 | v18;
  HardwareDisabled = PnpCapabilities->HardwareDisabled;
  if ( HardwareDisabled )
  {
    if ( HardwareDisabled == WdfTrue )
    {
      v24 = 603979776;
      v25 = 0x4000000;
      v26 = 335544320;
    }
    else
    {
      v24 = 671088640;
      v25 = 0x8000000;
      v26 = 402653184;
    }
  }
  else
  {
    v25 = 0;
    v24 = 0x20000000;
    v26 = 0x10000000;
  }
  NoDisplayInUI = PnpCapabilities->NoDisplayInUI;
  if ( NoDisplayInUI )
  {
    if ( NoDisplayInUI == WdfTrue )
      v24 = v26;
  }
  else
  {
    v24 = v25;
  }
  Address = PnpCapabilities->Address;
  v29 = v24 | v22;
  if ( Address != -1 )
    this->m_PnpCapsAddress = Address;
  UINumber = PnpCapabilities->UINumber;
  if ( UINumber != -1 )
    this->m_PnpCapsUINumber = UINumber;
  FxNonPagedObject::Lock(this, &irql, v25);
  v31 = irql;
  this->m_PnpStateAndCaps.Value = v29 | this->m_PnpStateAndCaps.Value & 0xFFF;
  FxNonPagedObject::Unlock(this, v31, v32);
}
