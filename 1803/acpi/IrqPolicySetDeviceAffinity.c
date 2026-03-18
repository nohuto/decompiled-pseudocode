/*
 * XREFs of IrqPolicySetDeviceAffinity @ 0x1C008E02C
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C00918EC (IrqArbpSetDeviceProperties.c)
 * Callees:
 *     IrqPolicyGetSubKey @ 0x1C008DDC4 (IrqPolicyGetSubKey.c)
 */

NTSTATUS __fastcall IrqPolicySetDeviceAffinity(struct _DEVICE_OBJECT *a1, unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  result = IrqPolicyGetSubKey(a1, L"Affinity Policy - Temporal", 1u, &KeyHandle);
  if ( result >= 0 )
  {
    Data = a2[4];
    RtlInitUnicodeString(&DestinationString, L"TargetGroup");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    RtlInitUnicodeString(&DestinationString, L"TargetSet");
    v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, a2, 8u);
    ZwClose(KeyHandle);
    return v4;
  }
  return result;
}
