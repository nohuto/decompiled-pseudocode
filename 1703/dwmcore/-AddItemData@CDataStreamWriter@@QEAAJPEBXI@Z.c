/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730
 * Callers:
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180022260 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1800225F0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18007F2C4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x18007FB90 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18007FDC0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x18007FE90 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800801D0 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180080550 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180080C40 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK@Z @ 0x180080D30 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180080E40 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180080F10 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?WindowNodeSetDxImage@CChannel@@UEAAJII@Z @ 0x180081000 (-WindowNodeSetDxImage@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180081B60 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180081D50 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x180082350 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180139540 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180139780 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801399D0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180139FF0 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x18013A0E0 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18013A860 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x18013A9D0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  int v3; // ebp
  size_t v4; // rdi
  _DWORD *v7; // rcx
  unsigned int *(__fastcall *v8)(CDataStreamBlock *__hidden); // rax
  _DWORD *v9; // rsi
  unsigned int *v10; // rcx
  __int64 (*v11)(void); // rax
  char *v12; // rax
  _DWORD *v13; // rcx
  __int64 (*v14)(void); // rax
  _DWORD *v15; // rsi
  unsigned int *v16; // rdx
  unsigned int *(__fastcall *v17)(CDataStreamBlock *__hidden); // rax
  unsigned int *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // esi

  v3 = 0;
  v4 = a3;
  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10)
    || ((v7 = (_DWORD *)*((_QWORD *)this + 2),
         v8 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v7 + 8LL),
         v8 != CDataStreamBlock::GetWrittenSize)
      ? (v9 = (_DWORD *)((__int64 (*)(void))v8)())
      : (v9 = v7 + 7),
        (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *v9 < (unsigned int)v4) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xA3u);
    return 2147549183LL;
  }
  if ( !(_DWORD)v4 )
    return (unsigned int)v3;
  v10 = (unsigned int *)*((_QWORD *)this + 2);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 24LL);
  if ( (char *)v11 == (char *)CDataStreamBlock::GetWritePointer )
    v12 = (char *)v10 + v10[7] + 32;
  else
    v12 = (char *)v11();
  memcpy_0(v12, a2, v4);
  v13 = (_DWORD *)*((_QWORD *)this + 2);
  v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 8LL);
  if ( (char *)v14 == (char *)CDataStreamBlock::GetWrittenSize )
    v15 = v13 + 7;
  else
    v15 = (_DWORD *)v14();
  v16 = (unsigned int *)*((_QWORD *)this + 2);
  v17 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v16 + 8LL);
  if ( v17 == CDataStreamBlock::GetWrittenSize )
    v18 = v16 + 7;
  else
    v18 = v17(*((CDataStreamBlock **)this + 2));
  v19 = *v18;
  if ( v19 + (unsigned int)v4 < v19 )
  {
    *v15 = -1;
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x212u);
LABEL_15:
    v21 = v3;
    if ( v3 >= 0 )
    {
      *((_DWORD *)this + 10) += v4;
      return (unsigned int)v3;
    }
    goto LABEL_25;
  }
  *v15 = v19 + v4;
  v20 = *((_DWORD *)this + 7);
  if ( v20 + (unsigned int)v4 >= v20 )
  {
    *((_DWORD *)this + 7) = v20 + v4;
    goto LABEL_15;
  }
  *((_DWORD *)this + 7) = -1;
  v3 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x213u);
  v21 = -2147024362;
LABEL_25:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xAFu);
  return v21;
}
