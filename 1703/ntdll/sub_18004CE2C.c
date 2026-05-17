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

void __fastcall sub_18004CE2C(__int64 a1, _WORD *a2, _WORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rcx
  char *v8; // rcx
  _WORD *v9; // rdx
  char v10; // bl
  char v11; // al
  UNICODE_STRING v12; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = (unsigned int)RtlGetCurrentServiceSessionId()
       ? (char *)NtCurrentPeb()->HotpatchInformation + 555
       : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
    {
      v9 = a2;
      if ( !a2 )
        v9 = &unk_18011B604;
      v10 = RtlCreateUnicodeString((__int64)&v12, v9);
      v11 = RtlCreateUnicodeString((__int64)&UnicodeString, a3);
      if ( v10 )
      {
        if ( v11 )
        {
          sub_1800D62F0(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&v12);
          RtlFreeUnicodeString(&UnicodeString);
        }
        RtlFreeUnicodeString(&v12);
      }
    }
  }
}
