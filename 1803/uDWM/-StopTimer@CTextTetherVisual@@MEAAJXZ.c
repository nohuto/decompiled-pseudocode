/*
 * XREFs of ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x18008E730
 * Callers:
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18008E6D0 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18003DCC4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::StopTimer(CTextTetherVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 37);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 37) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
