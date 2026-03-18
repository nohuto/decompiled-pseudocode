/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18000BD4C
 * Callers:
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18000CBA0 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18000D1B0 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x18000D2A0 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x18000D3A0 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x18000D470 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?WindowNodeSetDxImage@CChannel@@UEAAJII@Z @ 0x18000D560 (-WindowNodeSetDxImage@CChannel@@UEAAJII@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18000FD9C (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x1800100E8 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 * Callees:
 *     ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x18000FC84 (-Initialize@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18011C41C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v3, 0, 0x38uLL);
  v4[1] = v4;
  *v4 = v4;
  v4[2] = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 7) = 0;
  v4[4] = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 12) = 8;
  v6 = CDataStreamWriter::Initialize((CDataStreamWriter *)v4, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x28u);
    CCommandBatch::`scalar deleting destructor'((CCommandBatch *)v4, v9);
  }
  else
  {
    *a2 = (struct CCommandBatch *)v4;
  }
  return v7;
}
