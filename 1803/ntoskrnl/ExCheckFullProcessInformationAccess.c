/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x140540610
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x14060E4A0 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1407B8AD0 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14009F580 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x1404F4560 (RtlRunOnceExecuteOnce.c)
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
