/*
 * XREFs of ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x180092310
 * Callers:
 *     ??1CFlickVisual@@MEAA@XZ @ 0x180091CB8 (--1CFlickVisual@@MEAA@XZ.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800922A0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18003DCC4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CFlickVisual::StopTimer(CFlickVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 44);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 44) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
