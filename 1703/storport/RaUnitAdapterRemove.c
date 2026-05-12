/*
 * XREFs of RaUnitAdapterRemove @ 0x1C0039C30
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitWaitForRemoveLock @ 0x1C0013028 (RaUnitWaitForRemoveLock.c)
 *     RaidDeleteUnit @ 0x1C0013250 (RaidDeleteUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
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
