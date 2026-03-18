/*
 * XREFs of PpmEnableWmiInterface @ 0x14059FC64
 * Callers:
 *     PopNewProcessorCallback @ 0x1406C51D0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x140031C80 (KeQueryGroupAffinity.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  ULONG i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = KeGetPrcb(i);
      v2 = GroupAffinity;
      if ( GroupAffinity )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(GroupAffinity + 24168), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v2 + 24160), 0x80000001);
      }
    }
  }
  return GroupAffinity;
}
