/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734
 * Callers:
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18001B4F0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001B730 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180084720 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x180084960 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x180084A40 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180084DC0 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180086940 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180086D00 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18008857C (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x180088874 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180144400 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180144650 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180144CA0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x180144FB0 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180145620 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801457A0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180087E60 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18008817C (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180088410 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::BeginCommand(struct CCommandBatch **this, void *a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned int v6; // esi
  const void *v8; // rbp
  int v9; // ebx
  CDataStreamWriter **v10; // r15
  CDataStreamWriter *v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rsi
  unsigned int *(__fastcall *v18)(CDataStreamBlock *__hidden); // rax
  CDataStreamBlock *v19; // rcx
  unsigned int *WrittenSize; // rax
  int v21; // eax
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // eax
  int NewBlock; // eax
  unsigned int v27; // [rsp+20h] [rbp-48h]
  unsigned int *v28; // [rsp+30h] [rbp-38h]

  v4 = a4 + a3;
  v5 = -1;
  v6 = -1;
  v8 = a2;
  if ( a4 + a3 >= a3 )
    v6 = a4 + a3;
  v9 = v4 < a3 ? 0x80070216 : 0;
  if ( v4 < a3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x99u);
    return (unsigned int)v9;
  }
  v9 = 0;
  v10 = this + 20;
  if ( !this[20] )
  {
    v23 = CCommandBatch::Create((unsigned int)this, this + 20);
    v9 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x11Au);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x157u);
      goto LABEL_40;
    }
    v14 = 0LL;
    v15 = (v13 + 3) & 0xFFFFFFFC;
    v16 = v15;
    if ( v15 < v13 )
      v16 = v13;
    v9 = v15 < v13 ? 0x80070216 : 0;
    if ( v15 < v13 )
    {
      v27 = 367;
    }
    else
    {
      v17 = *((_QWORD *)v11 + 2);
      if ( v17 )
      {
        v18 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v17 + 8LL);
        v19 = (CDataStreamBlock *)*((_QWORD *)v11 + 2);
        if ( v18 == CDataStreamBlock::GetWrittenSize )
        {
          WrittenSize = CDataStreamBlock::GetWrittenSize(v19);
        }
        else
        {
          WrittenSize = (unsigned int *)((__int64 (__fastcall *)(CDataStreamBlock *, _QWORD))v18)(v19, 0LL);
          v17 = *((_QWORD *)v11 + 2);
        }
        v28 = WrittenSize;
        v21 = (**(__int64 (__fastcall ***)(__int64))v17)(v17);
        v17 = *((_QWORD *)v11 + 2);
        v14 = v21 - *v28;
        if ( v17 )
        {
          if ( (unsigned int)v14 >= v16 )
            goto LABEL_17;
        }
      }
      v24 = 0x10000;
      if ( *((_DWORD *)v11 + 6) < 0x10000u )
        v24 = *((_DWORD *)v11 + 6);
      if ( v17 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, v14) )
      {
        operator delete(*((void **)v11 + 2));
        *((_QWORD *)v11 + 2) = 0LL;
      }
      v25 = v16 + v24;
      if ( v16 + v24 >= v16 )
        v5 = v16 + v24;
      v9 = v25 < v16 ? 0x80070216 : 0;
      if ( v25 >= v16 )
      {
        NewBlock = CDataStreamWriter::AllocateNewBlock(v11, v5);
        v9 = NewBlock;
        if ( NewBlock < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewBlock, 0x1BBu);
        goto LABEL_17;
      }
      v27 = 441;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v27);
LABEL_17:
    if ( v9 >= 0 )
    {
LABEL_18:
      v8 = a2;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x159u);
LABEL_40:
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x104u);
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xFFu);
LABEL_19:
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Au);
  }
  else
  {
    CDataStreamWriter::BeginItem(*v10);
    CDataStreamWriter::AddItemData(*v10, v8, a3);
  }
  return (unsigned int)v9;
}
