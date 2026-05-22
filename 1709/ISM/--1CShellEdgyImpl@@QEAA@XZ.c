/*
 * XREFs of ??1CShellEdgyImpl@@QEAA@XZ @ 0x18002BF90
 * Callers:
 *     ??_GEdgeGestureComponent@@MEAAPEAXI@Z @ 0x180029E9C (--_GEdgeGestureComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CShellEdgyImpl@@QEAAXXZ @ 0x18002C078 (-Reset@CShellEdgyImpl@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CShellEdgyImpl::~CShellEdgyImpl(CShellEdgyImpl *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  CShellEdgyImpl::Reset(this);
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CShellEdgyNotifier::~CShellEdgyNotifier((CShellEdgyImpl *)((char *)this + 24));
}
