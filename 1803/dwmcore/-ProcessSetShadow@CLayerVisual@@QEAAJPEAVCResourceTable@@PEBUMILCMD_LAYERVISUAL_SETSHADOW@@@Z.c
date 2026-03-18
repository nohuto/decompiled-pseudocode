/*
 * XREFs of ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x180198640
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetShadow(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_LAYERVISUAL_SETSHADOW *a3)
{
  unsigned int v5; // edi
  struct CResource *Resource; // rax
  struct CResource *v7; // rbp
  int v8; // eax

  v5 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x31u);
  v7 = Resource;
  if ( !*((_DWORD *)a3 + 2) || Resource )
  {
    if ( Resource != this[65] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6Fu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[65]);
        this[65] = v7;
        CVisual::PropagateFlags((__int64)this, 5u, 0);
      }
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x69u);
  }
  return v5;
}
