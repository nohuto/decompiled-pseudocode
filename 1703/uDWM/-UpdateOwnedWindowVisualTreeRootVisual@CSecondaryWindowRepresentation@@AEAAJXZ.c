/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003A858
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180039FF4 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A1EC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18003B140 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18003CCD8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v9; // eax
  CBaseObject *v10; // rsi
  int v11; // eax
  __int64 v13; // rcx
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
            *((_DWORD *)this + 132),
            *((_DWORD *)this + 133),
            *((_DWORD *)this + 134),
            *((_DWORD *)this + 135),
            &v17);
    v1 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF5u);
      v3 = v17;
LABEL_13:
      if ( v3 )
        CBaseObject::Release(v3);
      return v1;
    }
    v3 = v17;
    v15 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 65), v17, &v18);
    v1 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFAu);
      v2 = v18;
    }
    else
    {
      v2 = v18;
      v16 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v18);
      v1 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xFCu);
    }
LABEL_11:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_13;
  }
  v6 = 0LL;
  v7 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v13 = *(_QWORD *)(v7 + 424);
      if ( v13 )
      {
        v6 = *(_QWORD *)(v13 + 32);
        goto LABEL_5;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_5;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 80LL);
        goto LABEL_5;
      }
    }
  }
  v6 = v7;
LABEL_5:
  v8 = *(_QWORD *)(v6 + 400);
  if ( v8 )
  {
    v9 = CDrawVisualTreeInstruction::Create(*(struct CVisual **)(v8 + 256), &v19);
    v10 = v19;
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x106u);
    }
    else
    {
      v11 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v19);
      v1 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x109u);
    }
    if ( v10 )
    {
      CBaseObject::Release(v10);
      goto LABEL_11;
    }
  }
  return v1;
}
