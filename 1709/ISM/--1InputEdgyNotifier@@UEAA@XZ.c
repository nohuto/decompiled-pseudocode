/*
 * XREFs of ??1InputEdgyNotifier@@UEAA@XZ @ 0x18002E324
 * Callers:
 *     ??_GEdgeGestureComponent@@MEAAPEAXI@Z @ 0x180029E9C (--_GEdgeGestureComponent@@MEAAPEAXI@Z.c)
 *     ??_EInputEdgyNotifier@@UEAAPEAXI@Z @ 0x18002E2E0 (--_EInputEdgyNotifier@@UEAAPEAXI@Z.c)
 *     _EdgeGestureComponent::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800CDD99 (_EdgeGestureComponent--_scalar_deleting_destructor__--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall InputEdgyNotifier::~InputEdgyNotifier(InputEdgyNotifier *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &InputEdgyNotifier::`vftable';
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(_QWORD, const wchar_t *, __int64))(**((_QWORD **)this + 3) + 48LL))(
      *((_QWORD *)this + 3),
      L"InputEdgyNotifier",
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 144LL))(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 5));
  }
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
