/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801420B8
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18013DA90 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18013DC40 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x18013DF80 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180141F1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___ @ 0x180144A08 (Windows--Internal--ComTaskPool--QueueTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // [rsp+28h] [rbp-30h] BYREF
  unsigned int *v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  result = ~a1[114];
  if ( (a1[114] & 1) == 0 )
  {
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 120LL))(a1);
    v10 = a1;
    v11 = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v12 = a2;
    v13 = a3;
    v14 = v7;
    Windows::Internal::ComTaskPool::QueueTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___(v9, v8, a1[46], &v10, -2LL);
    if ( v11 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v11 + 16LL))(v11);
    return (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}
