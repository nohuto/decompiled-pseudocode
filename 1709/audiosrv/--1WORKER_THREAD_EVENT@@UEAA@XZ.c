/*
 * XREFs of ??1WORKER_THREAD_EVENT@@UEAA@XZ @ 0x180031DE0
 * Callers:
 *     _GENERIC_EVENT::GENERIC_EVENT_::_1_::dtor$0 @ 0x180037F72 (_GENERIC_EVENT--GENERIC_EVENT_--_1_--dtor$0.c)
 *     _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$30 @ 0x1800BA821 (_SpatialPolicy--DetectComboEndpoint_--_1_--dtor$30.c)
 * Callees:
 *     <none>
 */

void __fastcall WORKER_THREAD_EVENT::~WORKER_THREAD_EVENT(WORKER_THREAD_EVENT *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
