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

void __fastcall LdrpLogDllStateEx2(__int64 a1, void *a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rcx
  void *v10; // rdx
  char v11; // bl
  char v12; // al
  UNICODE_STRING v13; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v9 = (unsigned int)RtlGetCurrentServiceSessionId(v8, v7)
       ? (char *)NtCurrentPeb()->SharedData + 555
       : (char *)2147353477;
    if ( (*v9 & 0x20) != 0 )
    {
      v10 = a2;
      if ( !a2 )
        v10 = &unk_18011E4A0;
      v11 = RtlCreateUnicodeString(&v13, v10);
      v12 = RtlCreateUnicodeString(&UnicodeString, a3);
      if ( v11 )
      {
        if ( v12 )
        {
          LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&v13);
          RtlFreeAnsiString(&UnicodeString);
        }
        RtlFreeAnsiString(&v13);
      }
    }
  }
}
