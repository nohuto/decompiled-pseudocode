/*
 * XREFs of _CmIsDevicePresent @ 0x140585F3C
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x140585E70 (PiPnpRtlEnumeratorFilterCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1405F0D00 (PiPnpRtlServiceFilterCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140638420 (_CmEnumSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140585FB4 (_NtPlugPlayGetDeviceStatus.c)
 */

NTSTATUS __fastcall CmIsDevicePresent(int a1, const WCHAR *a2, _BYTE *a3)
{
  NTSTATUS result; // eax
  char v6; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0
    || (result = NtPlugPlayGetDeviceStatus(
                   a1,
                   (unsigned int)&DestinationString,
                   (unsigned int)&v6,
                   (unsigned int)&v9,
                   (__int64)&v8),
        result < 0) )
  {
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
