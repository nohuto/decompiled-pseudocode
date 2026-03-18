/*
 * XREFs of PopShutdownHandler @ 0x140487310
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x140183210 (InbvIsBootDriverInstalled.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     InbvAcquireDisplayOwnership @ 0x140230CF0 (InbvAcquireDisplayOwnership.c)
 *     InbvBitBlt @ 0x140230D48 (InbvBitBlt.c)
 *     InbvCheckDisplayOwnership @ 0x140230D80 (InbvCheckDisplayOwnership.c)
 *     InbvEnableDisplayString @ 0x140230DE0 (InbvEnableDisplayString.c)
 *     InbvGetResourceAddress @ 0x140230E28 (InbvGetResourceAddress.c)
 *     InbvResetDisplay @ 0x140230ED0 (InbvResetDisplay.c)
 *     InbvSetScrollRegion @ 0x140230F00 (InbvSetScrollRegion.c)
 *     InbvSolidColorFill @ 0x140230F60 (InbvSolidColorFill.c)
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
    ((void (__fastcall *)(__int64))off_1403986B8)(a1);
}
