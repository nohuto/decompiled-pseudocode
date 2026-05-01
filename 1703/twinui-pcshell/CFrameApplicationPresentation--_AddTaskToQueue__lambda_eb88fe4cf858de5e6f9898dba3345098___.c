/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___ @ 0x180069818
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180065F64 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___ @ 0x18006A928 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___(
        _DWORD *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  void (*v6)(void); // rax
  __int64 v7; // rcx
  int v8; // ebx
  IUnknown **v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  char v15; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+28h]
  _DWORD *v19; // [rsp+90h] [rbp+30h]

  v18 = a2;
  if ( a1[12] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x580,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    v5 = *(_QWORD *)(a2 + 8);
    if ( v5 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
LABEL_16:
      v6();
    }
  }
  else
  {
    v19 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v13[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v13[1] = a1;
    v13[2] = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v15 = *(_BYTE *)(a2 + 16);
    v8 = a1[10];
    v9 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___(
                        &v17,
                        v13);
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v8, 0, *v9, 0LL);
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    if ( v4 >= 0 )
      ++a1[49];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v6 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
      goto LABEL_16;
    }
  }
  return (unsigned int)v4;
}
