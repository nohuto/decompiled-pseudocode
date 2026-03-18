/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x14022A4DC
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x140229004 (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( xmmword_14036E720 )
  {
    xmmword_14036E720(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_14036E240);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
