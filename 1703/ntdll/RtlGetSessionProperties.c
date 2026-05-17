/*
 * XREFs of RtlGetSessionProperties @ 0x1800E5260
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationJobObject @ 0x1800A7A90 (ZwQueryInformationJobObject.c)
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
