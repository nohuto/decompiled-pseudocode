/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x180028860
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800282F0 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180050F30 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0px @ 0x180192EA8 (McTemplateU0px.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x19Bu);
  }
  else
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
    {
      v6 = *(CVisual **)(v8 + 8);
      if ( v6 )
        CVisual::OnInputSinkChange(v6);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0px(v6, v8, (char *)this + 8, a3[1]);
  }
  return v7;
}
