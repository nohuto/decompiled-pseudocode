/*
 * XREFs of ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180067BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_378c660b1cef11ab9222d9a9f7813f6b___ @ 0x18006AC14 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_378c660b1cef11ab9222d9a9f7813f6b___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CFrameApplicationPresentation::SetTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        struct IApplicationViewTitlebarConfiguration *a2)
{
  int v4; // ebx
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  struct IApplicationViewTitlebarConfiguration *v8; // rcx
  struct IApplicationViewTitlebarConfiguration *v10; // [rsp+38h] [rbp-40h] BYREF
  CFrameApplicationPresentation *v11; // [rsp+40h] [rbp-38h]
  _QWORD v12[2]; // [rsp+48h] [rbp-30h] BYREF
  struct IApplicationViewTitlebarConfiguration *v13; // [rsp+58h] [rbp-20h]
  CFrameApplicationPresentation *v14; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  __int64 v16; // [rsp+A0h] [rbp+28h] BYREF
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+A8h] [rbp+30h]
  struct IApplicationViewTitlebarConfiguration **v18; // [rsp+B0h] [rbp+38h]
  CFrameApplicationPresentation *v19; // [rsp+B8h] [rbp+40h]

  v17 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
  v11 = this;
  v18 = &v10;
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
    v19 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v12[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v12[1] = this;
    v13 = v10;
    if ( v10 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v10 + 8LL))(v10);
    v14 = v11;
    v5 = *((_DWORD *)this + 10);
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_378c660b1cef11ab9222d9a9f7813f6b___(
                        &v16,
                        v12);
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
    v7 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v13 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 49);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v4;
}
