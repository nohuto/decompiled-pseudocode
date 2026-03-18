/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x1405AA880
 * Callers:
 *     WdipSemLoadNextContextProvider @ 0x1405A9B4C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1405A9DC4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AA3A8 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadConfigInfo @ 0x1405AAF2C (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadGroupPolicy @ 0x1405AB02C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14073F4D4 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall WdipSemQueryValueFromRegistry(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh]
  unsigned int Src; // [rsp+50h] [rbp-B8h]
  int Src_4; // [rsp+54h] [rbp-B4h] BYREF

  ResultLength = 0;
  if ( KeyHandle && a2 && a5 && a6 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x90u,
           &ResultLength);
    if ( v9 >= 0 )
    {
      v10 = Src;
      if ( Src <= a4 && v15 == a3 )
      {
        memset(a5, 0, a4);
        memmove(a5, &Src_4, v10);
        *a6 = v10;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
