/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800282F0
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800285B0 (--1CInteraction@@MEAA@XZ.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x180028860 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800CD318 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800CD474 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800CD568 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  int v2; // ebx
  CInputSinkStruct **v3; // rsi
  void *v4; // rdi
  CInputSinkStruct *v6; // rax
  CInputSinkStruct *v7; // rax
  int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 96);
  v4 = a2;
  if ( !a2 )
  {
    SAFE_DELETE<CInputSinkStruct>((char *)this + 96);
    goto LABEL_3;
  }
  v6 = *v3;
  if ( *v3 )
    goto LABEL_8;
  v7 = (CInputSinkStruct *)WPF::ProcessHeapImpl::AllocClear(0x70uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CInputSinkStruct::CInputSinkStruct(v7);
  *v3 = v6;
  if ( v6 )
  {
LABEL_8:
    v8 = CInputSinkStruct::ReplaceInputHandle(v6, v4);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2FBu);
    v4 = 0LL;
LABEL_3:
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_13;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2F7u);
LABEL_13:
  if ( v4 )
    NtCloseCompositionInputSink(v4);
  SAFE_DELETE<CInputSinkStruct>(v3);
  return (unsigned int)v2;
}
