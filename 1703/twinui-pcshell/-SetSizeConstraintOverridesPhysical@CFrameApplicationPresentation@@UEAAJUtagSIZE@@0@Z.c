/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180068CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___ @ 0x18006AE78 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  int v4; // ebx
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+38h] [rbp-48h]
  _QWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v12; // [rsp+60h] [rbp-20h]
  struct tagSIZE v13; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  __int64 v15; // [rsp+90h] [rbp+10h] BYREF
  CFrameApplicationPresentation *v16; // [rsp+98h] [rbp+18h]

  *(_QWORD *)&v9 = this;
  *((struct tagSIZE *)&v9 + 1) = a2;
  if ( *((_DWORD *)this + 12) == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x580,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v16 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v11[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v11[1] = this;
    v12 = v9;
    v13 = a3;
    v5 = *((_DWORD *)this + 10);
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___(
                        &v15,
                        v11);
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v11[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 49);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  return (unsigned int)v4;
}
