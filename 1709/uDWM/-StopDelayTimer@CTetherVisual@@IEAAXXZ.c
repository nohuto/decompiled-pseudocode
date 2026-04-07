/*
 * XREFs of ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800881A8
 * Callers:
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x180088580 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180039F70 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

void __fastcall CTetherVisual::StopDelayTimer(CTetherVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 50);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 50) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  if ( !*((_QWORD *)this + 49) )
    CTouchVisual::UnRegisterGlobalTimer(this);
}
