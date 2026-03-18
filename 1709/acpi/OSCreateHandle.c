/*
 * XREFs of OSCreateHandle @ 0x1C008F8E0
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002B9C0 (ACPIRootPowerCallBack.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C008F82C (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A5C28 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C00A6B30 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AE1C8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  int v5; // edx
  NTSTATUS v6; // ebx
  int v8; // r9d
  int v9; // r8d
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  v6 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v6 < 0 )
  {
    v8 = 10;
    v9 = 22;
LABEL_6:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      v9,
      v8,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
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
    v9 = 11;
    v8 = 11;
    goto LABEL_6;
  }
  return (unsigned int)v6;
}
