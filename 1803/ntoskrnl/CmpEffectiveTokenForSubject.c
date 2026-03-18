/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x140105530
 * Callers:
 *     CmpIsVirtEnabledForSubject @ 0x140565BA4 (CmpIsVirtEnabledForSubject.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpGetVirtualizationID @ 0x1405C08C4 (CmpGetVirtualizationID.c)
 *     CmpBuildAdminInformation @ 0x1406F46D0 (CmpBuildAdminInformation.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406F6470 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpEffectiveTokenForSubject(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8

  if ( *a1 )
    v2 = *a1;
  else
    v2 = a1[2];
  if ( a2 )
    *a2 = (*a1 != 0) + 1;
  return v2;
}
