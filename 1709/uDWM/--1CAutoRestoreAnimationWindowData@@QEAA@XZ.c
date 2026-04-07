/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x180092948
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(
        CAutoRestoreAnimationWindowData *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 93);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 600) = *((_DWORD *)this + 150);
    *(_OWORD *)(*((_QWORD *)this + 93) + 604LL) = *(_OWORD *)((char *)this + 604);
    *(_OWORD *)(*((_QWORD *)this + 93) + 620LL) = *(_OWORD *)((char *)this + 620);
    *(_OWORD *)(*((_QWORD *)this + 93) + 636LL) = *(_OWORD *)((char *)this + 636);
    *(_OWORD *)(*((_QWORD *)this + 93) + 652LL) = *(_OWORD *)((char *)this + 652);
  }
  CWindowData::~CWindowData(this);
}
