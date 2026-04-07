/*
 * XREFs of ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x180089D40
 * Callers:
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x180089730 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x180089D00 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180039F70 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPressTapVisual::StopTimer(CPressTapVisual *this)
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
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
