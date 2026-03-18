/*
 * XREFs of ESM_NotifyingUCXAboutTransferCancellation @ 0x1C003D3F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_NotifyingUCXAboutTransferCancellation(__int64 a1)
{
  ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004C8A0)(
    *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 1000LL;
}
