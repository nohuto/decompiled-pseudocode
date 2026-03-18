/*
 * XREFs of ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180096504
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004F95C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z @ 0x180054090 (-NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z.c)
 *     ?SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x1800586E0 (-SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180058720 (-SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180058760 (-SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800587A0 (-SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x1800587E0 (-SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180058820 (-SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180058860 (-SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800588A0 (-SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottom@CRectangleGeometry@@AEAAJM@Z @ 0x1800588E0 (-SetBottom@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetRight@CRectangleGeometry@@AEAAJM@Z @ 0x180058950 (-SetRight@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTop@CRectangleGeometry@@AEAAJM@Z @ 0x1800589C0 (-SetTop@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetLeft@CRectangleGeometry@@AEAAJM@Z @ 0x180058A30 (-SetLeft@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJM@Z @ 0x18009541C (-SetRotationAngle@CComponentTransform2D@@AEAAJM@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x180095C3C (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEAAJI@Z @ 0x180159E90 (-NotifyCurrentPropertyValues@CComponentTransform2D@@MEAAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CRectangleGeometry@@MEAAJI@Z @ 0x1801756D0 (-NotifyCurrentPropertyValues@CRectangleGeometry@@MEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180096234 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyScalarPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        float a3)
{
  signed int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // r10
  unsigned int v8; // edx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v6 = *(_QWORD *)(v4 + 48);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1288LL) + 56LL);
    if ( v6 )
      v8 = *(_DWORD *)(v6 + 68);
    else
      v8 = 0;
    v9[0] = v8;
    v9[1] = *(unsigned int *)(v4 + 56);
    v3 = CoreUICallSend(v7, v9, 2LL, 8LL, 0, &unk_1801F056B);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x77u);
  }
  return (unsigned int)v3;
}
