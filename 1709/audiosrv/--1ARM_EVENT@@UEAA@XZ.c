/*
 * XREFs of ??1ARM_EVENT@@UEAA@XZ @ 0x1800BA518
 * Callers:
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x1800BA580 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall ARM_EVENT::~ARM_EVENT(ARM_EVENT *this, __int64 a2)
{
  *(_QWORD *)this = &ARM_EVENT::`vftable';
  std::_Func_class<void,>::_Tidy((_QWORD *)this + 1, a2);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
