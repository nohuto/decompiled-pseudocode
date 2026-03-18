/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x18002ADE0
 * Callers:
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BDA4 (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BEA0 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BF28 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180085158 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180088104 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int v6; // r10d
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned int v11; // ecx
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF

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
      v3 = CoreUICallSend(v10, v12, 2LL, 7LL, 2, &unk_1801D5430);
      if ( v3 == -2018375675 )
        v3 = 0;
      if ( v3 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD1u);
    }
  }
  return (unsigned int)v3;
}
