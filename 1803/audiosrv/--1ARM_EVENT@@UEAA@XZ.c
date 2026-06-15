/*
 * XREFs of ??1ARM_EVENT@@UEAA@XZ @ 0x1800EEFEC
 * Callers:
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x1800EF020 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall ARM_EVENT::~ARM_EVENT(ARM_EVENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)this = &ARM_EVENT::`vftable';
  std::_Func_class<void,>::_Tidy((__int64)this + 8, a2, a3, a4);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
