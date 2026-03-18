/*
 * XREFs of ?DxgkGetBootAnimationRelayState@@YA?AW4_CDD_BOOT_ANIMATION_RELAY_STATE@@XZ @ 0x1C016F780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetBootAnimationRelayState(__int64 a1)
{
  return *((unsigned int *)DXGGLOBAL::GetGlobal(a1) + 283);
}
