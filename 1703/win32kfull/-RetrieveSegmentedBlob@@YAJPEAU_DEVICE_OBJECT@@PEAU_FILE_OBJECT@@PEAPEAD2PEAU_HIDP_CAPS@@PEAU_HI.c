/*
 * XREFs of ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1C01A57CC
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01A55AC (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1C01A4518 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 */

int __fastcall RetrieveSegmentedBlob(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        char **a3,
        char **a4,
        struct _HIDP_CAPS *a5,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        struct _HIDP_VALUE_CAPS *a7)
{
  int result; // eax
  char *v12; // r15
  CHAR *v13; // rdi
  ULONG UsageValue; // ebx
  PIRP v15; // rax
  PIRP v16; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  result = BuildSignatureFeatureReport(a5, 0LL, 0LL, 0LL, a4, a3);
  if ( result >= 0 )
  {
    v12 = *a4;
    v13 = *a3;
    UsageValue = 0;
    **a4 = a7->ReportID;
    while ( 1 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      HidP_SetUsageValue(
        HidP_Feature,
        a7->UsagePage,
        0,
        0xC6u,
        UsageValue,
        PreparsedData,
        *a4,
        a5->FeatureReportByteLength);
      v15 = IoBuildDeviceIoControlRequest(
              0xB0191u,
              DeviceObject,
              *a4,
              a5->FeatureReportByteLength,
              0LL,
              0,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v15 )
        break;
      v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
      result = IofCallDriver(DeviceObject, v15);
      if ( result == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        result = IoStatusBlock.Status;
      }
      if ( result >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v16 = IoBuildDeviceIoControlRequest(
                0xB0192u,
                DeviceObject,
                0LL,
                0,
                v12,
                a5->FeatureReportByteLength,
                0,
                &Event,
                &IoStatusBlock);
        if ( !v16 )
          return -1073741668;
        v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
        Status = IofCallDriver(DeviceObject, v16);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status )
          return -1073741668;
        result = HidP_GetUsageValueArray(
                   HidP_Feature,
                   a7->UsagePage,
                   0,
                   0xC7u,
                   v13,
                   0x20u,
                   PreparsedData,
                   v12,
                   a5->FeatureReportByteLength);
        if ( result < 0 )
          return result;
        v13 += 32;
      }
      if ( ++UsageValue >= 8 )
        return result;
    }
    return -1073741668;
  }
  return result;
}
