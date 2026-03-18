/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x180091734
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800912CC (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800919C8 (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800BA2D4 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800BA55C (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800BA658 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  int v2; // ebx
  CInputSinkStruct **v3; // rdi
  void *v4; // rsi
  CInputSinkStruct *v6; // rax
  CInputSinkStruct *v7; // rax
  signed int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 128);
  v4 = a2;
  if ( !a2 )
  {
    SAFE_DELETE<CInputSinkStruct>(v3);
    goto LABEL_3;
  }
  if ( *v3 )
    goto LABEL_8;
  v6 = (CInputSinkStruct *)WPF::ProcessHeapImpl::AllocClear(0x90uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = CInputSinkStruct::CInputSinkStruct(v6);
  *v3 = v7;
  if ( v7 )
  {
LABEL_8:
    v8 = CInputSinkStruct::ReplaceInputHandle(*v3, v4);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x2E7u);
    v4 = 0LL;
LABEL_3:
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_13;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2E3u);
LABEL_13:
  if ( v4 )
    CloseHandle(v4);
  SAFE_DELETE<CInputSinkStruct>(v3);
  return (unsigned int)v2;
}
