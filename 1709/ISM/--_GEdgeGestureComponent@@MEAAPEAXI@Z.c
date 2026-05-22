/*
 * XREFs of ??_GEdgeGestureComponent@@MEAAPEAXI@Z @ 0x180029E9C
 * Callers:
 *     ??_EEdgeGestureComponent@@OBA@EAAPEAXI@Z @ 0x18002AEA0 (--_EEdgeGestureComponent@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1CShellEdgyImpl@@QEAA@XZ @ 0x18002BF90 (--1CShellEdgyImpl@@QEAA@XZ.c)
 *     ??1InputEdgyNotifier@@UEAA@XZ @ 0x18002E324 (--1InputEdgyNotifier@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
EdgeGestureComponent *__fastcall EdgeGestureComponent::`scalar deleting destructor'(
        EdgeGestureComponent *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &EdgeGestureComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &EdgeGestureComponent::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 2) = &EdgeGestureComponent::`vftable'{for `RefCountedObject'};
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)this + 9) = 0LL;
  CShellEdgyImpl::~CShellEdgyImpl((EdgeGestureComponent *)((char *)this + 200));
  InputEdgyNotifier::~InputEdgyNotifier((EdgeGestureComponent *)((char *)this + 112));
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
