/*
 * XREFs of ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180068730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x18006ADAC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_ac4863598604ec72e89080dc7a8a9967___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CFrameApplicationPresentation::QueueAsyncCallback(
        CFrameApplicationPresentation *this,
        struct IAsyncCallback *a2)
{
  int v4; // ebx
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  struct IAsyncCallback *v8; // rcx
  _QWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  struct IAsyncCallback *v11; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  struct IAsyncCallback *v13; // [rsp+90h] [rbp+28h] BYREF
  __int64 v14; // [rsp+98h] [rbp+30h] BYREF
  struct IAsyncCallback *v15; // [rsp+A0h] [rbp+38h]
  struct IAsyncCallback **v16; // [rsp+A8h] [rbp+40h]

  v15 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v16 = &v13;
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
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v10[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v10[1] = this;
    v11 = v13;
    if ( v13 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v13 + 8LL))(v13);
    v5 = *((_DWORD *)this + 10);
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_ac4863598604ec72e89080dc7a8a9967___(
                        &v14,
                        v10);
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
    if ( v4 >= 0 )
      ++*((_DWORD *)this + 49);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v4;
}
