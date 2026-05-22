/*
 * XREFs of ??0EdgeGestureComponent@@IEAA@XZ @ 0x180029D6C
 * Callers:
 *     ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180029FEC (-Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

EdgeGestureComponent *__fastcall EdgeGestureComponent::EdgeGestureComponent(EdgeGestureComponent *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &EdgeGestureComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &EdgeGestureComponent::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 2) = &EdgeGestureComponent::`vftable'{for `RefCountedObject'};
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 14) = &RefCountedObject::`vftable';
  *((_QWORD *)this + 14) = &InputEdgyNotifier::`vftable';
  *((_DWORD *)this + 30) = 1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 58) = 1;
  *((_QWORD *)this + 28) = &CShellEdgyNotifier::`vftable';
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
