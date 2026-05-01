/*
 * XREFs of ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180067F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_e97912004d4e96f3bec37740b2aa1798___ @ 0x18006AC58 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_e97912004d4e96f3bec37740b2aa1798___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(
        CFrameApplicationPresentation *this,
        struct IImmersiveApplication *a2)
{
  int v4; // ebx
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  struct IImmersiveApplication *v8; // rcx
  CFrameApplicationPresentation *v10; // [rsp+38h] [rbp-40h] BYREF
  struct IImmersiveApplication *v11; // [rsp+40h] [rbp-38h]
  _QWORD v12[3]; // [rsp+48h] [rbp-30h] BYREF
  struct IImmersiveApplication *v13; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  __int64 v15; // [rsp+A0h] [rbp+28h] BYREF
  struct IImmersiveApplication *v16; // [rsp+A8h] [rbp+30h]
  CFrameApplicationPresentation **v17; // [rsp+B0h] [rbp+38h]
  CFrameApplicationPresentation *v18; // [rsp+B8h] [rbp+40h]

  v16 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = this;
  v11 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v17 = &v10;
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
    v18 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v12[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v12[1] = this;
    v12[2] = v10;
    v13 = v11;
    if ( v11 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v11 + 8LL))(v11);
    v5 = *((_DWORD *)this + 10);
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_e97912004d4e96f3bec37740b2aa1798___(
                        &v15,
                        v12);
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v13 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 49);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v4;
}
