/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___ @ 0x180018310
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A8F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_731965040e8443022816428e179c115d___ @ 0x18001B584 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_731965040e8443022816428e179c115d___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___(
        __int64 a1,
        _QWORD *a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rbx
  __int64 v5; // rcx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+10h]
  PVOID v16; // [rsp+80h] [rbp+18h]

  v15 = a2;
  v14 = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v16 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v12 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v7 = *a2;
    v13 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = (unsigned int)v3[13].Ptr;
    Windows::Internal::ComTaskPool::WrapWithTask__lambda_731965040e8443022816428e179c115d___(&v14, &v12);
    v9 = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v8, 0LL);
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v11 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v9;
  }
  else
  {
    v5 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return 2147943568LL;
  }
}
