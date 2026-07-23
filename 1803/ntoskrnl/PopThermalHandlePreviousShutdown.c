/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x140627B68
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14006F020 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14016EC0C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
          TlgWrite(&pCallbackContext, &unk_14030A89F, 0LL, 0LL, 3u, &pData);
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
