/*
 * XREFs of ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18016C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameRect@KBViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x18016AB9C (-GetFrameRect@KBViewInfo@@QEBAJPEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnChromeOffsetsChanged(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  int FrameRect; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 26);
  if ( !v3 || !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v3 + 24LL))(v3, a2) )
    return 2147942487LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 96LL))(*((_QWORD *)this + 26));
  v5 = v4;
  if ( v4 >= 0 )
  {
    FrameRect = KBViewInfo::GetFrameRect(
                  (TouchKeyboardExperienceManager *)((char *)this + 200),
                  (struct tagRECT *)((char *)this + 248));
    v8 = FrameRect;
    if ( FrameRect >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x264,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)FrameRect);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x262,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
