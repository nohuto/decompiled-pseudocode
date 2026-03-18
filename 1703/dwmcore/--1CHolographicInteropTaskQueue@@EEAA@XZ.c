/*
 * XREFs of ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1801A8AD0
 * Callers:
 *     ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x1801A8B10 (--_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1801A8B40 (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 */

void __fastcall CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(union _SLIST_HEADER *this)
{
  CHolographicInteropTaskQueue *v2; // rcx

  this->Alignment = (ULONGLONG)&CHolographicInteropTaskQueue::`vftable';
  CHolographicInteropTaskQueue::ClearList((CHolographicInteropTaskQueue *)this, this + 1);
  CHolographicInteropTaskQueue::ClearList(v2, this + 2);
  this->Alignment = (ULONGLONG)&CMILRefCountBase::`vftable';
}
