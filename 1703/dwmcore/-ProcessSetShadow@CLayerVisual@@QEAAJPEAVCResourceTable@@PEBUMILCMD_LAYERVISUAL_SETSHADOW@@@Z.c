/*
 * XREFs of ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x18012AF44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
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
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x7Eu);
  v7 = Resource;
  if ( !*((_DWORD *)a3 + 2) || Resource )
  {
    if ( Resource != this[62] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6Fu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[62]);
        this[62] = v7;
        CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0, 0);
      }
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x69u);
  }
  return v5;
}
