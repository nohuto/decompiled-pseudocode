/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x18004E5A0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800479A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180055DE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180097670 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B3C40 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 v6; // rcx
  bool (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  bool (__fastcall *v13)(__int64, int); // rax
  char v14; // al
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  char v17; // al
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  char v20; // al

  v5 = 0;
  v6 = *((_QWORD *)this + 31);
  if ( v6 )
  {
    v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v6 + 48LL);
    if ( v8 == CCompositionSurfaceBitmap::IsOfType )
    {
      v9 = CCompositionSurfaceBitmap::IsOfType(v6, 106);
    }
    else if ( (char *)v8 == (char *)CRenderData::IsOfType )
    {
      v9 = CRenderData::IsOfType(v6, 106LL, a3, a4);
    }
    else if ( (char *)v8 == (char *)CAtlasedRectsGroup::IsOfType )
    {
      v9 = CAtlasedRectsGroup::IsOfType(v6, 106LL);
    }
    else if ( (char *)v8 == (char *)CPrimitiveGroup::IsOfType )
    {
      v9 = CPrimitiveGroup::IsOfType(v6, 106LL);
    }
    else
    {
      v9 = v8(v6, 106);
    }
    if ( v9 )
      return 1;
    v12 = *((_QWORD *)this + 31);
    if ( v12 )
    {
      v13 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 48LL);
      if ( v13 == CCompositionSurfaceBitmap::IsOfType )
      {
        v14 = CCompositionSurfaceBitmap::IsOfType(v12, 37);
      }
      else if ( (char *)v13 == (char *)CRenderData::IsOfType )
      {
        v14 = CRenderData::IsOfType(v12, 37LL, v10, v11);
      }
      else
      {
        v14 = (char *)v13 == (char *)CAtlasedRectsGroup::IsOfType
            ? CAtlasedRectsGroup::IsOfType(v12, 37LL)
            : v13(v12, 37);
      }
      if ( v14 )
        return 1;
    }
    v15 = *((_QWORD *)this + 31);
    if ( v15
      && ((v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL),
           (char *)v16 != (char *)CRenderData::IsOfType)
        ? (v16 != CAtlasedRectsGroup::IsOfType
         ? (v17 = v16(v15, 160LL))
         : (v17 = CAtlasedRectsGroup::IsOfType(v15, 160LL)))
        : (v17 = CRenderData::IsOfType(v15, 160LL, v10, v11)),
          v17) )
    {
      return 1;
    }
    else
    {
      v18 = *((_QWORD *)this + 31);
      if ( v18 )
      {
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL);
        if ( (char *)v19 == (char *)CRenderData::IsOfType )
        {
          v20 = CRenderData::IsOfType(v18, 119LL, v10, v11);
        }
        else if ( v19 == CAtlasedRectsGroup::IsOfType )
        {
          v20 = CAtlasedRectsGroup::IsOfType(v18, 119LL);
        }
        else
        {
          v20 = v19(v18, 119LL);
        }
        if ( v20 )
          return *(_BYTE *)(*((_QWORD *)this + 31) + 136LL);
      }
    }
  }
  return v5;
}
