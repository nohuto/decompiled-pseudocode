/*
 * XREFs of ?ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS@@@Z @ 0x1801A6A14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x1800115D8 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CTileLegacyMilBrush::ProcessSetSourceModifications(
        CTileLegacyMilBrush *this,
        const struct CResourceTable *a2,
        const struct MILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS *a3)
{
  __int64 v3; // r11
  __int64 v4; // r10

  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 2);
  Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), (struct _D3DCOLORVALUE *)((char *)this + 72));
  Convert_MilColorB_sRGB_To_MilColorF_scRGB(*(_DWORD *)(v3 + 16), (struct _D3DCOLORVALUE *)(v4 + 88));
  return 0LL;
}
