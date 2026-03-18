/*
 * XREFs of ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70
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
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
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
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // esi
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // esi
  _DWORD *v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // r14
  __int64 (*v10)(void); // rax
  unsigned int *v11; // rax
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  __int64 v17; // rax

  if ( *((_QWORD *)this + 4) || *((_DWORD *)this + 10) )
  {
    v2 = *((_DWORD *)this + 10);
    v3 = v2;
    v4 = -2147024362;
    v5 = (v2 + 3) & 0xFFFFFFFC;
    if ( v5 >= v2 )
    {
      *((_DWORD *)this + 10) = v5;
      v4 = 0;
      v3 = (v2 + 3) & 0xFFFFFFFC;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xE0u);
      return (unsigned int)v4;
    }
    v6 = v3 - v2;
    v7 = (_DWORD *)*((_QWORD *)this + 2);
    v8 = *(_QWORD *)v7;
    if ( *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v7 + 8LL) == CDataStreamBlock::GetWrittenSize )
    {
      v9 = v7 + 7;
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = (_DWORD *)*((_QWORD *)this + 2);
      v9 = (_DWORD *)v17;
      v8 = *(_QWORD *)v7;
    }
    v10 = *(__int64 (**)(void))(v8 + 8);
    if ( (char *)v10 == (char *)CDataStreamBlock::GetWrittenSize )
      v11 = v7 + 7;
    else
      v11 = (unsigned int *)v10();
    v12 = *v11;
    v13 = v12 + v6;
    if ( v12 + v6 < v12 )
    {
      v4 = -2147024362;
      v13 = -1;
    }
    else
    {
      v4 = 0;
    }
    *v9 = v13;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x212u);
    }
    else
    {
      v14 = *((_DWORD *)this + 7);
      v15 = v14 + v6;
      if ( v14 + v6 < v14 )
      {
        v4 = -2147024362;
        v15 = -1;
      }
      else
      {
        v4 = 0;
      }
      *((_DWORD *)this + 7) = v15;
      if ( v4 >= 0 )
      {
        **((_DWORD **)this + 4) = *((_DWORD *)this + 10);
        *((_QWORD *)this + 4) = 0LL;
        *((_DWORD *)this + 10) = 0;
        return (unsigned int)v4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x213u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xE4u);
    return (unsigned int)v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0xCCu);
  return 2147549183LL;
}
