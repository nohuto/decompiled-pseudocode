/*
 * XREFs of ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180199E28
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z @ 0x1801995CC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z @ 0x1801997BC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18019B4E0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 *     ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18019BCA4 (-DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007A1EC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memcpy_s_1 @ 0x1801E2E64 (memcpy_s_1.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  int v3; // eax
  _BYTE Source[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 Destination; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Source[0] = (_BYTE)this;
  memcpy_s_1(&Destination, 8uLL, Source, 1uLL);
  v7[0] = Destination;
  Source[0] = a2;
  memcpy_s_1(&Destination, 8uLL, Source, 1uLL);
  v7[1] = Destination;
  v3 = RtlPublishWnfStateData(WNF_TKBN_KEYBOARD_SET_VISIBLE_NOTIFICATION, 0LL, v7, 16LL, 0LL);
  if ( v3 >= 0 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x1E7,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             (const char *)(unsigned int)v3);
}
