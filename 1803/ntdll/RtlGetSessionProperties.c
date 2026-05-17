/*
 * XREFs of RtlGetSessionProperties @ 0x1800DFD10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x18009D2F0 (ZwQueryInformationJobObject.c)
 */

__int64 __fastcall RtlGetSessionProperties(int a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  char *HotpatchInformation; // rcx
  char v7; // [rsp+30h] [rbp-268h] BYREF

  if ( a1 == -1 )
    return (unsigned int)-1073741811;
  v4 = 0;
  if ( !a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      HotpatchInformation = (char *)NtCurrentPeb()->HotpatchInformation;
    }
    else
    {
      ZwQueryInformationJobObject();
      HotpatchInformation = &v7;
    }
    *a2 = *((_DWORD *)HotpatchInformation + 6) == a1;
  }
  return v4;
}
