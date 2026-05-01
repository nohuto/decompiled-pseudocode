/*
 * XREFs of ?SetRectLeftRight@CActionCenterExperienceManager@@AEAAXPEAUtagRECT@@H@Z @ 0x180099068
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x1800990F8 (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CActionCenterExperienceManager::SetRectLeftRight(
        CActionCenterExperienceManager *this,
        struct tagRECT *a2,
        int a3)
{
  LANGID ThreadUILanguage; // ax
  LONG right; // edx
  int LCData; // [rsp+48h] [rbp+20h] BYREF

  ThreadUILanguage = GetThreadUILanguage();
  if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, (LPWSTR)&LCData, 2) > 0 && LCData == 1 )
  {
    a2->right = a3 + a2->left + (int)*((float *)this + 131);
    a2->left += (int)*((float *)this + 131);
  }
  else
  {
    right = a2->right;
    a2->left = right - (int)*((float *)this + 131) - a3;
    a2->right = right - (int)*((float *)this + 131);
  }
}
