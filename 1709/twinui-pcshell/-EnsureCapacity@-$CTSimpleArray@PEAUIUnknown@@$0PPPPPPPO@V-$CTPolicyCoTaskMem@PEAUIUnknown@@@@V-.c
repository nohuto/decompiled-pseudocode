/*
 * XREFs of ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008E4C (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180013FE8 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InsertAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x180018028 (-InsertAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800180EC (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x180018180 (-PositionNewCreatedApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@.c)
 *     ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x180023E00 (-AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800241E4 (-Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_DiscoverOwnedWindowsProc@CReportWindowVisibilityChange@@CAHPEAUHWND__@@_J@Z @ 0x18002C110 (-s_DiscoverOwnedWindowsProc@CReportWindowVisibilityChange@@CAHPEAUHWND__@@_J@Z.c)
 *     ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x18002C38C (-_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x1800366B0 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180036994 (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180038650 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x1800393C0 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18005B550 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180080868 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180080B74 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180080CB0 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18008A548 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008D680 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18008DF88 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008EE20 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1800EF710 (-Populate@PWSLayoutPolicyManager@@CAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@W.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800F0570 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800F19CC (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 *     ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180121C00 (-RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180123720 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180125100 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

int __fastcall CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  int result; // eax
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  result = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v4 = *(_QWORD *)(a1 + 24);
    result = 0;
    if ( a2 > v4 )
    {
      v5 = 2 * v4;
      if ( is_mul_ok(v4, 2uLL) )
      {
        result = 0;
      }
      else
      {
        v5 = -1LL;
        result = -2147024362;
      }
      if ( result >= 0 )
      {
        v6 = v4 + 4096;
        if ( v5 - v4 <= 0x1000 )
          v6 = v5;
        if ( a2 > v6 )
          v6 = a2;
        if ( v6 > 0xFFFFFFFE )
          v6 = 4294967294LL;
        v7 = 0LL;
        if ( is_mul_ok(v6, 8uLL) )
        {
          result = CTCoAllocPolicy::Realloc(&v7, (v6 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v6, &v7);
          if ( result >= 0 )
          {
            *(_QWORD *)a1 = v7;
            *(_QWORD *)(a1 + 24) = v6;
          }
        }
        else
        {
          return -2147024362;
        }
      }
    }
  }
  return result;
}
