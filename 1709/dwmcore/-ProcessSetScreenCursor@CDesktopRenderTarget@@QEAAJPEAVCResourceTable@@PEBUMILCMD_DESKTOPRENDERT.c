/*
 * XREFs of ?ProcessSetScreenCursor@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR@@@Z @ 0x1801342BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ApplyMitState@CScreenCursor@@QEAAJXZ @ 0x18017D344 (-ApplyMitState@CScreenCursor@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetScreenCursor(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  signed int v9; // eax

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[51]);
  this[51] = 0LL;
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v7, 0x74u);
    if ( Resource )
    {
      this[51] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      if ( CCommonRegistryData::m_fConfigureInput )
      {
        v9 = CScreenCursor::ApplyMitState(this[51]);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x614u);
        else
          *((_BYTE *)this + 315) = 1;
      }
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x60Bu);
    }
  }
  return v6;
}
