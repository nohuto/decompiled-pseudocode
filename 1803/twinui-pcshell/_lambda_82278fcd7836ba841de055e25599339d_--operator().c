/*
 * XREFs of _lambda_82278fcd7836ba841de055e25599339d_::operator() @ 0x1802B8AD4
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___ @ 0x1802B7D48 (ShellPositionerManager--DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B93F0 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_82278fcd7836ba841de055e25599339d_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  int PositionerForMonitor; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  CWinRTApplicationView *v13[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF

  v13[1] = (CWinRTApplicationView *)-2LL;
  v13[0] = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( (int)ShellPositionerManager::GetPositionerForMonitor(
              *(unsigned int *)(a1 + 8),
              a2,
              &GUID_ee010e17_919a_4068_868b_675acf787303,
              &v12) >= 0 )
  {
    v8 = v12;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView **))(*(_QWORD *)v8 + 72LL))(
      v8,
      a4,
      *(unsigned int *)(a1 + 12),
      v13);
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           *(unsigned int *)(a1 + 12),
                           a3,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v15);
  v10 = PositionerForMonitor;
  if ( PositionerForMonitor >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v15 + 80LL))(
      v15,
      a4,
      *(unsigned int *)(a1 + 8),
      v13[0]);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29A,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  return v10;
}
