/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060
 * Callers:
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18001B4F0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001B730 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180084720 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x180084960 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x180084A40 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180084DC0 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085200 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085870 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180085960 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180085A60 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180085B40 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800867C0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180086940 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180086D00 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180144400 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180144650 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180144CA0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x180144FB0 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180145620 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801457A0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  __int64 v6; // rcx
  unsigned int (**v7)(void); // rax
  _DWORD *v8; // rdi
  unsigned int *v9; // rcx
  unsigned __int8 *(__fastcall *v10)(CDataStreamBlock *__hidden); // rax
  char *v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 (*v15)(void); // rax
  unsigned int *v16; // rax
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // edi
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v23; // rax

  v4 = a3;
  if ( (*((_QWORD *)this + 4) || *((_DWORD *)this + 10))
    && ((v6 = *((_QWORD *)this + 2),
         v7 = *(unsigned int (***)(void))v6,
         *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v6 + 8LL) != CDataStreamBlock::GetWrittenSize)
      ? (v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6),
         v7 = (unsigned int (**)(void))**((_QWORD **)this + 2))
      : (unsigned int (**)(void))(v8 = (_DWORD *)(v6 + 28)),
        (*v7)() - *v8 >= (unsigned int)v4) )
  {
    if ( (_DWORD)v4 )
    {
      v9 = (unsigned int *)*((_QWORD *)this + 2);
      v10 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v9 + 24LL);
      if ( v10 == CDataStreamBlock::GetWritePointer )
        v11 = (char *)v9 + v9[7] + 32;
      else
        v11 = (char *)((__int64 (__fastcall *)(unsigned int *, unsigned __int8 *(__fastcall *)(CDataStreamBlock *__hidden)))v10)(
                        v9,
                        CDataStreamBlock::GetWritePointer);
      memcpy_0(v11, a2, v4);
      v12 = (_DWORD *)*((_QWORD *)this + 2);
      v13 = *(_QWORD *)v12;
      if ( *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v12 + 8LL) == CDataStreamBlock::GetWrittenSize )
      {
        v14 = v12 + 7;
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
        v12 = (_DWORD *)*((_QWORD *)this + 2);
        v14 = (_DWORD *)v23;
        v13 = *(_QWORD *)v12;
      }
      v15 = *(__int64 (**)(void))(v13 + 8);
      if ( (char *)v15 == (char *)CDataStreamBlock::GetWrittenSize )
        v16 = v12 + 7;
      else
        v16 = (unsigned int *)v15();
      v17 = *v16;
      v18 = v17 + v4;
      if ( v17 + (unsigned int)v4 < v17 )
      {
        v19 = -2147024362;
        v18 = -1;
      }
      else
      {
        v19 = 0;
      }
      *v14 = v18;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x212u);
      }
      else
      {
        v20 = *((_DWORD *)this + 7);
        v21 = v20 + v4;
        if ( v20 + (unsigned int)v4 < v20 )
        {
          v19 = -2147024362;
          v21 = -1;
        }
        else
        {
          v19 = 0;
        }
        *((_DWORD *)this + 7) = v21;
        if ( v19 >= 0 )
        {
          *((_DWORD *)this + 10) += v4;
          return (unsigned int)v19;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x213u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xAFu);
      return (unsigned int)v19;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0xA3u);
    return 2147549183LL;
  }
}
