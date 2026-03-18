/*
 * XREFs of ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180177938
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@XZ @ 0x18011A500 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMR.c)
 */

__int64 __fastcall CVisual::ProcessSetColorTransform(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  struct CResource *ColorTransform; // rbp
  signed int v9; // eax
  struct CResource *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x14u)) != 0LL )
  {
    ColorTransform = (struct CResource *)CVisual::GetColorTransform((__int64)this);
    if ( Resource != ColorTransform )
    {
      v9 = CResource::RegisterNotifier(this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xADEu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, ColorTransform);
        v11 = Resource;
        if ( Resource == (struct CResource *)`CVisual::SetColorTransform'::`2'::sc_defaultValue )
          *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x20000000u;
        else
          CSparseStorage::SetData((CVisual *)((char *)this + 208), 3u, 8u, &v11);
        CVisual::PropagateFlags((__int64)this, 4u, 0);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xAD6u);
  }
  return v4;
}
