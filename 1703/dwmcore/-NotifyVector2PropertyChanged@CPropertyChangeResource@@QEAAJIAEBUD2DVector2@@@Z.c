/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18002AD1C
 * Callers:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180013030 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18002C024 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18008804C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetScale@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC364 (-SetScale@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetOffset@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC3C4 (-SetOffset@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC424 (-SetCenter@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC484 (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector2 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int v6; // r10d
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned int v11; // ecx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v7 = *(_DWORD *)(v4 + 64);
    if ( _bittest(&v7, v6) )
    {
      v9 = *(_QWORD *)(v5 + 48);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1352LL) + 56LL);
      if ( v9 )
        v11 = *(_DWORD *)(v9 + 60);
      else
        v11 = 0;
      v12[0] = v11;
      v12[1] = *(unsigned int *)(v5 + 56);
      v3 = CoreUICallSend(v10, v12, 2LL, 7LL, 1, &unk_1801D542A);
      if ( v3 == -2018375675 )
        v3 = 0;
      if ( v3 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xA4u);
    }
  }
  return (unsigned int)v3;
}
