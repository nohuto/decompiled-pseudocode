/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18004B300
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18004B464 (--1CInteraction@@MEAA@XZ.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18004B708 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800B1B8C (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800B1BD4 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800B1C20 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  int v2; // ebx
  CInputSinkStruct **v3; // rdi
  void *v4; // rsi
  CInputSinkStruct *v6; // rax
  CInputSinkStruct *v7; // rax
  int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 112);
  v4 = a2;
  if ( !a2 )
  {
    SAFE_DELETE<CInputSinkStruct>(v3);
    goto LABEL_3;
  }
  if ( *v3 )
    goto LABEL_8;
  v6 = (CInputSinkStruct *)WPF::ProcessHeapImpl::AllocClear(0x70uLL);
  if ( !v6 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v7 = CInputSinkStruct::CInputSinkStruct(v6);
  *v3 = v7;
  if ( v7 )
  {
LABEL_8:
    v8 = CInputSinkStruct::ReplaceInputHandle(*v3, v4);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2E3u);
    v4 = 0LL;
LABEL_3:
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_13;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2DFu);
LABEL_13:
  if ( v4 )
    CloseHandle(v4);
  SAFE_DELETE<CInputSinkStruct>(v3);
  return (unsigned int)v2;
}
