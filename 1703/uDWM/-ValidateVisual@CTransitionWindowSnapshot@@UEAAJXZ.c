/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18003CCD8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  CBaseObject *v1; // rsi
  bool v3; // zf
  struct CResource **v4; // rsi
  int v5; // ecx
  int v6; // r9d
  int v7; // r8d
  int RectangleGeometry; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct CRenderDataInstruction *v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v14 = 0LL;
  if ( v3 )
  {
LABEL_11:
    v12 = CRenderDataVisual::ValidateVisual(this);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xABu);
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 68) )
  {
LABEL_10:
    *((_DWORD *)this + 20) &= ~0x1000u;
    goto LABEL_11;
  }
  v4 = (struct CResource **)((char *)this + 304);
  v5 = *((_DWORD *)this + 87) - *((_DWORD *)this + 85);
  v6 = 0;
  if ( v5 >= 0 )
    v6 = v5;
  v7 = 0;
  if ( *((_DWORD *)this + 86) - *((_DWORD *)this + 84) >= 0 )
    v7 = *((_DWORD *)this + 86) - *((_DWORD *)this + 84);
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        *((_DWORD *)this + 84),
                        *((_DWORD *)this + 85),
                        v7,
                        v6,
                        (struct CResource **)this + 38);
  v9 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleGeometry, 0xA3u);
    return v9;
  }
  v10 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 37), *v4, &v14);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA4u);
    v1 = v14;
  }
  else
  {
    v1 = v14;
    v11 = CRenderDataVisual::AddInstruction(this, v14);
    v9 = v11;
    if ( v11 >= 0 )
      goto LABEL_10;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA5u);
  }
LABEL_12:
  if ( v1 )
    CBaseObject::Release(v1);
  return v9;
}
