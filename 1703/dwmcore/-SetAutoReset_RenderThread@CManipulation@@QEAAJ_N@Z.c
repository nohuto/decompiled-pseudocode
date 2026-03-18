/*
 * XREFs of ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180167FF8
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18012C7B4 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z @ 0x180168BDC (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z.c)
 */

__int64 __fastcall CManipulation::SetAutoReset_RenderThread(CManipulation *this, char a2)
{
  int RenderToManipulationMsgInfo; // eax
  struct IMessageCallSendHost *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v8; // [rsp+68h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  LOBYTE(v8) = a2;
  v9 = 0LL;
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(this, &v9, &v8);
  v4 = v9;
  v5 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderToManipulationMsgInfo, 0x344u);
  }
  else
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
    v10 = v8;
    v9 = this;
    v6 = CoreUICallSend(v4, &v10, 1LL, 5LL, 2, &unk_1801D5408);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x34Du);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
