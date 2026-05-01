/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a6aded1539f40bd962842cbb2a59c971___ @ 0x180004DD8
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___ @ 0x18000F39C (CIAMGlobals--QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6aded1539f40bd962842cbb2a59c971_____lambda_a6aded1539f40bd962842cbb2a59c971___ @ 0x180004E4C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a6aded1539f40.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_a6aded1539f40bd962842cbb2a59c971___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  v10[1] = -2LL;
  v5 = (_QWORD *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6aded1539f40bd962842cbb2a59c971_____lambda_a6aded1539f40bd962842cbb2a59c971___(
                   &v9,
                   a4);
  v10[0] = *v5;
  *v5 = 0LL;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, a3);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v10);
  return v7;
}
