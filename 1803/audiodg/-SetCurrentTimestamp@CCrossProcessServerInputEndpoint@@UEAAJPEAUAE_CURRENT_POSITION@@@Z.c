/*
 * XREFs of ?SetCurrentTimestamp@CCrossProcessServerInputEndpoint@@UEAAJPEAUAE_CURRENT_POSITION@@@Z @ 0x1400551B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossProcessServerInputEndpoint::SetCurrentTimestamp(
        CCrossProcessServerInputEndpoint *this,
        struct AE_CURRENT_POSITION *a2)
{
  (*(void (__fastcall **)(char *, struct AE_CURRENT_POSITION *, _QWORD))(*((_QWORD *)this - 48) + 80LL))(
    (char *)this - 384,
    a2,
    *(_QWORD *)(*((_QWORD *)this - 40) + 16LL));
  return 0LL;
}
