/*
 * XREFs of WheapLoadPolicy @ 0x1408544DC
 * Callers:
 *     WheaInitialize @ 0x140840C7C (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1401801E0 (ZwQueryLicenseValue.c)
 */

__int64 WheapLoadPolicy()
{
  bool v0; // zf
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG Type; // [rsp+50h] [rbp+8h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+10h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF

  if ( WheaRegPolicyDisableOffline != -1 )
    WheapPolicyDisableOffline = WheaRegPolicyDisableOffline != 0;
  if ( WheaRegPolicyMemPersistOffline != -1 )
  {
    v0 = WheaRegPolicyMemPersistOffline == 0;
    goto LABEL_8;
  }
  RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
    && Type == 4
    && ResultDataSize == 4 )
  {
    v0 = Data == 0;
LABEL_8:
    WheapPolicyMemPersistOffline = !v0;
  }
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheapPolicyMemPfaDisable = WheaRegPolicyMemPfaDisable != 0;
  if ( (unsigned int)(WheaRegPolicyMemPfaPageCount - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaPageCount = WheaRegPolicyMemPfaPageCount;
  }
  else if ( (unsigned int)(WheapMaxCorrectedMCEOutstanding - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaPageCount = WheapMaxCorrectedMCEOutstanding;
  }
  if ( (unsigned int)(WheaRegPolicyMemPfaThreshold - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaThreshold = WheaRegPolicyMemPfaThreshold;
  }
  else if ( (unsigned int)(WheapSingleBitEccErrorThreshold - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaThreshold = WheapSingleBitEccErrorThreshold;
  }
  if ( (unsigned int)WheaRegPolicyMemPfaTimeout <= 0x93A80 )
    WheapPolicyMemPfaTimeout = 10000000LL * (unsigned int)WheaRegPolicyMemPfaTimeout;
  if ( !WheapPolicyMemPfaPageCount || !WheapPolicyMemPfaThreshold )
    WheapPolicyMemPfaDisable = 1;
  result = (unsigned int)WheaRegPolicyIgnoreDummyWrite;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheapPolicyIgnoreDummyWrite = WheaRegPolicyIgnoreDummyWrite != 0;
  if ( WheaRegPolicyDisableOffline != -1 )
    WheaRegistryKeysPresent |= 1u;
  if ( WheaRegPolicyMemPersistOffline != -1 )
    WheaRegistryKeysPresent |= 2u;
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheaRegistryKeysPresent |= 4u;
  if ( WheaRegPolicyMemPfaPageCount != -1 )
    WheaRegistryKeysPresent |= 8u;
  if ( WheaRegPolicyMemPfaThreshold != -1 )
    WheaRegistryKeysPresent |= 0x10u;
  if ( WheaRegPolicyMemPfaTimeout != -1 )
    WheaRegistryKeysPresent |= 0x20u;
  if ( WheapSingleBitEccErrorThreshold != -1 )
    WheaRegistryKeysPresent |= 0x40u;
  if ( WheapMaxCorrectedMCEOutstanding != -1 )
    WheaRegistryKeysPresent |= 0x80u;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheaRegistryKeysPresent |= 0x100u;
  return result;
}
