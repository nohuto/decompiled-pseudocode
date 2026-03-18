/*
 * XREFs of ?ProcessSetLight@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETLIGHT@@@Z @ 0x1801A2224
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifierForShadows@CProjectedShadowScene@@QEAAJPEAVCResource@@@Z @ 0x1801A22C0 (-RegisterNotifierForShadows@CProjectedShadowScene@@QEAAJPEAVCResource@@@Z.c)
 *     ?UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z @ 0x1801A235C (-UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetLight(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETLIGHT *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  int v8; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x20u)) != 0LL )
  {
    if ( Resource != this[10] )
    {
      v8 = CProjectedShadowScene::RegisterNotifierForShadows((CProjectedShadowScene *)this, Resource);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xA3u);
      }
      else
      {
        CProjectedShadowScene::UnRegisterNotifierForShadows((CProjectedShadowScene *)this, this[10]);
        this[10] = Resource;
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x9Du);
  }
  return v4;
}
