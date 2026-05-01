/*
 * XREFs of _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x180076328
 * Callers:
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180076180 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     wil::details::ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___::_ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___ @ 0x180077464 (wil--details--ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___--_ScopeExitFn__lambda_3752.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180084890 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(__int64 a1)
{
  _DWORD *result; // rax
  volatile signed __int32 *v3; // rbx
  HKEY v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx
  LPCWSTR lpSubKey[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v9; // [rsp+68h] [rbp+28h] BYREF
  volatile signed __int32 *v10; // [rsp+70h] [rbp+30h] BYREF

  result = *(_DWORD **)a1;
  if ( !**(_DWORD **)a1 )
  {
    v9 = 0LL;
    if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 8))(
           **(_QWORD **)(a1 + 8),
           &GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
           &v9) >= 0 )
    {
      lpSubKey[0] = 0LL;
      lpSubKey[1] = (LPCWSTR)-1LL;
      lpSubKey[2] = (LPCWSTR)-1LL;
      if ( (*(int (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v9 + 24LL))(v9, lpSubKey) >= 0 )
      {
        GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v10);
        v3 = v10;
        if ( v10 )
        {
          v4 = (HKEY)*((_QWORD *)v10 + 6);
          if ( v4 )
          {
            v5 = RegDeleteKeyW(v4, lpSubKey[0]);
            if ( v5 )
              wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x44,
                (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
                (const char *)v5,
                0xFFFFFFFE);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x28,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
              (const char *)0x80270257LL);
          }
          if ( _InterlockedExchangeAdd(v3 + 11, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 72LL))(v10, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
        }
      }
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
    }
    result = (_DWORD *)CApplicationViewManager::RaiseApplicationViewChanged(
                         *(_QWORD *)(a1 + 16) + 144LL,
                         **(_QWORD **)(a1 + 8),
                         2LL);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      return (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}
