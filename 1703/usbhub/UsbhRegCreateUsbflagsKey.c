/*
 * XREFs of UsbhRegCreateUsbflagsKey @ 0x1C001F784
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C001EF80 (UsbhRegDriverEntry.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C001FA08 (UsbhGetMSOS_Descriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS UsbhRegCreateUsbflagsKey()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)L"usbflags");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)L"usbflags");
  return result;
}
