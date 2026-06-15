/*
 * XREFs of ??1ARM_EVENT@@UEAA@XZ @ 0x180045064
 * Callers:
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180045030 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall ARM_EVENT::~ARM_EVENT(ARM_EVENT *this)
{
  *(_QWORD *)this = &ARM_EVENT::`vftable';
  std::_Func_class<void,>::_Tidy((char *)this + 8);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
