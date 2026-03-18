/*
 * XREFs of ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180199938
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801CA52C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x18019A51C (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 */

__int64 __fastcall CManipulation::SetAutoReset_RenderThread(CManipulation *this)
{
  int RenderToManipulationMsgInfo; // eax
  unsigned int v3; // ebx
  int v4; // eax
  struct IMessageCallSendHost *v6; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(this, &v6, &v7);
  v3 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderToManipulationMsgInfo, 0x3C5u);
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v4 = CoreUICallSend(v6, &v7, 1LL, 9LL, 2, &unk_180239CBD);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3CEu);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  return v3;
}
