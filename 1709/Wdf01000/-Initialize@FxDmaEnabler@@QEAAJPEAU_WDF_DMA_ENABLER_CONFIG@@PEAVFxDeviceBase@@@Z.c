/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C00338D8
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C0032C90 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0033638 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C006824C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     WPP_IFR_SF_dLd @ 0x1C0068294 (WPP_IFR_SF_dLd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r13d
  int _a2; // eax
  __int64 v10; // r8
  const void *v11; // r9
  int v12; // edi
  _WDF_DMA_PROFILE Profile; // ecx
  char v14; // dl
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  char v21; // dl
  unsigned __int8 v22; // di
  unsigned int AddressWidthOverride; // edx
  unsigned int WdmDmaVersionOverride; // eax
  bool v25; // zf
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v27; // rcx
  unsigned __int16 m_ObjectSize; // r8
  const void *_a1; // rsi
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int16 v33; // r9
  FxDeviceBase_vtbl *v34; // rax
  char v35; // dl
  _FX_DRIVER_GLOBALS *v36; // r10
  unsigned __int16 v37; // ax
  const void *v38; // rbx
  unsigned __int16 v39; // r9
  unsigned __int16 v40; // ax
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int v42; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+B0h] [rbp+30h]
  unsigned int globalsa; // [rsp+B0h] [rbp+30h]

  p_m_Globals = &this->m_Globals;
  globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  _a2 = v7->AllocateDmaEnablerList(Device);
  v11 = 0LL;
  v12 = _a2;
  if ( _a2 < 0 )
  {
    m_ObjectSize = Device->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
    return (unsigned int)v12;
  }
  LOBYTE(v10) = 1;
  this->m_DeviceBase = Device;
  Profile = Config->Profile;
  *((_BYTE *)this + 380) |= 4u;
  v14 = *((_BYTE *)this + 380);
  this->m_Profile = Profile;
  deviceDescription.Master = 1;
  LOBYTE(globalsa) = 1;
  deviceDescription.Dma32BitAddresses = 1;
  deviceDescription.InterfaceType = PCIBus;
  v15 = Profile - 1;
  if ( !v15 )
  {
    deviceDescription.ScatterGather = 0;
    goto LABEL_43;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v35 = v14 | 8;
    goto LABEL_39;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v22 = 1;
    deviceDescription.ScatterGather = 0;
    deviceDescription.Dma64BitAddresses = 1;
    goto LABEL_10;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v21 = v14 | 8;
    goto LABEL_9;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v35 = v14 | 0x18;
LABEL_39:
    deviceDescription.ScatterGather = 1;
    *((_BYTE *)this + 380) = v35;
LABEL_43:
    v22 = 0;
    deviceDescription.Dma64BitAddresses = 0;
    goto LABEL_10;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v21 = v14 | 0x18;
LABEL_9:
    v22 = 1;
    *((_BYTE *)this + 380) = v21;
    deviceDescription.Dma64BitAddresses = 1;
    deviceDescription.ScatterGather = 1;
    goto LABEL_10;
  }
  v31 = v20 - 1;
  if ( v31 )
  {
    if ( v31 != 1 )
      return 3221225485LL;
    *((_BYTE *)this + 380) = v14 & 0xEB | 0x10;
    v32 = 128LL;
  }
  else
  {
    *((_BYTE *)this + 380) = v14 & 0xFB;
    v32 = 64LL;
  }
  LOBYTE(_a2) = 0;
  deviceDescription.Dma64BitAddresses = 0;
  globalsa = _a2;
  v8 = 3;
  deviceDescription.Dma32BitAddresses = 0;
  v34 = Device->FxNonPagedObject::FxObject::__vftable;
  v22 = 0;
  deviceDescription.Version = 3;
  *(_WORD *)&deviceDescription.Master = 0;
  v34->SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v32);
  v10 = globalsa;
  v11 = 0LL;
LABEL_10:
  this->m_MaximumLength = Config->MaximumLength;
  AddressWidthOverride = Config->AddressWidthOverride;
  if ( !AddressWidthOverride )
  {
LABEL_11:
    WdmDmaVersionOverride = Config->WdmDmaVersionOverride;
    if ( !WdmDmaVersionOverride )
      goto LABEL_14;
    if ( WdmDmaVersionOverride >= v8 )
    {
      v8 = Config->WdmDmaVersionOverride;
      deviceDescription.Version = v8;
LABEL_14:
      if ( v8 >= 3 && !deviceDescription.DmaAddressWidth )
      {
        if ( v22 )
          deviceDescription.DmaAddressWidth = 64;
        else
          deviceDescription.DmaAddressWidth = (_BYTE)globalsa != 0 ? 32 : 24;
      }
      if ( (Config->Flags & 2) == 0 )
        goto LABEL_19;
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(*p_m_Globals, AddressWidthOverride, 0x13u) )
      {
        if ( v8 == 3 )
        {
          *((_BYTE *)this + 380) |= 0x40u;
LABEL_19:
          v25 = (*((_BYTE *)this + 380) & 4) == 0;
          m_DeviceBase = this->m_DeviceBase;
          this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
          if ( v25 || (v12 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), v12 >= 0) )
          {
            v27 = this->m_DeviceBase;
            this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
            this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
            this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
            this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
            this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
            this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
            ((void (__fastcall *)(FxDeviceBase *, FxDmaEnabler *, __int64, const void *))v27->AddDmaEnabler)(
              v27,
              this,
              v10,
              v11);
            *((_BYTE *)this + 380) |= 1u;
            if ( (*((_BYTE *)this + 380) & 4) != 0 )
              this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
            return 0;
          }
          else
          {
            FxDmaEnabler::ReleaseResources(this);
          }
          return (unsigned int)v12;
        }
        v37 = this->m_ObjectSize;
        v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v37 )
          v38 = v11;
        v39 = v10 - 3;
      }
      else
      {
        v40 = this->m_ObjectSize;
        v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v40 )
          v38 = v11;
        v39 = 17;
      }
      WPP_IFR_SF_qd(v36, 2u, 0xFu, v39, WPP_FxDmaEnabler_cpp_Traceguids, v38, -1073741811);
      goto LABEL_33;
    }
    WPP_IFR_SF_DDd(
      *p_m_Globals,
      AddressWidthOverride,
      0xFu,
      0xFu,
      WPP_FxDmaEnabler_cpp_Traceguids,
      WdmDmaVersionOverride,
      v8,
      -1073741811);
LABEL_33:
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 380) & 4) == 0 )
  {
    v33 = 11;
LABEL_32:
    WPP_IFR_SF_dLd(*p_m_Globals, AddressWidthOverride, v10, v33, traceGuid, AddressWidthOverride, Config->Profile, v42);
    goto LABEL_33;
  }
  if ( !v22 && AddressWidthOverride > 0x20 )
  {
    v33 = 12;
    goto LABEL_32;
  }
  if ( FxLibraryGlobals.OsVersionInfo.dwMajorVersion > 6
    || FxLibraryGlobals.OsVersionInfo.dwMajorVersion == 6 && FxLibraryGlobals.OsVersionInfo.dwMinorVersion >= 2 )
  {
    v8 = 3;
    deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
    deviceDescription.Version = 3;
    goto LABEL_11;
  }
  v10 = (unsigned __int8)v10;
  if ( AddressWidthOverride < 0x40 )
    v22 = 0;
  deviceDescription.Dma64BitAddresses = v22;
  if ( AddressWidthOverride < 0x20 )
    v10 = 0LL;
  LOBYTE(globalsa) = v10;
  deviceDescription.Dma32BitAddresses = v10;
  if ( AddressWidthOverride >= 0x18 )
  {
    if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
    {
      WPP_IFR_SF_dd(
        *p_m_Globals,
        3u,
        0xFu,
        0xEu,
        WPP_FxDmaEnabler_cpp_Traceguids,
        AddressWidthOverride,
        (_BYTE)v10 != 0 ? 32 : 24);
      v11 = 0LL;
    }
    goto LABEL_11;
  }
  WPP_IFR_SF_(*p_m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
  return 3221225473LL;
}
