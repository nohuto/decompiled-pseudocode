/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180080350
 * Callers:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x18008025C (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800FC7E4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800FFAF0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180140778 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1802ECA6C (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x180303104 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 *     Str_SetPtrW @ 0x18030A8C0 (Str_SetPtrW.c)
 *     s_DrawGlyph @ 0x18030CCFC (s_DrawGlyph.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x18008038C (StringCopyWorkerW_0.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW_0(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
