/*
 * XREFs of ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C
 * Callers:
 *     ?UpdateDragNDropContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002206C (-UpdateDragNDropContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVB.c)
 *     ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002219C (-UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800222CC (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800223FC (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002252C (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002265C (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 *     ?UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002278C (-UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 *     ?UpdateEnabledRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800306A0 (-UpdateEnabledRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 *     ?UpdatePausedRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180030738 (-UpdatePausedRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStu.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180033644 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1800365B8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z @ 0x1800388E0 (-BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180058CE4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?BroadcastSetBooleanValue@BamoDataSourcePrincipal@@UEAAJI_N@Z @ 0x18008C170 (-BroadcastSetBooleanValue@BamoDataSourcePrincipal@@UEAAJI_N@Z.c)
 *     ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x18008C2B0 (-BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z.c)
 *     ?BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z @ 0x18008C3F0 (-BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z.c)
 *     ?BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z @ 0x18008C540 (-BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z.c)
 *     ?BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008CA60 (-BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?BroadcastSetMatrix4x4Value@BamoDataSourcePrincipal@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x18008CBA0 (-BroadcastSetMatrix4x4Value@BamoDataSourcePrincipal@@UEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?CallAddDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x18008DA50 (-CallAddDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x18008DAA0 (-CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 *     ?CallSetVector4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x18008E090 (-CallSetVector4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?CallSetQuaternionValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x18008E0F0 (-CallSetQuaternionValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 *     ?CallSetColorValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x18008E150 (-CallSetColorValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I.c)
 *     ?UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008E1AC (-UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImp.c)
 *     ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x1800AC1E8 (-CreateOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800AC2A0 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800AC908 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800AD1A8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ @ 0x1800AE46C (-ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ.c)
 *     ?LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ @ 0x1800AE4B4 (-LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::verify_hresult<long>(unsigned int a1)
{
  return a1;
}
