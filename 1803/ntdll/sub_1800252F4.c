/*
 * XREFs of sub_1800252F4 @ 0x1800252F4
 * Callers:
 *     sub_1800250A4 @ 0x1800250A4 (sub_1800250A4.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

void __fastcall sub_1800252F4(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned __int16 a4)
{
  __int64 v7; // rcx
  USHORT *v8; // rcx
  BOOLEAN v9; // bl
  BOOLEAN v10; // al
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

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
      if ( !a2 )
        a2 = &word_180114044;
      v9 = RtlCreateUnicodeString(&DestinationString, a2);
      v10 = RtlCreateUnicodeString(&UnicodeString, a3);
      if ( v9 )
      {
        if ( v10 )
        {
          sub_1800CBAB0(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&DestinationString);
          RtlFreeUnicodeString(&UnicodeString);
        }
        RtlFreeUnicodeString(&DestinationString);
      }
    }
  }
}
