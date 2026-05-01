/*
 * XREFs of ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z @ 0x18016B734
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@UEAAJUTextRect@@@Z @ 0x18016B5E0 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@UEAAJUTextRect@@@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18016B6D0 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18016C210 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 *     ?_DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18016C3F0 (-_DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007759C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memcpy_s_1 @ 0x180194E4A (memcpy_s_1.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
        TouchKeyboardExperienceManager *this,
        char a2,
        char a3)
{
  int v4; // eax
  _BYTE Source[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 Destination; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Source[0] = a2;
  memcpy_s_1(&Destination, 8uLL, Source, 1uLL);
  v8[0] = Destination;
  Source[0] = a3;
  memcpy_s_1(&Destination, 8uLL, Source, 1uLL);
  v8[1] = Destination;
  v4 = RtlPublishWnfStateData(WNF_TKBN_KEYBOARD_SET_VISIBLE_NOTIFICATION, 0LL, v8, 16LL, 0LL);
  if ( v4 >= 0 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x152,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             (const char *)(unsigned int)v4);
}
