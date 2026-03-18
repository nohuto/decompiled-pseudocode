/*
 * XREFs of ?AppendHWGeometry@GeometrySink@CDrawListEntryBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x180151798
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListEntryBuilder::GeometrySink::AppendHWGeometry(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        __int128 *a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  signed int v12; // eax
  __int64 v13; // r8
  signed int v14; // ebx
  __int64 v15; // rcx
  __int128 *v16; // rax
  __int128 v17; // xmm0
  unsigned int v19; // [rsp+20h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v8 = *a2;
  v20 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 24))(a2, 0LL, &v20);
  v14 = v12;
  if ( v12 < 0 )
  {
    v19 = 162;
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 32) = 0;
  v15 = v20;
  *(_DWORD *)(a1 + 212) = a5;
  v16 = a6;
  *(_DWORD *)(a1 + 208) = a4;
  v17 = *v16;
  *(_BYTE *)(a1 + 232) = a7;
  *(_BYTE *)(a1 + 233) = a8;
  *(_OWORD *)(a1 + 216) = v17;
  *(_QWORD *)(a1 + 200) = a3;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 96LL))(v15, 0LL, v13, a1 + 16);
  v14 = v12;
  if ( v12 < 0 )
  {
    v19 = 177;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v19);
    goto LABEL_8;
  }
  v14 = *(_DWORD *)(a1 + 32);
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xB2u);
LABEL_8:
  ReleaseInterfaceNoNULL<CManipulationManager>(v20);
  *(_QWORD *)(a1 + 200) = 0LL;
  return (unsigned int)v14;
}
