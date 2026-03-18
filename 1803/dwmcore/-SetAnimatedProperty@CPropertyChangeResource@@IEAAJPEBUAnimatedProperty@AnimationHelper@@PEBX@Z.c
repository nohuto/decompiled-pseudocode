/*
 * XREFs of ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B220
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B8A0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1800A6980 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 * Callees:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002AFE4 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006F990 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800C17DC (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyChangeResource::SetAnimatedProperty(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct _D3DCOLORVALUE *a3)
{
  char *v4; // rbp
  unsigned int v7; // edi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 Element; // rax
  _QWORD *v12; // rdx
  void (__fastcall *v13)(CPropertyChangeResource *, _QWORD, _QWORD); // rax
  int v14; // eax
  __int64 i; // r8
  __int64 v16; // rcx

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  v7 = 0;
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    v9 = *((_QWORD *)this + 5);
    v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
    Element = 0LL;
    if ( v9 )
      Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v9, *(unsigned int *)a2);
    v12 = (_QWORD *)((Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64));
    if ( v12 )
    {
      for ( i = 0LL;
            (unsigned int)i < *(_DWORD *)(((Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64))
                                        + 0x18);
            *(_QWORD *)(v16 + 272) = v10 )
      {
        v16 = *(_QWORD *)(*v12 + 8 * i);
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 424LL) |= 2u;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 104LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
        0LL,
        8LL);
    }
    v13 = *(void (__fastcall **)(CPropertyChangeResource *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL);
    if ( (char *)v13 == (char *)CResource::NotifyOnChanged )
    {
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
    else if ( (char *)v13 == (char *)CGeometry::NotifyOnChanged )
    {
      CGeometry::NotifyOnChanged(this, 0LL, 0LL);
    }
    else
    {
      v13(this, 0LL, 0LL);
    }
    v14 = CPropertyChangeResource::NotifyPropertyChanged(this, a2, a3);
    v7 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x68u);
  }
  return v7;
}
