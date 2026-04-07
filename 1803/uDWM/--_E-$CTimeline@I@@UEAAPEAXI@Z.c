/*
 * XREFs of ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x180081730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CTimelineBase@@UEAA@XZ @ 0x18006C0F8 (--1CTimelineBase@@UEAA@XZ.c)
 */

CTimelineBase *__fastcall CTimeline<unsigned int>::`vector deleting destructor'(CTimelineBase *a1, char a2)
{
  CTimelineBase::~CTimelineBase(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTimelineBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
