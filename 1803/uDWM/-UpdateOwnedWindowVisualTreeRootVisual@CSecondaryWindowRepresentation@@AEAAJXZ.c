/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18002EF28
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x18002E6EC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180006C48 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002FB14 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rbp
  CBaseObject *v3; // r14
  CRenderDataVisual *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  CBaseObject *v11; // rsi
  int v12; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CResource *v17; // [rsp+60h] [rbp+8h] BYREF
  struct CRenderDataInstruction *v18; // [rsp+68h] [rbp+10h] BYREF
  struct CDrawVisualTreeInstruction *v19; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v19 = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v5 = (CRenderDataVisual *)*((_QWORD *)this + 7);
  v17 = 0LL;
  if ( !v5 )
    return v1;
  CRenderDataVisual::ClearInstructions(v5);
  if ( *((_QWORD *)this + 65) )
  {
    v14 = ResourceHelper::CreateRectangleGeometry(
            *((unsigned int *)this + 132),
            *((unsigned int *)this + 133),
            *((unsigned int *)this + 134),
            *((unsigned int *)this + 135),
            &v17);
    v1 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xF4u);
      v3 = v17;
LABEL_15:
      if ( v3 )
        CBaseObject::Release(v3);
      return v1;
    }
    v3 = v17;
    v15 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 65), v17, &v18);
    v1 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xF9u);
      v2 = v18;
    }
    else
    {
      v2 = v18;
      v16 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v18);
      v1 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xFBu);
    }
LABEL_13:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_15;
  }
  v6 = 0LL;
  v7 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_18;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_7;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 80LL);
      goto LABEL_7;
    }
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v7 + 424);
  if ( !v8 )
  {
LABEL_18:
    v6 = v7;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(v8 + 32);
LABEL_7:
  v9 = *(_QWORD *)(v6 + 392);
  if ( v9 )
  {
    v10 = CDrawVisualTreeInstruction::Create(*(struct CVisual **)(v9 + 256), &v19);
    v11 = v19;
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x105u);
    }
    else
    {
      v12 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v19);
      v1 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x108u);
    }
    if ( v11 )
    {
      CBaseObject::Release(v11);
      goto LABEL_13;
    }
  }
  return v1;
}
