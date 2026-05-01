/*
 * XREFs of ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x180068A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_41d6b2be966878a86f3188264bd8a890___ @ 0x18006ADF0 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_41d6b2be966878a86f3188264bd8a890___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::SetBackgroundColor(CFrameApplicationPresentation *this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  IUnknown **v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+38h] [rbp-38h]
  _QWORD v9[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 v12; // [rsp+80h] [rbp+10h] BYREF
  CFrameApplicationPresentation *v13; // [rsp+90h] [rbp+20h]

  *(_QWORD *)&v8 = this;
  DWORD2(v8) = a2;
  if ( *((_DWORD *)this + 12) == 2 )
  {
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x580,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EF,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v13 = this;
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v9[0] = this;
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v9[1] = this;
  v10 = v8;
  v4 = *((_DWORD *)this + 10);
  v5 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_41d6b2be966878a86f3188264bd8a890___(&v12, v9);
  v3 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v4, 0, *v5, 0LL);
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v9[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  if ( v3 >= 0 )
    ++*((_DWORD *)this + 49);
  (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  if ( v3 < 0 )
    goto LABEL_10;
  return (unsigned int)v3;
}
