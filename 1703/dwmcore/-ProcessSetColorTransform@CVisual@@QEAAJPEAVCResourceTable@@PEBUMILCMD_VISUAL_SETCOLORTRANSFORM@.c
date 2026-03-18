/*
 * XREFs of ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18012B0C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@XZ @ 0x18012B580 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMR.c)
 */

__int64 __fastcall CVisual::ProcessSetColorTransform(
        char **this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CResource *Resource; // rsi
  struct CResource *ColorTransform; // rbp
  int v9; // eax
  struct CResource *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( !(_DWORD)v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x39u)) != 0LL )
  {
    ColorTransform = (struct CResource *)CVisual::GetColorTransform(this, v5);
    if ( Resource != ColorTransform )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA98u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, ColorTransform);
        v11 = Resource;
        if ( Resource == (struct CResource *)`CVisual::SetColorTransform'::`2'::sc_defaultValue )
          *((_DWORD *)this[26] + 1) &= ~0x20000000u;
        else
          CSparseStorage::SetData(this + 26, 3, 8u, &v11);
        CVisual::PropagateFlags((struct CVisual *)this, 0, 1, 0, 0, 0, 0, 0);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA90u);
  }
  return v4;
}
