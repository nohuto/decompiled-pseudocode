/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0017810
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0011810 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0011D50 (imp_WdfPdoInitAddHardwareID.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0013D88 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0014510 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0014A30 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0017490 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001ED8C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0020C9C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0030100 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0038260 (imp_WdfRegistryQueryString.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C00386CC (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfStringCreate @ 0x1C0038850 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0038990 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0038A80 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00394A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0075DD0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C00770F0 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x1C007A1A0 (imp_WdfDriverRetrieveVersionString.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  unsigned __int16 Length; // si
  unsigned __int16 v7; // di
  wchar_t *v8; // rcx
  wchar_t *v9; // rax
  wchar_t *Buffer; // rax
  void *Caller; // [rsp+38h] [rbp+0h]

  Length = Source->Length;
  v7 = Source->Length + 2;
  if ( (unsigned __int16)(Length + 2) < Length )
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, 0xAu, WPP_stringutil_cpp_Traceguids, -1073741675);
    return 3221225621LL;
  }
  else
  {
    if ( Destination->MaximumLength >= v7 )
    {
LABEL_7:
      memmove(Destination->Buffer, Source->Buffer, Length);
      Buffer = Destination->Buffer;
      Destination->Length = Length;
      Buffer[(unsigned __int64)Length >> 1] = 0;
      return 0LL;
    }
    v8 = Destination->Buffer;
    if ( v8 )
    {
      FxPoolFree(v8);
      *(_QWORD *)&Destination->Length = 0LL;
      Destination->Buffer = 0LL;
    }
    v9 = (wchar_t *)FxPoolAllocator(
                      FxDriverGlobals,
                      &FxDriverGlobals->FxPoolFrameworks,
                      1u,
                      (unsigned __int16)(Length + 2),
                      FxDriverGlobals->Tag,
                      Caller);
    Destination->Buffer = v9;
    if ( v9 )
    {
      Destination->MaximumLength = v7;
      goto LABEL_7;
    }
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, 0xBu, WPP_stringutil_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
