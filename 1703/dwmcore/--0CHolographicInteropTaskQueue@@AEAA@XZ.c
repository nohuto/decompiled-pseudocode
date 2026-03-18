/*
 * XREFs of ??0CHolographicInteropTaskQueue@@AEAA@XZ @ 0x1801A8A8C
 * Callers:
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801A8BB8 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CHolographicInteropTaskQueue *__fastcall CHolographicInteropTaskQueue::CHolographicInteropTaskQueue(
        CHolographicInteropTaskQueue *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CHolographicInteropTaskQueue::`vftable';
  *((_DWORD *)this + 2) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 1);
  InitializeSListHead((PSLIST_HEADER)this + 2);
  return this;
}
