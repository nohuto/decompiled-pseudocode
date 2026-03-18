/*
 * XREFs of ?ProcessSetTransform@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETTRANSFORM@@@Z @ 0x180186344
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  int v8; // eax
  struct CResource *v9; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x8Fu)) != 0LL )
  {
    if ( Resource != this[10] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x265u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
        v9 = *this;
        this[10] = Resource;
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v9 + 8))(this, 0LL, 0LL);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x25Fu);
  }
  return v4;
}
