/*
 * XREFs of ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18013C6D0
 * Callers:
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x18013C8F0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18013C9B0 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca650e6___ @ 0x180139684 (ShellPositionerHelpers--PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca650e6___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SetAppStateForViews(RTL_SRWLOCK *a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // edi
  __int64 (__fastcall *v13)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v14; // rcx
  int v15; // esi
  CWinRTApplicationView *v16; // [rsp+30h] [rbp-30h] BYREF
  IUnknown *punk[2]; // [rsp+38h] [rbp-28h] BYREF
  CWinRTApplicationView *v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v21; // [rsp+A8h] [rbp+48h] BYREF
  int v22; // [rsp+B8h] [rbp+58h]

  punk[1] = (IUnknown *)-2LL;
  v6 = 0;
  v22 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v21);
  if ( v7 >= 0 )
  {
    if ( v21 )
    {
      v7 = 0;
      v10 = 0;
      while ( 1 )
      {
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, CWinRTApplicationView **))(*(_QWORD *)a2 + 32LL))(
                a2,
                v10,
                &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                &v16);
        if ( v11 >= 0 )
        {
          v18 = v16;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v18);
          v19 = a3;
          punk[0] = 0LL;
          v12 = v6 | 2;
          v22 = v12;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)punk);
          v13 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)a1[4].Ptr + 4);
          v14 = a1 + 4;
          if ( v13 == CWRLObjectWithGITSite::GetSite )
            CWRLObjectWithGITSite::GetSite(v14, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
          else
            v13(v14, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
          v6 = v12 & 0xFFFFFFFC | 1;
          v15 = ShellPositionerHelpers::PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca650e6___(
                  punk[0],
                  (__int64)v16,
                  &v18);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)punk);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
          if ( a3 == 1 && v15 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
            return (unsigned int)v15;
          }
          if ( v7 >= 0 )
            v7 = v15;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            888LL,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v11);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        if ( ++v10 >= v21 )
          return (unsigned int)v7;
      }
    }
    v7 = -2147319765;
    v8 = 882LL;
  }
  else
  {
    v8 = 881LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
