/*
 * XREFs of ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0073E20
 * Callers:
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C007CB40 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     GetNameFromPath @ 0x1C0015670 (GetNameFromPath.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_D @ 0x1C006E904 (WPP_IFR_SF_D.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x1C0073DC0 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     ?OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007431C (-OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00743B0 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C00743D8 (RtlStringCbCopyUnicodeString.c)
 */

__int64 __fastcall FxCompanionLibrary::LoadCompanion(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *Pdo,
        IDeviceCompanionCallbacks *CallbackInterface,
        IDeviceCompanion **DeviceCompanion)
{
  FxDriver *Driver; // rcx
  char v10; // r14
  unsigned int v11; // ebx
  int _a1; // eax
  unsigned __int64 v13; // rbx
  wchar_t *v14; // rax
  unsigned __int8 v15; // dl
  wchar_t *v16; // rsi
  int v17; // eax
  unsigned __int16 v18; // r9
  IDeviceCompanion **v19; // r15
  int v20; // eax
  _UNICODE_STRING svcNameUnicodeString; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int16 size; // [rsp+78h] [rbp+10h] BYREF

  Driver = DriverGlobals->Driver;
  *(_QWORD *)&svcNameUnicodeString.Length = 0LL;
  svcNameUnicodeString.Buffer = 0LL;
  v10 = 0;
  GetNameFromPath(&Driver->m_RegistryPath, &svcNameUnicodeString);
  if ( !svcNameUnicodeString.Length )
  {
    v11 = -1073741811;
    WPP_IFR_SF_(DriverGlobals, 2u, 0xCu, 0xFu, WPP_FxCompanionLibrary_cpp_Traceguids);
    return v11;
  }
  _a1 = RtlUShortAdd(svcNameUnicodeString.Length, 2u, &size);
  v11 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x10u, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
    return v11;
  }
  v13 = size;
  v14 = (wchar_t *)FxPoolAllocator(
                     DriverGlobals,
                     &DriverGlobals->FxPoolFrameworks,
                     ExDefaultNonPagedPoolType,
                     size,
                     DriverGlobals->Tag,
                     retaddr);
  v16 = v14;
  if ( !v14 )
  {
    v11 = -1073741670;
    WPP_IFR_SF_D(DriverGlobals, v15, 0xCu, 0x11u, WPP_FxCompanionLibrary_cpp_Traceguids, size);
    return v11;
  }
  v17 = RtlStringCbCopyUnicodeString(v14, v13, &svcNameUnicodeString);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 18;
LABEL_9:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, v18, WPP_FxCompanionLibrary_cpp_Traceguids, v17);
    goto $exit_16;
  }
  v17 = FxCompanionLibrary::OpenCompanionLibraryInterface(this, DriverGlobals);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 19;
    goto LABEL_9;
  }
  v19 = DeviceCompanion;
  v20 = this->m_RdCompanionLibrary->LoadCompanion(
          this->m_RdCompanionLibrary,
          Pdo,
          v16,
          CallbackInterface,
          DeviceCompanion);
  v11 = v20;
  if ( v20 >= 0 )
  {
    WPP_IFR_SF_q(DriverGlobals, 4u, 0xCu, 0x15u, WPP_FxCompanionLibrary_cpp_Traceguids, v19);
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x14u, WPP_FxCompanionLibrary_cpp_Traceguids, v20);
    v10 = 1;
  }
$exit_16:
  FxPoolFree(v16);
  if ( v10 )
    FxCompanionLibrary::CloseCompanionLibraryInterface(this);
  return v11;
}
