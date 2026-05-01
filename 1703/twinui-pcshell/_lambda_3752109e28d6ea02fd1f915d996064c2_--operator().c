/*
 * XREFs of _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800735F4
 * Callers:
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180073450 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     wil::details::ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___::_ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___ @ 0x1800746D4 (wil--details--ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___--_ScopeExitFn__lambda_3752.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180073730 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180081924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+18h] BYREF

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
        v3 = (volatile signed __int32 *)v10;
        if ( v10 )
        {
          v4 = *(HKEY *)(v10 + 32);
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
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
        }
      }
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
    }
    result = (_DWORD *)CApplicationViewManager::RaiseApplicationViewChanged(
                         *(_QWORD *)(a1 + 16) + 104LL,
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
