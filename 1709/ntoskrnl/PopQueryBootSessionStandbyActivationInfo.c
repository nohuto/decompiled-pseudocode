/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x14023D3E4
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x14023BEBC (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( xmmword_14038D510 )
  {
    xmmword_14038D510(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140389CC0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
