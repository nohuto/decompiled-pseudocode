/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180086C60
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037CE0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004CA70 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800846C0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AF020 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  _BOOL8 (__fastcall *v4)(__int64, int); // rax
  char v5; // al
  __int64 v7; // rcx
  _BOOL8 (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  __int64 v10; // rcx
  _BOOL8 (__fastcall *v11)(__int64, int); // rax
  char v12; // al
  __int64 v13; // rcx
  _BOOL8 (__fastcall *v14)(__int64, int); // rax
  char v15; // al

  v2 = 0;
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    v4 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 48LL);
    if ( (char *)v4 == (char *)CPrimitiveGroupLayerClip::IsOfType )
    {
      v5 = CPrimitiveGroupLayerClip::IsOfType(v3, 102LL);
    }
    else if ( v4 == CPrimitiveGroup::IsOfType )
    {
      v5 = CPrimitiveGroup::IsOfType(v3, 102);
    }
    else if ( v4 == CRenderData::IsOfType )
    {
      v5 = CRenderData::IsOfType(v3, 102);
    }
    else if ( v4 == CCompositionSurfaceBitmap::IsOfType )
    {
      v5 = CCompositionSurfaceBitmap::IsOfType(v3, 102);
    }
    else if ( (char *)v4 == (char *)CAtlasedRectsGroup::IsOfType )
    {
      v5 = CAtlasedRectsGroup::IsOfType(v3, 102LL);
    }
    else
    {
      v5 = v4(v3, 102);
    }
    if ( v5 )
      return 1;
    v7 = *((_QWORD *)this + 30);
    if ( v7 )
    {
      v8 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
      if ( v8 == CRenderData::IsOfType )
      {
        v9 = CRenderData::IsOfType(v7, 97);
      }
      else if ( v8 == CCompositionSurfaceBitmap::IsOfType )
      {
        v9 = CCompositionSurfaceBitmap::IsOfType(v7, 97);
      }
      else
      {
        v9 = (char *)v8 == (char *)CAtlasedRectsGroup::IsOfType ? CAtlasedRectsGroup::IsOfType(v7, 97LL) : v8(v7, 97);
      }
      if ( v9 )
        return 1;
    }
    v10 = *((_QWORD *)this + 30);
    if ( v10
      && ((v11 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 48LL), v11 != CRenderData::IsOfType)
        ? ((char *)v11 != (char *)CAtlasedRectsGroup::IsOfType
         ? (v12 = v11(v10, 105))
         : (v12 = CAtlasedRectsGroup::IsOfType(v10, 105LL)))
        : (v12 = CRenderData::IsOfType(v10, 105)),
          v12) )
    {
      return 1;
    }
    else
    {
      v13 = *((_QWORD *)this + 30);
      if ( v13 )
      {
        v14 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v13 + 48LL);
        if ( v14 == CRenderData::IsOfType )
        {
          v15 = CRenderData::IsOfType(v13, 35);
        }
        else if ( (char *)v14 == (char *)CAtlasedRectsGroup::IsOfType )
        {
          v15 = CAtlasedRectsGroup::IsOfType(v13, 35LL);
        }
        else
        {
          v15 = v14(v13, 35);
        }
        if ( v15 )
          return *(_BYTE *)(*((_QWORD *)this + 30) + 137LL);
      }
    }
  }
  return v2;
}
