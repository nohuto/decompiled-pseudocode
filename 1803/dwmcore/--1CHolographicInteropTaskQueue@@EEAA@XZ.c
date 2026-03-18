/*
 * XREFs of ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1801FE814
 * Callers:
 *     ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x1801FE860 (--_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1801FE894 (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 */

void __fastcall CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(union _SLIST_HEADER *this)
{
  CHolographicInteropTaskQueue *v2; // rcx
  void *v3; // rdx
  wil::details *Alignment; // rcx

  this->Alignment = (ULONGLONG)&CHolographicInteropTaskQueue::`vftable';
  CHolographicInteropTaskQueue::ClearList((CHolographicInteropTaskQueue *)this, this + 1);
  CHolographicInteropTaskQueue::ClearList(v2, this + 2);
  Alignment = (wil::details *)this[3].Alignment;
  if ( Alignment )
    wil::details::CloseHandle(Alignment, v3);
  this->Alignment = (ULONGLONG)&CMILRefCountBase::`vftable';
}
