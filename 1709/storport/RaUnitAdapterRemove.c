/*
 * XREFs of RaUnitAdapterRemove @ 0x1C003B980
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitWaitForRemoveLock @ 0x1C0012990 (RaUnitWaitForRemoveLock.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00166F4 (RaCallMiniportUnitControl.c)
 *     RaidDeleteUnit @ 0x1C001842C (RaidDeleteUnit.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
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
