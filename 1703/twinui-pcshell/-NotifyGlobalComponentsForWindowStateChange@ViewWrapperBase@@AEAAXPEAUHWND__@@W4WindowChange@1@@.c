/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180117638
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801137F0 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180113990 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180113CE0 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18011749C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___ @ 0x18011A3C4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(_DWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v7; // ebx
  int v8; // ebx
  IUnknown **v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // [rsp+38h] [rbp-40h] BYREF
  _DWORD *v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v17; // [rsp+98h] [rbp+20h]

  result = (unsigned int)~a1[108];
  if ( (a1[108] & 1) == 0 )
  {
    v17 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 120LL))(a1);
    v11 = a1;
    v12 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v13 = a2;
    v14 = a3;
    v15 = v7;
    v8 = a1[40];
    v9 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___(
                        &v16,
                        &v11);
    Windows::Internal::ComTaskPool::RunTask(3, 2u, v8, 0, *v9, 0LL);
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}
