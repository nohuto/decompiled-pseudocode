/*
 * XREFs of SepLpacCausedAccessFailure @ 0x1400C9E48
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepLpacCausedAccessFailure(__int64 a1, int a2)
{
  int v4; // ecx

  if ( !*(_BYTE *)(a1 + 24) )
    return 0;
  v4 = a2 & ~(*(_DWORD *)(a1 + 4) | *(_DWORD *)(a1 + 8) | 0x2000000);
  return (v4 & *(_DWORD *)(a1 + 16)) == v4;
}
