/*
 * XREFs of rimReadHidKeyboardFlags @ 0x1C0114CC8
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0114064 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C0090F10 (rimRegQueryRegistryDWord.c)
 */

__int64 __fastcall rimReadHidKeyboardFlags(_DWORD *a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = 3221225473LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\KEYBOARD");
    *a1 = rimRegQueryRegistryDWord(&DestinationString, L"Flags", 0);
    return 0LL;
  }
  return result;
}
