/*
 * XREFs of ??1WORKER_THREAD_EVENT@@UEAA@XZ @ 0x180040148
 * Callers:
 *     _ARM_EVENT::ARM_EVENT_::_1_::dtor$0 @ 0x1800EEFCD (_ARM_EVENT--ARM_EVENT_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall WORKER_THREAD_EVENT::~WORKER_THREAD_EVENT(WORKER_THREAD_EVENT *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
