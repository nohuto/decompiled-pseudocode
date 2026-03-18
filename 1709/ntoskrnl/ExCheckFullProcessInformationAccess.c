/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x14044C8B0
 * Callers:
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x1405DD0F4 (NtSetDefaultLocale.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400FA8F0 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14053ADB0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  char v2; // [rsp+30h] [rbp+8h]
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 == 1
    && (RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context) >= 0
     && (int)RtlCheckTokenMembership(0LL, Context) >= 0
     && v2
     || (int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid) >= 0 && v2) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
