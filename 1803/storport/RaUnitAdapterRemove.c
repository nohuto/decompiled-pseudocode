/*
 * XREFs of RaUnitAdapterRemove @ 0x1C003A220
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaidDeleteUnit @ 0x1C0012370 (RaidDeleteUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C001551C (RaUnitWaitForRemoveLock.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAdapterRemove(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 40) != 5 )
  {
    *(_DWORD *)(a1 + 40) = 6;
    RaUnitWaitForRemoveLock(a1);
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
    RaidDeleteUnit(a1);
  }
  return 0LL;
}
