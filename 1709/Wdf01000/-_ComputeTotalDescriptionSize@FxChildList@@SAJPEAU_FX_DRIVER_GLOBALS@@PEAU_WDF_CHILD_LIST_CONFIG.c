/*
 * XREFs of ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C0020D3C
 * Callers:
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C001468C (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00227C0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023158 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxChildList::_ComputeTotalDescriptionSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int64 _a1; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // r9

  _a1 = Config->IdentificationDescriptionSize;
  *TotalDescriptionSize = 0LL;
  v5 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v5 < _a1 )
  {
    v14 = 56;
LABEL_12:
    v10 = -1073741811;
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, v14, WPP_FxChildList_cpp_Traceguids, _a1, -1073741811);
    return v10;
  }
  _a1 = Config->AddressDescriptionSize;
  v6 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v6 < _a1 )
  {
    v14 = 57;
    goto LABEL_12;
  }
  v7 = v5 + 88;
  v8 = -1LL;
  v9 = -1LL;
  if ( v7 >= 0x58 )
    v9 = v7;
  v10 = v7 < 0x58 ? 0xC0000095 : 0;
  *TotalDescriptionSize = v9;
  if ( v7 < 0x58 )
  {
    v15 = 58;
  }
  else
  {
    v11 = v9;
    v12 = v6 + v9;
    if ( v12 >= v11 )
      v8 = v12;
    v10 = v12 < v11 ? 0xC0000095 : 0;
    *TotalDescriptionSize = v8;
    if ( v12 >= v11 )
      return 0LL;
    v15 = 59;
  }
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, v15, WPP_FxChildList_cpp_Traceguids, v10);
  return v10;
}
