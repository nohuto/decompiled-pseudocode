/*
 * XREFs of ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180170B9C
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EC8C (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x180171694 (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 */

__int64 __fastcall CManipulation::SetCaptureState_RenderThread(CManipulation *a1)
{
  signed int RenderToManipulationMsgInfo; // eax
  unsigned int v3; // ebx
  signed int v4; // eax
  struct IMessageCallSendHost *v6; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(a1, &v6, &v7);
  v3 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderToManipulationMsgInfo, 0x393u);
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = CoreUICallSend(v6, &v7, 1LL, 5LL, 1, &unk_1801F0542);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x39Cu);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  return v3;
}
