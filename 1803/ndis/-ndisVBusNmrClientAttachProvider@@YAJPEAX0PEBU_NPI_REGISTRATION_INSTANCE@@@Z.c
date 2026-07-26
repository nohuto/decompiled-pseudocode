/*
 * XREFs of ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C00C6100
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00BFD18 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

__int64 __fastcall ndisVBusNmrClientAttachProvider(
        _LIST_ENTRY *NmrBindingHandle,
        void *a2,
        const struct _NPI_REGISTRATION_INSTANCE *a3)
{
  PNPIID NpiId; // rcx
  __int64 v5; // rax
  PNPI_MODULEID ModuleId; // rcx
  __int64 v8; // rax
  NTSTATUS v9; // ebx

  if ( *(_OWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead != 0LL || a3->Version != 1 || a3->Size != 40 )
    return 3221226169LL;
  NpiId = a3->NpiId;
  v5 = *(_QWORD *)&NpiId->Data1 - NPI_NDIS_VBUS_INTERFACE_ID;
  if ( *(_QWORD *)&NpiId->Data1 == NPI_NDIS_VBUS_INTERFACE_ID )
    v5 = *(_QWORD *)NpiId->Data4 - 0x99E71279000ADABLL;
  if ( v5 )
    return 3221226169LL;
  ModuleId = a3->ModuleId;
  v8 = *(_QWORD *)&ModuleId->Length - NPI_MS_NDIS_VBUS_MODULEID;
  if ( *(_QWORD *)&ModuleId->Length == NPI_MS_NDIS_VBUS_MODULEID )
  {
    v8 = *(_QWORD *)&ModuleId->Guid.Data1 - 0x11D49B1AEB004A25LL;
    if ( *(_QWORD *)&ModuleId->Guid.Data1 == 0x11D49B1AEB004A25LL )
      v8 = *((_QWORD *)&ModuleId->IfLuid + 1) + 0x43A688FBAFFFDC6FLL;
  }
  if ( v8 || a3->Number || a3->NpiSpecificCharacteristics )
    return 3221226169LL;
  v9 = NmrClientAttachProvider(
         NmrBindingHandle,
         0LL,
         0LL,
         (PVOID *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         (const void **)&WPP_MAIN_CB.SectorSize);
  if ( v9 >= 0 )
  {
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = NmrBindingHandle;
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved);
    LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) = 1;
    ndisBindEnumerateProtocolDrivers(
      (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_,
      0LL);
  }
  return (unsigned int)v9;
}
