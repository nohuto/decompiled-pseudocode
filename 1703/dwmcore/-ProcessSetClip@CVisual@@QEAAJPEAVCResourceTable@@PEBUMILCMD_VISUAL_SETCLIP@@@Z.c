/*
 * XREFs of ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x180085980
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18008524C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetClip(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCLIP *a3)
{
  struct CGeometry *Resource; // rax
  unsigned int v5; // edx
  int v7; // eax
  unsigned int v8; // ebx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 && (Resource = (struct CGeometry *)CResourceTable::GetResource((__int64)a2, v5, 0x46u)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x910u);
  }
  else
  {
    v7 = CVisual::SetClip(this, Resource);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x914u);
  }
  return v8;
}
