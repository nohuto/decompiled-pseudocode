/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18000C720
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000C1A0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  CBaseObject *v1; // rsi
  bool v3; // zf
  struct CResource **v4; // rsi
  int v5; // ecx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r8
  int RectangleGeometry; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CRenderDataInstruction *v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v15 = 0LL;
  if ( v3 )
  {
LABEL_11:
    v13 = CRenderDataVisual::ValidateVisual(this);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xABu);
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
  v6 = 0LL;
  v7 = *((_DWORD *)this + 86) - *((_DWORD *)this + 84);
  if ( v5 >= 0 )
    v6 = (unsigned int)v5;
  v8 = 0LL;
  if ( v7 >= 0 )
    v8 = (unsigned int)v7;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        *((unsigned int *)this + 84),
                        *((unsigned int *)this + 85),
                        v8,
                        v6,
                        (struct CResource **)this + 38);
  v10 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xA3u);
    return v10;
  }
  v11 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 37), *v4, &v15);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA4u);
    v1 = v15;
  }
  else
  {
    v1 = v15;
    v12 = CRenderDataVisual::AddInstruction(this, v15);
    v10 = v12;
    if ( v12 >= 0 )
      goto LABEL_10;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xA5u);
  }
LABEL_12:
  if ( v1 )
    CBaseObject::Release(v1);
  return v10;
}
