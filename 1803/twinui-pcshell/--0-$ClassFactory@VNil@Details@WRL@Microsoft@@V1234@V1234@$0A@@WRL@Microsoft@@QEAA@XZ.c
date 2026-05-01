/*
 * XREFs of ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB878
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCFullScreenManager@@$0A@@12@@Z @ 0x18014EF5C (--$MakeAndInitialize@V-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Det.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@12@@Z @ 0x180189F48 (--$MakeAndInitialize@V-$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@12@@Z @ 0x180223F00 (--$MakeAndInitialize@V-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x180224300 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@12@@Z @ 0x180266818 (--$MakeAndInitialize@V-$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@12@@Z @ 0x180269D28 (--$MakeAndInitialize@V-$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@WRL@Microsoft@@V123@$$V@De.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCAppTransitionManager@@$0A@@12@@Z @ 0x1802AB8A8 (--$MakeAndInitialize@V-$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@V123@$$V@.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@12@@Z @ 0x1802C2498 (--$MakeAndInitialize@V-$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@V12.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VTabletModePositioner@@$0A@@12@@Z @ 0x1802C3400 (--$MakeAndInitialize@V-$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@V123@$$V@D.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VTabletModeViewManager@@$0A@@12@@Z @ 0x1802CFD68 (--$MakeAndInitialize@V-$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@V123@$$V@.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VJointResize@@$0A@@12@@Z @ 0x1802E82C8 (--$MakeAndInitialize@V-$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@V123@$$V@Details@WR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(
        __int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 20) = 4;
  return result;
}
