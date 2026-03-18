/*
 * XREFs of OSCreateHandle @ 0x1C0082140
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0039860 (ACPIRootPowerCallBack.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0085C6C (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 *     ACPIRootWorker @ 0x1C00881B0 (ACPIRootWorker.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C00882F4 (ACPIWriteOscSupportToRegistry.c)
 *     ACPIRegDumpAcpiTable @ 0x1C009AE2C (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  int v5; // edx
  NTSTATUS v6; // ebx
  int v7; // r9d
  int v8; // r8d
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  v6 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v6 < 0 )
  {
    v7 = 10;
    v8 = 22;
LABEL_5:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      v8,
      v7,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v6);
    return (unsigned int)v6;
  }
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a3 = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  v6 = ZwCreateKey(a3, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 < 0 )
  {
    v8 = 11;
    v7 = 11;
    goto LABEL_5;
  }
  return (unsigned int)v6;
}
