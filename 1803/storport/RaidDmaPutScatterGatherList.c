/*
 * XREFs of RaidDmaPutScatterGatherList @ 0x1C0007D00
 * Callers:
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidDmaPutScatterGatherList(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  void (*v3)(void); // rax

  if ( a1 )
  {
    v1 = *a1;
    if ( v1 )
    {
      v2 = *(_QWORD *)(v1 + 8);
      if ( v2 )
      {
        v3 = *(void (**)(void))(v2 + 96);
        if ( v3 )
          v3();
      }
    }
  }
}
