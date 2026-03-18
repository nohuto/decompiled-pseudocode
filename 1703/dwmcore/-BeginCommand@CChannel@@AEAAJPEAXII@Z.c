/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8
 * Callers:
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180022260 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1800225F0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x18007FB90 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18007FDC0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x18007FE90 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800801D0 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@000@Z @ 0x1800811E0 (-WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@000@Z.c)
 *     ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180081AB0 (-VisualSetSize@CChannel@@UEAAJINN@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180081D50 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180139540 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180139780 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801399D0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180139FF0 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x18013A0E0 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18013A860 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x18013A9D0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x1800830F4 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180083540 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180083850 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::BeginCommand(struct CCommandBatch **this, void *a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  const void *v8; // rsi
  int v9; // ebx
  CDataStreamWriter **v10; // r15
  CDataStreamWriter *v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  CDataStreamBlock *v17; // rcx
  __int64 (*v18)(void); // rax
  unsigned int *WrittenSize; // rax
  __int64 v20; // rcx
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // eax
  int NewBlock; // eax
  unsigned int v26; // [rsp+20h] [rbp-38h]

  v4 = a4 + a3;
  v5 = -1;
  v6 = -1;
  v8 = a2;
  if ( a4 + a3 >= a3 )
    v6 = a4 + a3;
  v9 = v4 < a3 ? 0x80070216 : 0;
  if ( v4 < a3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x99u);
    return (unsigned int)v9;
  }
  v9 = 0;
  v10 = this + 20;
  if ( !this[20] )
  {
    v22 = CCommandBatch::Create((__int64)this, this + 20);
    v9 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x11Bu);
  }
  if ( v9 >= 0 )
  {
    v11 = *v10;
    v12 = v6 + 4;
    v13 = -1;
    if ( v6 + 4 >= v6 )
      v13 = v6 + 4;
    v9 = v12 < v6 ? 0x80070216 : 0;
    if ( v12 < v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x157u);
      goto LABEL_41;
    }
    v14 = 0LL;
    v15 = (v13 + 3) & 0xFFFFFFFC;
    v16 = v15;
    if ( v15 < v13 )
      v16 = v13;
    v9 = v15 < v13 ? 0x80070216 : 0;
    if ( v15 < v13 )
    {
      v26 = 367;
    }
    else
    {
      v17 = (CDataStreamBlock *)*((_QWORD *)v11 + 2);
      if ( v17 )
      {
        v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 8LL);
        if ( (char *)v18 == (char *)CDataStreamBlock::GetWrittenSize )
          WrittenSize = CDataStreamBlock::GetWrittenSize(v17);
        else
          WrittenSize = (unsigned int *)v18();
        v14 = (***((unsigned int (__fastcall ****)(_QWORD))v11 + 2))(*((_QWORD *)v11 + 2)) - *WrittenSize;
      }
      v20 = *((_QWORD *)v11 + 2);
      if ( v20 && (unsigned int)v14 >= v16 )
        goto LABEL_18;
      v23 = 0x10000;
      if ( *((_DWORD *)v11 + 6) < 0x10000u )
        v23 = *((_DWORD *)v11 + 6);
      if ( v20 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL))(v20, v14) )
      {
        WPF::ProcessHeapImpl::Free(*((void **)v11 + 2));
        *((_QWORD *)v11 + 2) = 0LL;
      }
      v24 = v16 + v23;
      if ( v16 + v23 >= v16 )
        v5 = v16 + v23;
      v9 = v24 < v16 ? 0x80070216 : 0;
      if ( v24 >= v16 )
      {
        NewBlock = CDataStreamWriter::AllocateNewBlock(v11, v5);
        v9 = NewBlock;
        if ( NewBlock < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x1BBu);
        goto LABEL_18;
      }
      v26 = 441;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v26);
LABEL_18:
    if ( v9 >= 0 )
    {
LABEL_19:
      v8 = a2;
      goto LABEL_20;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x159u);
LABEL_41:
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x105u);
    goto LABEL_19;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x100u);
LABEL_20:
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x9Au);
  }
  else
  {
    CDataStreamWriter::BeginItem(*v10);
    CDataStreamWriter::AddItemData(*v10, v8, a3);
  }
  return (unsigned int)v9;
}
