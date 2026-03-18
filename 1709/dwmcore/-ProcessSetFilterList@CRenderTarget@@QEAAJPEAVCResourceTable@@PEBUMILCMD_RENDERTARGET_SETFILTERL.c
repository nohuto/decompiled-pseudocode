/*
 * XREFs of ?ProcessSetFilterList@CRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETFILTERLIST@@@Z @ 0x18013A1C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_SETFILTERLIST *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  signed int v8; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x88u);
  if ( Resource != this[12] )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xEEu);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
      this[12] = Resource;
    }
  }
  return v4;
}
