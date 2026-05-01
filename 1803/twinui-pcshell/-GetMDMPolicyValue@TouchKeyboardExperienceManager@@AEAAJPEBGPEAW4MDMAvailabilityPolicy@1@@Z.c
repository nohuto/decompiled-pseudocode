/*
 * XREFs of ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x18023E24C
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802437D8 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802439A8 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180243F48 (-UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802440D0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802443C4 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180244658 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802449FC (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180244B84 (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetMDMPolicyValue(
        TouchKeyboardExperienceManager *this,
        const unsigned __int16 *a2,
        enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *a3)
{
  int Policy; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v7[0] = 1;
  v7[1] = 2;
  Policy = PolicyManager_GetPolicy(L"TextInput", a2, v7, &v9);
  v5 = Policy;
  if ( Policy >= 0 )
  {
    result = 0LL;
    *(_DWORD *)a3 = *(_DWORD *)(v9 + 16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)Policy);
    return v5;
  }
  return result;
}
