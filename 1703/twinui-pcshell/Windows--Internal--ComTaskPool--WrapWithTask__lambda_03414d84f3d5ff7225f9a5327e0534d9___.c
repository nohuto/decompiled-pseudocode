/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_03414d84f3d5ff7225f9a5327e0534d9___ @ 0x18011A33C
 * Callers:
 *     ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x180114BB0 (-ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA-AW4StateChangeResult@@W4PopupCountOperation@@_K.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03414d84f3d5ff7225f9a5327e0534d9_____lambda_03414d84f3d5ff7225f9a5327e0534d9___ @ 0x18011B10C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_03414d84f3d5f.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_03414d84f3d5ff7225f9a5327e0534d9___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03414d84f3d5ff7225f9a5327e0534d9_____lambda_03414d84f3d5ff7225f9a5327e0534d9___(&v6);
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
