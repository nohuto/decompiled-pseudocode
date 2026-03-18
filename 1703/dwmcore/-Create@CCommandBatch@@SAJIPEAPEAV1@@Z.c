/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C
 * Callers:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18007F2C4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180080550 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180080C40 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180080D30 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180080E40 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180080F10 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?WindowNodeSetDxImage@CChannel@@UEAAJII@Z @ 0x180081000 (-WindowNodeSetDxImage@CChannel@@UEAAJII@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x180082350 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1800830F4 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180133304 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int NewBlock; // eax
  unsigned int v6; // edi
  unsigned int v8; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  v4 = v3;
  if ( !v3 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    JUMPOUT(0x180102C7ALL);
  }
  memset_0(v3, 0, 0x38uLL);
  v4[1] = v4;
  *v4 = v4;
  v4[2] = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 7) = 0;
  v4[4] = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 12) = 8;
  NewBlock = CDataStreamWriter::AllocateNewBlock((CDataStreamWriter *)v4, 0x1000u);
  v6 = NewBlock;
  if ( NewBlock < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x142u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x28u);
    CCommandBatch::`scalar deleting destructor'((CCommandBatch *)v4, v8);
  }
  else
  {
    *a2 = (struct CCommandBatch *)v4;
  }
  return v6;
}
