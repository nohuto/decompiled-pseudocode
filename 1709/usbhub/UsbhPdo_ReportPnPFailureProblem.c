/*
 * XREFs of UsbhPdo_ReportPnPFailureProblem @ 0x1C00561A0
 * Callers:
 *     UsbhPdoPnp_QueryPnpDeviceState @ 0x1C0027DD0 (UsbhPdoPnp_QueryPnpDeviceState.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C001FFA8 (UsbhSetPdoRegistryParameter.c)
 *     RtlStringCbPrintfW @ 0x1C0022640 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     RtlUnalignedStringCbLengthW @ 0x1C0054AD0 (RtlUnalignedStringCbLengthW.c)
 */

void __fastcall UsbhPdo_ReportPnPFailureProblem(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // r14
  size_t v3; // rdi
  PVOID PoolWithTag; // rax
  void *Data; // rbx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-39h]
  size_t pcbLength; // [rsp+40h] [rbp-19h] BYREF
  PMESSAGE_RESOURCE_ENTRY v8; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v9[3]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v10; // [rsp+80h] [rbp+27h]
  wchar_t v11; // [rsp+88h] [rbp+2Fh]

  v11 = aSystem32Driver[28];
  v9[0] = *(_OWORD *)L"@System32\\drivers\\usbhub.sys";
  v9[1] = *(_OWORD *)L"2\\drivers\\usbhub.sys";
  v9[2] = *(_OWORD *)L"s\\usbhub.sys";
  v10 = *(_QWORD *)L".sys";
  v2 = PdoExt((__int64)DeviceObject);
  if ( v2[703] )
  {
    LODWORD(pcbLength) = PdoExt((__int64)DeviceObject)[703];
    UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationFailureCode", 4u, &pcbLength, 4u);
    if ( RtlFindMessage(WPP_MAIN_CB.Queue.ListEntry.Blink[1].Blink, 0xBu, 0, v2[703], &v8) >= 0
      && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v8->Text, v8->Length - 4LL, &pcbLength) >= 0 )
    {
      v3 = pcbLength + 86;
      pcbLength += 86LL;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pcbLength, 0x42554855u);
      Data = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v3);
        LODWORD(MessageResourceEntry) = v2[703];
        if ( RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Data, v3, L"%s,#%d;%hs", v9, MessageResourceEntry, v8->Text) >= 0
          && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)Data, v3, &pcbLength) >= 0 )
        {
          IoSetDevicePropertyData(DeviceObject, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0x19u, pcbLength + 2, Data);
        }
        ExFreePoolWithTag(Data, 0);
      }
    }
  }
}
