/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_818e1247758777a74d4013294a5c3000___ @ 0x180038900
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___ @ 0x180038590 (CIAMGlobals--QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_818e1247758777a74d4013294a5c3000_____lambda_818e1247758777a74d4013294a5c3000___ @ 0x180038EE4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_818e124775877.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_818e1247758777a74d4013294a5c3000___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_818e1247758777a74d4013294a5c3000_____lambda_818e1247758777a74d4013294a5c3000___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
