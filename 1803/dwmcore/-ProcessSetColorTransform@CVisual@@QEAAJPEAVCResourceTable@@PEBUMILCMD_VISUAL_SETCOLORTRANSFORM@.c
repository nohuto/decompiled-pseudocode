/*
 * XREFs of ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801A83D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@XZ @ 0x18013C908 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMR.c)
 */

__int64 __fastcall CVisual::ProcessSetColorTransform(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rdi
  struct CResource *ColorTransform; // rbp
  int v9; // eax
  char **v10; // rcx
  struct CResource *v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x16u)) != 0LL )
  {
    ColorTransform = (struct CResource *)CVisual::GetColorTransform((__int64)this);
    if ( Resource != ColorTransform )
    {
      v9 = CResource::RegisterNotifier(this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB71u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, ColorTransform);
        v10 = (char **)((char *)this + 216);
        v12 = Resource;
        if ( Resource == (struct CResource *)`CVisual::SetColorTransform'::`2'::sc_defaultValue )
          *((_DWORD *)*v10 + 1) &= ~0x20000000u;
        else
          CSparseStorage::SetData(v10, 3, 8u, &v12);
        CVisual::PropagateFlags((__int64)this, 4u, 0);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xB69u);
  }
  return v4;
}
