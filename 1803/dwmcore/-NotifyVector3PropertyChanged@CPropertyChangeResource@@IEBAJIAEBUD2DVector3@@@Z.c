/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18002B158
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002AFE4 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B580 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180039200 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x18004A970 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004DA70 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18013CB74 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r10d
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r11
  unsigned int v14; // ecx
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v8 = *(_DWORD *)(v4 + 64);
    if ( _bittest(&v8, v7) )
    {
      v10 = *(_QWORD *)(v4 + 16);
      v15 = *v5;
      v11 = *(_QWORD *)(v10 + 1312);
      v16 = *((_DWORD *)v5 + 2);
      v12 = *(_QWORD *)(v6 + 48);
      v13 = *(_QWORD *)(v11 + 56);
      if ( v12 )
        v14 = *(_DWORD *)(v12 + 68);
      else
        v14 = 0;
      v17[0] = v14;
      v17[1] = *(unsigned int *)(v6 + 56);
      v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, unsigned int, __int64 *))CoreUICallSend)(
             v13,
             v17,
             2LL,
             12LL,
             2,
             &unk_180239CEA,
             v7,
             &v15);
      if ( v3 == -2018375675 )
        v3 = 0;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x11Fu);
    }
  }
  return (unsigned int)v3;
}
