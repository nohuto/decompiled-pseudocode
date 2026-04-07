/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x180097850
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800997E0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 150) = *((_DWORD *)a3 + 150);
  *(_OWORD *)((char *)this + 604) = *(_OWORD *)((char *)a3 + 604);
  *(_OWORD *)((char *)this + 620) = *(_OWORD *)((char *)a3 + 620);
  *(_OWORD *)((char *)this + 636) = *(_OWORD *)((char *)a3 + 636);
  *(_OWORD *)((char *)this + 652) = *(_OWORD *)((char *)a3 + 652);
  *((_DWORD *)a3 + 150) = *((_DWORD *)a2 + 150);
  *(_OWORD *)((char *)a3 + 604) = *(_OWORD *)((char *)a2 + 604);
  *(_OWORD *)((char *)a3 + 620) = *(_OWORD *)((char *)a2 + 620);
  *(_OWORD *)((char *)a3 + 636) = *(_OWORD *)((char *)a2 + 636);
  *(_OWORD *)((char *)a3 + 652) = *(_OWORD *)((char *)a2 + 652);
  *((_QWORD *)this + 93) = a3;
}
