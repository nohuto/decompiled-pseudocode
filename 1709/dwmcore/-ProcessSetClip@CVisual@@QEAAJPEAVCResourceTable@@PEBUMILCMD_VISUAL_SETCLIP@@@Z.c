/*
 * XREFs of ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x1800516B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180051044 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetClip(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCLIP *a3)
{
  struct CGeometry *Resource; // rax
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 && (Resource = (struct CGeometry *)CResourceTable::GetResource(a2, v5, 55LL)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x93Eu);
  }
  else
  {
    v7 = CVisual::SetClip(this, Resource);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x942u);
  }
  return v8;
}
