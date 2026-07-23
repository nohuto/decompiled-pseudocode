/*
 * XREFs of LdrpLogDllStateEx2 @ 0x180037DF8
 * Callers:
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     LdrpGetDllPath @ 0x180037BA4 (LdrpGetDllPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned __int16 a4)
{
  __int64 v7; // rcx
  char *v8; // rcx
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
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
    {
      v9 = a2;
      if ( !a2 )
        v9 = &word_18011E4A0;
      v10 = RtlCreateUnicodeString(&DestinationString, v9);
      v11 = RtlCreateUnicodeString(&UnicodeString, a3);
      if ( v10 )
      {
        if ( v11 )
        {
          LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&DestinationString);
          RtlFreeAnsiString(&UnicodeString);
        }
        RtlFreeAnsiString(&DestinationString);
      }
    }
  }
}
