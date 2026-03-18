/*
 * XREFs of PopShutdownHandler @ 0x14043A310
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x140156FF0 (InbvIsBootDriverInstalled.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     InbvAcquireDisplayOwnership @ 0x1401F37C0 (InbvAcquireDisplayOwnership.c)
 *     InbvBitBlt @ 0x1401F3818 (InbvBitBlt.c)
 *     InbvCheckDisplayOwnership @ 0x1401F3850 (InbvCheckDisplayOwnership.c)
 *     InbvEnableDisplayString @ 0x1401F38B0 (InbvEnableDisplayString.c)
 *     InbvGetResourceAddress @ 0x1401F38F8 (InbvGetResourceAddress.c)
 *     InbvResetDisplay @ 0x1401F39A0 (InbvResetDisplay.c)
 *     InbvSetScrollRegion @ 0x1401F39D0 (InbvSetScrollRegion.c)
 *     InbvSolidColorFill @ 0x1401F3A30 (InbvSolidColorFill.c)
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
    ((void (__fastcall *)(__int64))off_140353318)(a1);
}
