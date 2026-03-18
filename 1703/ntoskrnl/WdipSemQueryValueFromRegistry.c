/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x1405AE440
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405ADC7C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadNextEndEvent @ 0x1405C9FD8 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadGroupPolicy @ 0x1405CA4C0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1405CA514 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextContextProvider @ 0x1405CA6D0 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140705E00 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
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
