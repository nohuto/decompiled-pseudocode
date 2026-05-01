/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004EC5C
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18004ED1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180051290 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180052D20 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ?v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18005AC10 (-v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA-AW4NavigationLevel@ViewManagerInterop@Shell@In.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_212ff9793df855e45456e1ed2b184a0d___ @ 0x1800931F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_212ff9793df855e45456e1ed2b184a0d___.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  int DesiredNavigationLevel; // eax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  result = &retaddr;
  if ( (*(_BYTE *)(a1 + 456) & 1) == 0 )
  {
    v17 = a1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&v17);
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL);
    if ( v7 == UAPViewWrapper::v_GetDesiredNavigationLevel )
      DesiredNavigationLevel = UAPViewWrapper::v_GetDesiredNavigationLevel(a1);
    else
      DesiredNavigationLevel = v7(a1);
    v9 = DesiredNavigationLevel;
    v12 = a1;
    v13[0] = a1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(v13);
    v13[1] = a2;
    v14 = a3;
    v15 = v9;
    ((void (__fastcall *)(__int64, __int64, _QWORD, __int64 *, __int64))Windows::Internal::ComTaskPool::QueueTask__lambda_212ff9793df855e45456e1ed2b184a0d___)(
      v11,
      v10,
      *(unsigned int *)(a1 + 184),
      &v12,
      -2LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    return (_UNKNOWN **)Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
  return result;
}
