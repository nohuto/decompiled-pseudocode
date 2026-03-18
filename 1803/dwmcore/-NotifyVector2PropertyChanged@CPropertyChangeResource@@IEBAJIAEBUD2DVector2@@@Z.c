/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18002AF20
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002AFE4 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180039200 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x18004A970 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004D9D4 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18013CC48 (-SetSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector2 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r10d
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // r11
  unsigned int v12; // ecx
  __int64 v13; // xmm0_8
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v8 = *(_DWORD *)(v4 + 64);
    if ( _bittest(&v8, v7) )
    {
      v10 = *(_QWORD *)(v6 + 48);
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1312LL) + 56LL);
      if ( v10 )
        v12 = *(_DWORD *)(v10 + 68);
      else
        v12 = 0;
      v13 = *v5;
      v14[0] = v12;
      v14[1] = *(unsigned int *)(v6 + 56);
      v15 = v13;
      v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, unsigned int, __int64 *))CoreUICallSend)(
             v11,
             v14,
             2LL,
             12LL,
             1,
             &unk_180239CE4,
             v7,
             &v15);
      if ( v3 == -2018375675 )
        v3 = 0;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xF2u);
    }
  }
  return (unsigned int)v3;
}
