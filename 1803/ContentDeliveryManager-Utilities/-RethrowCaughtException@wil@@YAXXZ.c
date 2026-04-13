/*
 * XREFs of ?RethrowCaughtException@wil@@YAXXZ @ 0x180002658
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x18004A3A0 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::RethrowCaughtException(wil *this)
{
  if ( wil::details::g_pfnRethrow )
    wil::details::g_pfnRethrow();
}
