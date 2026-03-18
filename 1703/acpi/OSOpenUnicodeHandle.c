/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C0083970
 * Callers:
 *     OSOpenHandle @ 0x1C00838F8 (OSOpenHandle.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00917E4 (ACPIThermalGetOverrideHandle.c)
 *     OSOpenLargestSubkey @ 0x1C00A1B18 (OSOpenLargestSubkey.c)
 *     IsHypervisorCpcCapable @ 0x1C00A4154 (IsHypervisorCpcCapable.c)
 *     IrqPolicyConfigure @ 0x1C00AB064 (IrqPolicyConfigure.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AB0E4 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00AB6C0 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C002CB80 (memset.c)
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
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v6);
  }
  return v8;
}
