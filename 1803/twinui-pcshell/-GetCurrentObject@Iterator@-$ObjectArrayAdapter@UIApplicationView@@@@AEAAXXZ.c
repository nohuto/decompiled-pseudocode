/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C
 * Callers:
 *     ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180152600 (-_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801AD920 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801ADEB0 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 *     ?GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801AE880 (-GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@W.c)
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18023662C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1802738D8 (-ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV-$CCoSimpleArray@PEAUHWND_.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1802C4DA8 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1802C6F4C (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x1802C7298 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z @ 0x1802D86CC (-IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(CWinRTApplicationView **a1)
{
  CWinRTApplicationView **v1; // rsi
  CWinRTApplicationView *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1 + 1;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a1 + 1);
  v3 = a1[2];
  result = *((unsigned int *)v3 + 2);
  if ( *(_DWORD *)a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v1);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, CWinRTApplicationView **))(*(_QWORD *)v5 + 32LL))(
                 v5,
                 *(unsigned int *)a1,
                 &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                 v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        50LL,
        (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result);
      ++*(_DWORD *)a1;
      v3 = a1[2];
      result = *(unsigned int *)a1;
    }
    while ( (unsigned int)result < *((_DWORD *)v3 + 2) );
  }
  return result;
}
