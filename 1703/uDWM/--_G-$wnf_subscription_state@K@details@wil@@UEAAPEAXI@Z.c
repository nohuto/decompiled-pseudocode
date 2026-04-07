/*
 * XREFs of ??_G?$wnf_subscription_state@K@details@wil@@UEAAPEAXI@Z @ 0x180073290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$wnf_subscription_state@K@details@wil@@UEAA@XZ @ 0x180072D74 (--1-$wnf_subscription_state@K@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<unsigned long>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wil::details::wnf_subscription_state<unsigned long>::~wnf_subscription_state<unsigned long>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
