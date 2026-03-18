/*
 * XREFs of PopShutdownHandler @ 0x14041A5E0
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x140158F50 (InbvIsBootDriverInstalled.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     InbvAcquireDisplayOwnership @ 0x1401EE110 (InbvAcquireDisplayOwnership.c)
 *     InbvBitBlt @ 0x1401EE168 (InbvBitBlt.c)
 *     InbvCheckDisplayOwnership @ 0x1401EE1A0 (InbvCheckDisplayOwnership.c)
 *     InbvEnableDisplayString @ 0x1401EE200 (InbvEnableDisplayString.c)
 *     InbvGetResourceAddress @ 0x1401EE23C (InbvGetResourceAddress.c)
 *     InbvResetDisplay @ 0x1401EE2E0 (InbvResetDisplay.c)
 *     InbvSetScrollRegion @ 0x1401EE310 (InbvSetScrollRegion.c)
 *     InbvSolidColorFill @ 0x1401EE370 (InbvSolidColorFill.c)
 */

void __fastcall __noreturn PopShutdownHandler(__int64 a1)
{
  __int64 ResourceAddress; // rdi
  __int64 v2; // rax

  _disable();
  if ( !KeGetCurrentPrcb()->Number && InbvIsBootDriverInstalled() )
  {
    if ( !InbvCheckDisplayOwnership() )
      InbvAcquireDisplayOwnership();
    InbvResetDisplay();
    InbvSolidColorFill(0LL, 0LL, 0x27Fu);
    InbvEnableDisplayString(1);
    InbvSetScrollRegion();
    ResourceAddress = InbvGetResourceAddress();
    v2 = InbvGetResourceAddress();
    if ( ResourceAddress && v2 )
    {
      InbvBitBlt();
      InbvBitBlt();
    }
  }
  while ( 1 )
    ((void (__fastcall *)(__int64))off_14033B2E8)(a1);
}
