/*
 * XREFs of ??1MouseAccelerator@@QEAA@XZ @ 0x18006B684
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$4 @ 0x1800CFBD7 (_MouseProcessor--MouseProcessor_--_1_--dtor$4.c)
 *     _MouseProcessor::_MouseProcessor_::_1_::dtor$4 @ 0x1800CFC42 (_MouseProcessor--_MouseProcessor_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MouseAccelerator::~MouseAccelerator(MouseAccelerator *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
