/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800912CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180054CD0 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x180091734 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     McTemplateU0pp @ 0x18016A584 (McTemplateU0pp.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  signed int updated; // eax
  CVisual *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x187u);
  }
  else
  {
    v8 = *((_QWORD *)this + 17);
    if ( v8 )
    {
      v6 = *(CVisual **)(v8 + 8);
      if ( v6 )
        CVisual::OnInputSinkChange(v6);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0pp(v6, &EVTDESC_INTERACTION_SET_INPUT_SINK, (char *)this + 8, a3[1]);
  }
  return v7;
}
