/*
 * XREFs of ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x180073D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CTimelineBase@@UEAA@XZ @ 0x18006C0F8 (--1CTimelineBase@@UEAA@XZ.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::`vector deleting destructor'(
        CLivePreviewTimeline *this,
        char a2)
{
  *(_QWORD *)this = &CLivePreviewTimeline::`vftable';
  CTimelineBase::~CTimelineBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLivePreviewTimeline *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
