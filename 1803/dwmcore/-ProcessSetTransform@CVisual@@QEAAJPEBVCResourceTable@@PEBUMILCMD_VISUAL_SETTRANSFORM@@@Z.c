/*
 * XREFs of ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x180050CE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18004FF50 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTransform(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORM *a3)
{
  struct CTransform3D *Resource; // rax
  unsigned int v5; // edx
  int v7; // eax
  unsigned int v8; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CTransform3D *)CResourceTable::GetResource((__int64)a2, v5, 0x8Fu)) != 0LL )
  {
    v7 = CVisual::SetTransform(this, Resource);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x8EBu);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x8E7u);
  }
  return v8;
}
