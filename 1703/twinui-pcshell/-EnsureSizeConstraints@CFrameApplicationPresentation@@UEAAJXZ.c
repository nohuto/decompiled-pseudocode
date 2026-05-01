/*
 * XREFs of ?EnsureSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180069060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_efacefe1f9a132f9192ecba0e8d88571___ @ 0x18006AF44 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_efacefe1f9a132f9192ecba0e8d88571___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::EnsureSizeConstraints(CFrameApplicationPresentation *this)
{
  int v2; // ebx
  int v3; // ebx
  IUnknown **v4; // rax
  __int64 v5; // rcx
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  CFrameApplicationPresentation *v10; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 12) == 2 )
  {
    v2 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x580,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v10 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v7[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v7[1] = this;
    v7[2] = this;
    v3 = *((_DWORD *)this + 10);
    v4 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_efacefe1f9a132f9192ecba0e8d88571___(&v9, v7);
    v2 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v3, 0, *v4, 0LL);
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v7[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
    if ( v2 >= 0 )
      ++*((_DWORD *)this + 49);
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 16LL))(this);
  }
  return (unsigned int)v2;
}
