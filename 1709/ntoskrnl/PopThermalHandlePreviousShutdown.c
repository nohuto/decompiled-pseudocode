/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x1405B898C
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400BA358 (_TlgCreateWsz.c)
 *     PopOpenPowerKey @ 0x14013A270 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void PopThermalHandlePreviousShutdown()
{
  HANDLE v0; // rdi
  WCHAR *v1; // rbx
  const WCHAR *v2; // rsi
  WCHAR *PoolWithTag; // rax
  ULONG MatchingChangeStamp; // [rsp+48h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-9h] BYREF
  __int128 KeyValueInformation; // [rsp+78h] [rbp+7h] BYREF
  int v9; // [rsp+88h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+1Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+3Fh] BYREF

  if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ThermalShutdownOccurred");
    RtlInitUnicodeString(&ValueName, L"ThermalShutdownSource");
    v0 = KeyHandle;
    KeyValueInformation = 0uLL;
    v9 = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &MatchingChangeStamp) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v1 = 0LL;
      v2 = L"Unknown";
      if ( ZwQueryValueKey(v0, &ValueName, KeyValuePartialInformation, 0LL, 0, &MatchingChangeStamp) == -1073741789 )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, MatchingChangeStamp + 2LL, 0x6D726854u);
        v1 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, MatchingChangeStamp + 2LL);
          if ( ZwQueryValueKey(
                 v0,
                 &ValueName,
                 KeyValuePartialInformation,
                 v1,
                 MatchingChangeStamp,
                 &MatchingChangeStamp) >= 0
            && *((_DWORD *)v1 + 1) == 1 )
          {
            v2 = v1 + 6;
          }
        }
      }
      if ( ZwDeleteValueKey(v0, &DestinationString) >= 0 )
      {
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
        if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
        {
          TlgCreateWsz(&pDesc, v2);
          TlgWrite(&pCallbackContext, &unk_1402D176D, 0LL, 0LL, 3u, &pData);
        }
        ZwDeleteValueKey(v0, &ValueName);
      }
      if ( v1 )
        ExFreePoolWithTag(v1, 0x6D726854u);
    }
    if ( v0 )
      ZwClose(v0);
  }
}
