/*
 * XREFs of ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x18001B770
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180022580 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CTimeline<float>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *a1 = &CTimelineBase::`vftable';
  v4 = a1[8];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    a1[8] = 0LL;
  }
  *a1 = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, a1);
    else
      v5(WPF::g_pProcessHeap, a1);
  }
  return a1;
}
