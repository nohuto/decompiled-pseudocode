/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140274854
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x1402734AC (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1403D1460 )
  {
    qword_1403D1460(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_1403CDB00);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
