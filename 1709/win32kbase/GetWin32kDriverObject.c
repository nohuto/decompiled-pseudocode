/*
 * XREFs of GetWin32kDriverObject @ 0x1C009A9E0
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 GetWin32kDriverObject()
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( gbFirstConnectionDone )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  dword_1C018F5F8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  result = ObReferenceObjectByName(&DestinationString, 64LL, 0LL);
  dword_1C018F5FC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
