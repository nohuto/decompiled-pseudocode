/*
 * XREFs of ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x1C0052680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C004DD90 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 */

void __fastcall CFlipWaitedConsumerReturn::Complete(CFlipWaitedConsumerReturn *this)
{
  FlipManagerObject::ConsumerAdjustUsageReference(*((struct _LIST_ENTRY **)this + 1), *((_QWORD *)this + 2), 0);
  (*(void (__fastcall **)(CFlipWaitedConsumerReturn *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
