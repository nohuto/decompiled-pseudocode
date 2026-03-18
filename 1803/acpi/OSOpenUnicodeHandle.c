/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C00718BC
 * Callers:
 *     OSOpenHandle @ 0x1C0071844 (OSOpenHandle.c)
 *     OSOpenLargestSubkey @ 0x1C0082484 (OSOpenLargestSubkey.c)
 *     IsHypervisorCpcCapable @ 0x1C0088390 (IsHypervisorCpcCapable.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00890F8 (ACPIThermalGetOverrideHandle.c)
 *     OSReadAcpiConfigurationData @ 0x1C009B124 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C009CB20 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C009CBF4 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  NTSTATUS v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      11,
      13,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v6);
  }
  return v8;
}
