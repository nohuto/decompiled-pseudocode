/*
 * XREFs of ?ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@@Z @ 0x1800C0E18
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180038004 (-SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CLinearGradientBrush::ProcessSetSurface(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEARGRADIENTBRUSH_SETSURFACE *a3)
{
  struct CResource *ResourceWithoutType; // rax
  int v6; // eax
  unsigned int v7; // esi
  int v8; // ecx
  int v10; // ecx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = CSurfaceBrush::SetSurface(this, ResourceWithoutType);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x67u);
    return v7;
  }
  *((float *)this + 30) = (float)*((int *)a3 + 3);
  *((float *)this + 31) = (float)*((int *)a3 + 4);
  *((float *)this + 32) = (float)*((int *)a3 + 5);
  *((float *)this + 33) = (float)*((int *)a3 + 6);
  *((_BYTE *)this + 153) = *((_DWORD *)a3 + 8) != 0;
  v8 = *((_DWORD *)a3 + 7);
  if ( !v8 )
    goto LABEL_3;
  v10 = v8 - 1;
  if ( !v10 )
  {
    *((_BYTE *)this + 152) = 3;
    goto LABEL_4;
  }
  if ( v10 == 1 )
    *((_BYTE *)this + 152) = 2;
  else
LABEL_3:
    *((_BYTE *)this + 152) = 1;
LABEL_4:
  CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
  return v7;
}
