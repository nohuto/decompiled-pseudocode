/*
 * XREFs of IopDeviceInterfaceFilterCallback @ 0x140573630
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405017B8 (PiPnpRtlApplyMandatoryFilters.c)
 */

char __fastcall IopDeviceInterfaceFilterCallback(__int64 a1, const WCHAR *a2, int a3, __int64 a4)
{
  char v4; // bl
  int v8; // eax
  char v9; // cl
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  LOBYTE(v13) = 0;
  if ( a3 == 3 && a4 )
  {
    if ( *(_QWORD *)a4 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)a4) < 0 || RtlInitUnicodeStringEx(&String2, a2) < 0 )
        return v13;
      if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) == 1 )
        return v4;
    }
    v8 = PiPnpRtlApplyMandatoryFilters(a1, (__int64)a2, 3, 0LL, (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 8), &v13);
    v9 = v13;
    if ( v8 < 0 )
      return 0;
    return v9;
  }
  return v4;
}
