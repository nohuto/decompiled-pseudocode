/*
 * XREFs of sub_18004CE2C @ 0x18004CE2C
 * Callers:
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18004CBB4 @ 0x18004CBB4 (sub_18004CBB4.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

void __fastcall sub_18004CE2C(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned __int16 a4)
{
  __int64 v7; // rcx
  USHORT *v8; // rcx
  const WCHAR *v9; // rdx
  BOOLEAN v10; // bl
  BOOLEAN v11; // al
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = RtlGetCurrentServiceSessionId()
       ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
       : (USHORT *)2147353477;
    if ( (*(_BYTE *)v8 & 0x20) != 0 )
    {
      v9 = a2;
      if ( !a2 )
        v9 = &word_18011B604;
      v10 = RtlCreateUnicodeString(&DestinationString, v9);
      v11 = RtlCreateUnicodeString(&UnicodeString, a3);
      if ( v10 )
      {
        if ( v11 )
        {
          sub_1800D62F0(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&DestinationString);
          RtlFreeUnicodeString(&UnicodeString);
        }
        RtlFreeUnicodeString(&DestinationString);
      }
    }
  }
}
