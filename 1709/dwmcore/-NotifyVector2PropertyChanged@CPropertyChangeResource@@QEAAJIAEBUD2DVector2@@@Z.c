/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180096408
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004FA64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z @ 0x180054090 (-NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z.c)
 *     ?SetScale@CComponentTransform2D@@AEAAJMM@Z @ 0x18009545C (-SetScale@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetOffset@CComponentTransform2D@@AEAAJMM@Z @ 0x1800954BC (-SetOffset@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x18009551C (-SetCenter@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x18009557C (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x180095F1C (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011A7EC (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEAAJI@Z @ 0x180159E90 (-NotifyCurrentPropertyValues@CComponentTransform2D@@MEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180096234 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector2 *a3)
{
  signed int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // r11
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
    v3 = CoreUICallSend(v7, v9, 2LL, 8LL, 1, &unk_1801F056F);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xA4u);
  }
  return (unsigned int)v3;
}
