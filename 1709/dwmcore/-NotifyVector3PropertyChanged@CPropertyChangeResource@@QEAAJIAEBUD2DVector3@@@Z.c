/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004FB00 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z @ 0x180054090 (-NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095CE8 (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095DE4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095E6C (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18011A87C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180096234 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  signed int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

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
    v3 = CoreUICallSend(v7, v9, 2LL, 8LL, 2, &unk_1801F0575);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xD1u);
  }
  return (unsigned int)v3;
}
