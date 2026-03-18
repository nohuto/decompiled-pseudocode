/*
 * XREFs of DrvDbSetRegValueMappedProperty @ 0x14044435C
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140443EA8 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140448F74 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x1407875D4 (DrvDbSetDriverFileMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 */

NTSTATUS __fastcall DrvDbSetRegValueMappedProperty(__int64 a1, void *a2, __int64 a3, int a4, __int64 a5, ULONG a6)
{
  ULONG v7; // eax
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( a4 )
  {
    if ( a4 == 5 )
    {
      if ( a6 != 2 )
        return -1073741811;
    }
    else
    {
      if ( a4 != 17 )
      {
        v7 = a6;
        return RegRtlSetValue(a2, v7);
      }
      if ( a6 != 1 )
        return -1073741811;
    }
    v7 = 4;
    return RegRtlSetValue(a2, v7);
  }
  result = RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a3 + 16));
  if ( result >= 0 )
    result = ZwDeleteValueKey(a2, &DestinationString);
  if ( result == -1073741772 )
    return -1073741275;
  return result;
}
