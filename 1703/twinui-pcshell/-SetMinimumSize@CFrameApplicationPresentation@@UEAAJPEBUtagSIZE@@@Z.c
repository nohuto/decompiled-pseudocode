/*
 * XREFs of ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180068230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_99658182e2b81a0d7804c66a62d4da8f___ @ 0x18006AC9C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_99658182e2b81a0d7804c66a62d4da8f___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::SetMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  int v3; // ebx
  int cx; // ebx
  IUnknown **v5; // rax
  __int64 v6; // rcx
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  struct tagSIZE *v11; // [rsp+68h] [rbp+10h]

  this[18] = *a2;
  if ( this[6].cx == 2 )
  {
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x580,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v11 = this;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)this + 8LL))(this);
    v8[0] = this;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)this + 8LL))(this);
    v8[1] = this;
    v8[2] = this;
    cx = this[5].cx;
    v5 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_99658182e2b81a0d7804c66a62d4da8f___(&v10, v8);
    v3 = Windows::Internal::ComTaskPool::RunTask(3, 2u, cx, 0, *v5, 0LL);
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( v8[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
    if ( v3 >= 0 )
      ++this[24].cy;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)this + 16LL))(this);
  }
  return (unsigned int)v3;
}
