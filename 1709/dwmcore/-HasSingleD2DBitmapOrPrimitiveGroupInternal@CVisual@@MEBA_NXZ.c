/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180054A00
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D840 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800298A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006AE30 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B53B0 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  bool (__fastcall *v4)(__int64, int); // rax
  char v5; // al
  __int64 v6; // rcx
  bool (__fastcall *v7)(__int64, int); // rax
  char v8; // al
  __int64 v10; // rcx
  bool (__fastcall *v11)(__int64, int); // rax
  char v12; // al
  __int64 v13; // rcx
  bool (__fastcall *v14)(__int64, int); // rax
  char v15; // al

  v2 = 0;
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 48LL);
    if ( (char *)v4 == (char *)CPrimitiveGroupLayerClip::IsOfType )
    {
      v5 = CPrimitiveGroupLayerClip::IsOfType(v3, 98LL);
    }
    else if ( v4 == CCompositionSurfaceBitmap::IsOfType )
    {
      v5 = CCompositionSurfaceBitmap::IsOfType(v3, 98);
    }
    else if ( v4 == CRenderData::IsOfType )
    {
      v5 = CRenderData::IsOfType(v3, 98);
    }
    else if ( (char *)v4 == (char *)CAtlasedRectsGroup::IsOfType )
    {
      v5 = CAtlasedRectsGroup::IsOfType(v3, 98LL);
    }
    else
    {
      v5 = v4(v3, 98);
    }
    if ( v5 )
      return 1;
    v6 = *((_QWORD *)this + 30);
    if ( v6 )
    {
      v7 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v6 + 48LL);
      if ( v7 == CCompositionSurfaceBitmap::IsOfType )
      {
        v8 = CCompositionSurfaceBitmap::IsOfType(v6, 35);
      }
      else if ( v7 == CRenderData::IsOfType )
      {
        v8 = CRenderData::IsOfType(v6, 35);
      }
      else
      {
        v8 = (char *)v7 == (char *)CAtlasedRectsGroup::IsOfType ? CAtlasedRectsGroup::IsOfType(v6, 35LL) : v7(v6, 35);
      }
      if ( v8 )
        return 1;
    }
    v10 = *((_QWORD *)this + 30);
    if ( v10
      && ((v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 48LL), v11 != CRenderData::IsOfType)
        ? ((char *)v11 != (char *)CAtlasedRectsGroup::IsOfType
         ? (v12 = v11(v10, 140))
         : (v12 = CAtlasedRectsGroup::IsOfType(v10, 140LL)))
        : (v12 = CRenderData::IsOfType(v10, 140)),
          v12) )
    {
      return 1;
    }
    else
    {
      v13 = *((_QWORD *)this + 30);
      if ( v13 )
      {
        v14 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v13 + 48LL);
        if ( v14 == CRenderData::IsOfType )
        {
          v15 = CRenderData::IsOfType(v13, 107);
        }
        else if ( (char *)v14 == (char *)CAtlasedRectsGroup::IsOfType )
        {
          v15 = CAtlasedRectsGroup::IsOfType(v13, 107LL);
        }
        else
        {
          v15 = v14(v13, 107);
        }
        if ( v15 )
          return *(_BYTE *)(*((_QWORD *)this + 30) + 136LL);
      }
    }
  }
  return v2;
}
