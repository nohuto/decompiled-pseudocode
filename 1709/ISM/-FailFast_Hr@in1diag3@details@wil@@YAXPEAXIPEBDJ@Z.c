/*
 * XREFs of ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180041F64 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180061BD4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x1800C04AC (-CreateOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C0560 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C0BC0 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ @ 0x1800C26F8 (-ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ.c)
 *     ?LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ @ 0x1800C2738 (-LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003094 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::FailFast_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    (unsigned int)a2,
    (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
    0LL,
    0LL,
    retaddr,
    3,
    (unsigned int)a4);
}
