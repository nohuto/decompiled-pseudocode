/*
 * XREFs of ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C007CB40
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C002A5E0 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001D59C (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0073E20 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     ??0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C007CAD4 (--0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 */

__int64 __fastcall FxDevice::AllocateCompanionTarget(FxDevice *this, FxCompanionTarget **DeviceCompanion)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxCompanionTarget *v5; // rax
  unsigned __int16 v6; // r8
  FxCompanionTarget *v7; // rax
  FxCompanionTarget *v8; // rbx
  int v9; // esi
  unsigned __int16 v10; // ax
  const void *_a1; // rdi
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _FX_DRIVER_GLOBALS *v13; // rdx
  IDeviceCompanionCallbacks *v14; // r9
  IDeviceCompanion **v15; // r10
  int Companion; // eax
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r9
  const void *v19; // rdi
  bool v20; // zf
  unsigned __int16 m_ObjectSize; // ax
  __int64 result; // rax
  int _a2; // [rsp+30h] [rbp-28h]

  p_m_Globals = &this->m_Globals;
  v5 = (FxCompanionTarget *)FxObjectHandleAlloc(
                              this->m_Globals,
                              ExDefaultNonPagedPoolType,
                              0xA0uLL,
                              0,
                              0LL,
                              0,
                              FxObjectTypeExternal);
  if ( v5 )
  {
    FxCompanionTarget::FxCompanionTarget(v5, *p_m_Globals, v6);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v8->m_Device = this;
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
    Companion = FxCompanionLibrary::LoadCompanion(FxLibraryGlobals.CompanionLibrary, v13, SafePhysicalDevice, v14, v15);
    v9 = Companion;
    if ( Companion >= 0 )
    {
      v9 = FxObject::Commit(v8, 0LL, 0LL, this, 1u);
      if ( v9 >= 0 )
        goto LABEL_15;
      m_ObjectSize = this->m_ObjectSize;
      v18 = 31;
      v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a2 = v9;
      v20 = m_ObjectSize == 0;
    }
    else
    {
      v17 = this->m_ObjectSize;
      v18 = 30;
      v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a2 = Companion;
      v20 = v17 == 0;
    }
    if ( v20 )
      v19 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, v18, WPP_FxDeviceKm_cpp_Traceguids, v19, _a2);
    FxObject::DeleteFromFailedCreate(v8);
    v8 = 0LL;
  }
  else
  {
    v9 = -1073741670;
    v10 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v10 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0x1Du, WPP_FxDeviceKm_cpp_Traceguids, _a1, -1073741670);
  }
LABEL_15:
  result = (unsigned int)v9;
  *DeviceCompanion = v8;
  return result;
}
