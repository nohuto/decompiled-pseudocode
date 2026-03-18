/*
 * XREFs of imp_WdfPdoInitAddDeviceText @ 0x1C0039140
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003927C (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0075250 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddDeviceText(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceDescription,
        const _UNICODE_STRING *DeviceLocation,
        unsigned int LocaleId)
{
  _FX_DRIVER_GLOBALS *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  __int64 result; // rax
  unsigned int v11; // esi
  FxDeviceText *v12; // rax
  FxDeviceText *v13; // rbx
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  unsigned __int16 v16; // r9
  unsigned int v17; // edx
  void *Caller; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Caller);
  v8 = DeviceInit->DriverGlobals;
  v9 = DeviceInit->DriverGlobals;
  if ( !DeviceDescription )
    FxVerifierNullBugCheck(v9, Caller);
  if ( !DeviceLocation )
    FxVerifierNullBugCheck(v9, Caller);
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v8, DeviceDescription);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v8, DeviceLocation);
      v11 = result;
      if ( (int)result >= 0 )
      {
        if ( DeviceInit->InitType != FxDeviceInitTypePdo )
        {
          WPP_IFR_SF_d(v8, 2u, 0x12u, 0x41u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
          return 3221225488LL;
        }
        v12 = (FxDeviceText *)FxPoolAllocator(v8, &v8->FxPoolFrameworks, 1u, 0x20uLL, v8->Tag, Caller);
        v13 = v12;
        if ( v12 )
        {
          v12->m_Description = 0LL;
          v12->m_LocationInformation = 0LL;
          v12->m_LocaleId = 0;
          v12->m_Entry.Next = 0LL;
        }
        else
        {
          v13 = 0LL;
        }
        if ( v13 )
        {
          v13->m_LocaleId = LocaleId;
          v14 = FxDuplicateUnicodeStringToString(v8, DeviceDescription);
          v13->m_Description = v14;
          if ( v14 )
          {
            v15 = FxDuplicateUnicodeStringToString(v8, DeviceLocation);
            v13->m_LocationInformation = v15;
            if ( v15 )
            {
              *DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY *)v13;
              DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY **)v13;
              return v11;
            }
            v16 = 68;
          }
          else
          {
            v16 = 67;
          }
          v11 = -1073741670;
          WPP_IFR_SF_d(v8, 2u, 0x12u, v16, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741670);
          FxDeviceText::`scalar deleting destructor'(v13, v17);
          return v11;
        }
        v11 = -1073741670;
        WPP_IFR_SF_d(v8, 2u, 0x12u, 0x42u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741670);
        return v11;
      }
    }
  }
  return result;
}
