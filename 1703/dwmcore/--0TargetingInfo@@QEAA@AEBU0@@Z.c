/*
 * XREFs of ??0TargetingInfo@@QEAA@AEBU0@@Z @ 0x180192404
 * Callers:
 *     ?GetCurrentFallbackTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180192F00 (-GetCurrentFallbackTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 *     ?GetCurrentTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180192F30 (-GetCurrentTarget@CManipulationContext@@UEBA-AUTargetingInfo@@XZ.c)
 *     ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x1801931BC (-InternalSetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

TargetingInfo *__fastcall TargetingInfo::TargetingInfo(TargetingInfo *this, const struct TargetingInfo *a2)
{
  __int64 (__fastcall ****v3)(_QWORD); // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 8);
  *v3 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v3);
  return this;
}
