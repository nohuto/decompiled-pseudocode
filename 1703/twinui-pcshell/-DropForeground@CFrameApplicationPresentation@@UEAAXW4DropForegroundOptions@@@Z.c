/*
 * XREFs of ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x1800671D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___ @ 0x18006AB48 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CFrameApplicationPresentation::DropForeground(_DWORD *a1, int a2)
{
  int v3; // ebx
  IUnknown **v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int128 v7; // [rsp+38h] [rbp-38h]
  _QWORD v8[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v9; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 v11; // [rsp+80h] [rbp+10h] BYREF
  _DWORD *v12; // [rsp+90h] [rbp+20h]

  *(_QWORD *)&v7 = a1;
  DWORD2(v7) = a2;
  if ( a1[12] == 2 )
  {
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
    v8[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[1] = a1;
    v9 = v7;
    v3 = a1[10];
    v4 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___(&v11, v8);
    v5 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v3, 0, *v4, 0LL);
    v6 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( v8[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
    if ( v5 >= 0 )
      ++a1[49];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
}
