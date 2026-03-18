/*
 * XREFs of rimReadHidKeyboardFlags @ 0x1C011379C
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0112B38 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C008CEA4 (rimRegQueryRegistryDWord.c)
 */

__int64 __fastcall rimReadHidKeyboardFlags(_DWORD *a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = 3221225473LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\KEYBOARD");
    *a1 = rimRegQueryRegistryDWord(&DestinationString, (const WCHAR *)L"Flags", 0);
    return 0LL;
  }
  return result;
}
