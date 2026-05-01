/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18013CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d5b60___ @ 0x180139518 (ShellPositionerHelpers--PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d5b60___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  char v2; // di
  RTL_SRWLOCK *v3; // rbx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationView **v9; // [rsp+60h] [rbp+20h] BYREF
  struct IApplicationView *v10; // [rsp+68h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF

  v10 = a2;
  v2 = 1;
  v3 = (RTL_SRWLOCK *)((char *)this - 120);
  punk = 0LL;
  LODWORD(v9) = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v3->Ptr + 4);
  if ( v4 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    v4(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  v9 = &v10;
  v5 = ShellPositionerHelpers::PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d5b60___(
         punk,
         (__int64)v10,
         &v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  if ( v5 >= 0 )
  {
    v5 = 0;
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v2 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 56LL))(v10);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        669LL,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v6);
  }
  return (unsigned int)v5;
}
