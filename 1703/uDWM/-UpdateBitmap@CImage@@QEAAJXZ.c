/*
 * XREFs of ?UpdateBitmap@CImage@@QEAAJXZ @ 0x180019464
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180019540 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18003BB64 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x180077AE0 (-CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z.c)
 */

__int64 __fastcall CImage::UpdateBitmap(struct CResource **this)
{
  CBaseObject *v1; // rsi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct CBitmapSource *v8; // rcx
  int v9; // eax
  int v10; // eax
  char *v12; // rbx
  int updated; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CRenderDataInstruction *v17; // [rsp+40h] [rbp+8h] BYREF
  struct CRenderDataInstruction *v18; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  v1 = 0LL;
  v18 = 0LL;
  if ( this[36] )
  {
    if ( this[35] )
    {
      v12 = (char *)(this + 39);
      if ( !this[39] )
        CVisual::SetDirtyFlags((CVisual *)this, 0x20u);
      updated = CBitmapSource::CreateOrUpdateImageBrush(this[35], this + 37, this + 38, v12, *((_DWORD *)this + 84));
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x7Cu);
        return v7;
      }
      if ( *((_DWORD *)this + 68) )
        return v7;
      v14 = CDrawGeometryInstruction::Create(this[37], this[36], &v18);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v1 = v18;
        v15 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v18);
        v7 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x86u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x84u);
        v1 = v18;
      }
      goto LABEL_17;
    }
    v16 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v7 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x8Bu);
  }
  else
  {
    v3 = this[37];
    if ( v3 )
    {
      CBaseObject::Release(v3);
      this[37] = 0LL;
    }
    v4 = this[38];
    if ( v4 )
    {
      CBaseObject::Release(v4);
      this[38] = 0LL;
    }
    v5 = this[39];
    if ( v5 )
    {
      CBaseObject::Release(v5);
      this[39] = 0LL;
    }
    v6 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x94u);
      return v7;
    }
    v8 = this[35];
    if ( v8 )
    {
      v9 = CDrawNineGridInstruction::Create(v8, &v17);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1E9u);
      if ( (v7 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x98u);
      }
      else
      {
        v10 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v17);
        v7 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x99u);
      }
      if ( v17 )
      {
        CBaseObject::Release(v17);
LABEL_17:
        if ( v1 )
          CBaseObject::Release(v1);
      }
    }
  }
  return v7;
}
