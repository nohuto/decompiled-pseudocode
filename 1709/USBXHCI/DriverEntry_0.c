/*
 * XREFs of DriverEntry_0 @ 0x1C0007170
 * Callers:
 *     FxDriverEntry @ 0x1C0007140 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007100 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C00072E0 (-FxStubInitTypes@@YAJXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007360 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     WdfVersionBind_0 @ 0x1C0007490 (WdfVersionBind_0.c)
 *     DriverEntry @ 0x1C005A740 (DriverEntry.c)
 */

NTSTATUS __stdcall DriverEntry_0(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  int inited; // ebx
  void (__fastcall *DriverUnload)(_DRIVER_OBJECT *); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  qword_1C004F610 = (__int64)DriverObject;
  DestinationString.Buffer = (wchar_t *)&unk_1C004F620;
  *(_DWORD *)&DestinationString.Length = 34078720;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind_0(DriverObject, &DestinationString, &unk_1C004E000, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    WdfDriverMiniportUnloadOverride = *(_QWORD *)(WdfFunctions_01015 + 1608);
    inited = FxStubBindClasses((struct _WDF_BIND_INFO *)&unk_1C004E000);
    if ( inited < 0
      || (inited = FxStubInitTypes(), inited < 0)
      || (inited = DriverEntry(DriverObject, RegistryPath), inited < 0) )
    {
      FxStubDriverUnloadCommon();
      return inited;
    }
    else
    {
      if ( WdfDriverGlobals->DisplaceDriverUnload )
      {
        DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))qword_1C004F5F8;
        if ( DriverObject->DriverUnload )
          DriverUnload = DriverObject->DriverUnload;
        qword_1C004F5F8 = (__int64)DriverUnload;
        DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
      }
      else if ( (WdfDriverGlobals->DriverFlags & 2) != 0 )
      {
        WdfDriverMiniportUnloadOverride = (__int64)FxStubDriverMiniportUnload;
      }
      return 0;
    }
  }
  return result;
}
