/*
 * XREFs of ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x180051D14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18005111C (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTransform(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORM *a3)
{
  struct CTransform3D *Resource; // rax
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CTransform3D *)CResourceTable::GetResource(a2, v5, 128LL)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x85Eu);
  }
  else
  {
    v7 = CVisual::SetTransform(this, Resource);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x862u);
  }
  return v8;
}
