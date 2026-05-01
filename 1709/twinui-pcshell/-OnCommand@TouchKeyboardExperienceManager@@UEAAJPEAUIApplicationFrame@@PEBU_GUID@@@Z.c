/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18019B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180199E28 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@@Z @ 0x18019B620 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18019BA5C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18019DA14 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnCommand(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  TouchKeyboardExperienceManager *v5; // r14
  int FrameWrapper; // eax
  unsigned int v7; // edi
  struct IApplicationFrameWrapper *v8; // rbx
  int updated; // eax
  __int64 v10; // rdx
  struct IApplicationFrameWrapper *v12[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[1] = (struct IApplicationFrameWrapper *)-2LL;
  v12[0] = 0LL;
  v5 = (TouchKeyboardExperienceManager *)((char *)this - 120);
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((char *)this - 120, a2, v12);
  v7 = FrameWrapper;
  if ( FrameWrapper < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x30C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWrapper);
    v8 = v12[0];
    goto LABEL_17;
  }
  v8 = v12[0];
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand && *(_QWORD *)a3->Data4 == 0x575B26E93947F081LL )
  {
    updated = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v12[0] + 40LL))(
                v12[0],
                1LL);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 785LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_17;
    }
    updated = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(0LL, 1);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 786LL;
      goto LABEL_15;
    }
  }
  else if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand
         && *(_QWORD *)a3->Data4 == 0x789E03E893229A8ALL )
  {
    updated = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(a2, v12[0]);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 790LL;
      goto LABEL_15;
    }
    updated = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(v5, a2);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 791LL;
      goto LABEL_15;
    }
  }
  v7 = 0;
LABEL_17:
  if ( v8 )
    (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
