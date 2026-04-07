/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x180031B90
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180006C48 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  int v1; // eax
  CBaseObject *v2; // rsi
  struct CResource **v4; // rsi
  int v5; // eax
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int RectangleGeometry; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct CRenderDataInstruction *v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 20);
  v2 = 0LL;
  v17 = 0LL;
  if ( (v1 & 0x1000) == 0 )
  {
LABEL_12:
    v15 = CRenderDataVisual::ValidateVisual(this);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xABu);
    goto LABEL_13;
  }
  if ( *((_DWORD *)this + 68) )
  {
LABEL_11:
    *((_DWORD *)this + 20) = v1 & 0xFFFFEFFF;
    goto LABEL_12;
  }
  v4 = (struct CResource **)((char *)this + 304);
  v5 = *((_DWORD *)this + 86);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 87) - *((_DWORD *)this + 85);
  v8 = *((unsigned int *)this + 84);
  if ( v7 >= 0 )
    v6 = (unsigned int)v7;
  v9 = 0LL;
  v10 = v5 - v8;
  if ( v10 >= 0 )
    v9 = (unsigned int)v10;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v8, *((unsigned int *)this + 85), v9, v6, v4);
  v12 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xA3u);
    return v12;
  }
  v13 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 37), *v4, &v17);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA4u);
    v2 = v17;
  }
  else
  {
    v2 = v17;
    v14 = CRenderDataVisual::AddInstruction(this, v17);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v1 = *((_DWORD *)this + 20);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA5u);
  }
LABEL_13:
  if ( v2 )
    CBaseObject::Release(v2);
  return v12;
}
