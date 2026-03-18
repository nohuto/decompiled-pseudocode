/*
 * XREFs of ?DestroySchLog@VIDMM_SCH_LOG@@SAXPEAV1@@Z @ 0x1C0035854
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C00354F4 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_SCH_LOG::DestroySchLog(struct VIDMM_SCH_LOG *a1)
{
  if ( a1 )
    VIDMM_SCH_LOG::`scalar deleting destructor'(a1);
}
