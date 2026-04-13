/*
 * XREFs of ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1800044A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CThreadRefTaker *__fastcall CThreadRefTaker::`scalar deleting destructor'(CThreadRefTaker *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
