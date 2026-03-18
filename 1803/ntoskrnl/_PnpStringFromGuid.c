/*
 * XREFs of _PnpStringFromGuid @ 0x14050B138
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14050545C (PiDmObjectGetCachedCmProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IoGetDeviceInterfaceAlias @ 0x1405C1E50 (IoGetDeviceInterfaceAlias.c)
 *     PiSwPdoPnPDispatch @ 0x1405C53E0 (PiSwPdoPnPDispatch.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x1405CCAEC (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1405D25A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDmCacheDataEncode @ 0x1405D364C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405E6390 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E7654 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDcHandleDeviceEvent @ 0x1405EA00C (PiDcHandleDeviceEvent.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiDcHandleInterfaceEvent @ 0x14060442C (PiDcHandleInterfaceEvent.c)
 *     PiDmListInitEnumCallback @ 0x140630FD0 (PiDmListInitEnumCallback.c)
 *     _CmBuildDevicePanelId @ 0x140653F64 (_CmBuildDevicePanelId.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140728A34 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PipCreateComputerId @ 0x1408B498C (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall PnpStringFromGuid(int *a1, wchar_t *a2)
{
  int v3; // [rsp+30h] [rbp-78h]
  int v4; // [rsp+38h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-68h]
  int v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  v3 = *a1;
  return RtlStringCchPrintfExW(
           a2,
           0x27uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
