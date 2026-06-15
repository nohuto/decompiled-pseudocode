/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@UEAAXXZ @ 0x18001E940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<ModernStandbyStateChangedContext>::Invoke(__int64 a1)
{
  (*(void (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  operator delete(*(void **)(a1 + 16), (const struct std::nothrow_t *)4);
}
