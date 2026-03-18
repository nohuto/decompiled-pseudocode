/*
 * XREFs of ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18002B318
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002AFE4 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B600 (-SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180039200 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x18004A970 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004D92C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097090 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyScalarPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        float a3)
{
  __int64 v3; // r8
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 6);
  v5 = 0;
  if ( v3 )
    v6 = *(_DWORD *)(v3 + 68);
  else
    v6 = 0;
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 14);
    if ( (_DWORD)v7 )
    {
      v8 = *((_DWORD *)this + 16);
      if ( _bittest(&v8, a2) )
      {
        v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 1312LL);
        if ( v3 )
          v11 = *(unsigned int *)(v3 + 68);
        else
          v11 = 0LL;
        v12 = *(_QWORD *)(v10 + 56);
        v13[1] = v7;
        v13[0] = v11;
        v5 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, _WORD, void *, unsigned int, _QWORD))CoreUICallSend)(
               v12,
               v13,
               2LL,
               12LL,
               0,
               &unk_180239CE0,
               a2,
               a3);
        if ( v5 == -2018375675 )
          v5 = 0;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC5u);
      }
    }
  }
  return (unsigned int)v5;
}
