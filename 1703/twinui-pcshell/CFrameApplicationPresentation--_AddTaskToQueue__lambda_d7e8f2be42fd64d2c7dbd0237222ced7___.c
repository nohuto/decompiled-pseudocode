/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___ @ 0x18006A3E8
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x180067130 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_1ab7f1210d4a2916bb4211d88b774039___ @ 0x18006AAC0 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_1ab7f1210d4a2916bb4211d88b774039___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___(
        _DWORD *a1,
        __int64 a2)
{
  int v4; // ebx
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+18h]

  if ( a1[12] == 2 )
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
    v12 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v9[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v9[1] = a1;
    v9[2] = a2;
    v5 = a1[10];
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_1ab7f1210d4a2916bb4211d88b774039___(&v11, v9);
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v9[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
    if ( v4 >= 0 )
      ++a1[49];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return (unsigned int)v4;
}
