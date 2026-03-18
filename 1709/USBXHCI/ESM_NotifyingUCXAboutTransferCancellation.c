/*
 * XREFs of ESM_NotifyingUCXAboutTransferCancellation @ 0x1C003EDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_NotifyingUCXAboutTransferCancellation(__int64 a1)
{
  ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004F8A0)(
    *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 1000LL;
}
