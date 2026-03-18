/*
 * XREFs of ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801680CC
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z @ 0x180168BDC (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z.c)
 */

__int64 __fastcall CManipulation::SetCaptureState_RenderThread(CManipulation *a1)
{
  int RenderToManipulationMsgInfo; // eax
  struct IMessageCallSendHost *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(a1, &v8, (unsigned int *)&v7);
  v3 = v8;
  v4 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderToManipulationMsgInfo, 0x32Au);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)a1 + 1) + 8LL))((_QWORD *)a1 + 1);
    v7 = (unsigned int)v7;
    v8 = a1;
    v5 = CoreUICallSend(v3, &v7, 1LL, 5LL, 1, &unk_1801D5402);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x333u);
  }
  if ( v3 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
