/*
 * XREFs of PiDrvDbResolveNodeFilePaths @ 0x14073DAB4
 * Callers:
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 */

__int64 __fastcall PiDrvDbResolveNodeFilePaths(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (PiDrvDbOverlayFlags & 2) != 0 )
  {
    v5 = *(unsigned __int16 *)(a1 + 18) + 28;
    if ( v5 <= 0xFFFE )
    {
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v5;
      DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(v5);
      if ( DestinationString.Buffer )
      {
        v4 = RtlUnicodeStringPrintf(&DestinationString, L"%ws\\%wZ", L"\\DriverStores", a1 + 16);
        if ( v4 >= 0 )
          v4 = PiDrvDbResolveFilePathKeyValues(a2, &DestinationString);
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
      v4 = -2147483643;
    }
  }
  else
  {
    v4 = 0;
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v4;
}
