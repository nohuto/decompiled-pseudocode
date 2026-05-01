/*
 * XREFs of ?IsPresentationReady@CTaskWindow@@UEAA_NXZ @ 0x180047510
 * Callers:
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005C1A8 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 * Callees:
 *     ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180053570 (-get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::IsPresentationReady(CTaskWindow *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, ViewWrapperBase **); // rcx
  char v2; // bl
  __int64 (__fastcall *v3)(ViewWrapperBase *__hidden, unsigned __int8 *); // rax
  ViewWrapperBase *v4; // rcx
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF
  ViewWrapperBase *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = (void (__fastcall ***)(_QWORD, GUID *, ViewWrapperBase **))*((_QWORD *)this + 6);
  v2 = 0;
  v6 = v1 == 0LL;
  if ( !v1 )
    return 1;
  v7 = 0LL;
  (**v1)(v1, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v7);
  v3 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned __int8 *))(*(_QWORD *)v7 + 72LL);
  if ( v3 == ViewWrapperBase::get_ClientWindowReadyForPresentation )
    ViewWrapperBase::get_ClientWindowReadyForPresentation(v7, &v6);
  else
    v3(v7, &v6);
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v6 )
    return 1;
  return v2;
}
