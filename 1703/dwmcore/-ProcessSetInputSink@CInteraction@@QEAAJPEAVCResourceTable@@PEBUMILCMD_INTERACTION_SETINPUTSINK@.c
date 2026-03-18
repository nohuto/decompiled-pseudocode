/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18004B708
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18004B300 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180087DB8 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     Template_px @ 0x180167964 (Template_px.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  CVisual *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x183u);
  }
  else
  {
    v8 = *((_QWORD *)this + 15);
    if ( v8 )
    {
      v6 = *(CVisual **)(v8 + 8);
      if ( v6 )
        CVisual::OnInputSinkChange(v6);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_px(v6, v8, (char *)this + 8, a3[1]);
  }
  return v7;
}
