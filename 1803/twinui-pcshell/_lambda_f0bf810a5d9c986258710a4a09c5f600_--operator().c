/*
 * XREFs of _lambda_f0bf810a5d9c986258710a4a09c5f600_::operator() @ 0x1800A2034
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f0bf810a5d9c986258710a4a09c5f600___::Run @ 0x1800A2340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f0bf810a5d9c986258710a4a09c5f600___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18023D19C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18023E788 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@@Z @ 0x18023E920 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18023EF08 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18030B910 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_f0bf810a5d9c986258710a4a09c5f600_::operator()(
        Microsoft::WRL::Details::WeakReferenceImpl **a1)
{
  int v2; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int FrameWrapper; // ebx
  Microsoft::WRL::Details::WeakReferenceImpl *v5; // rcx
  int updated; // eax
  bool v7; // r8
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationFrameWrapper *v11; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1 + 2, &v12);
  v3 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1235LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v12 || !TouchKeyboardExperienceManager::IsFrameReady(v3, *a1) )
  {
    FrameWrapper = 0;
    goto LABEL_21;
  }
  v11 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[3], *a1, &v11);
  if ( FrameWrapper >= 0 )
  {
    v5 = a1[1];
    if ( *(_QWORD *)v5 == ApplicationFrameCloseCommand && *((_QWORD *)v5 + 1) == 0x575B26E93947F081LL )
    {
      updated = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v11 + 40LL))(
                  v11,
                  1LL);
      FrameWrapper = updated;
      if ( updated < 0 )
      {
        v8 = 1253LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        goto LABEL_12;
      }
      IhmNotification::SendKeyboardSetVisible(0LL, 1, v7);
    }
    else if ( *(_QWORD *)v5 == ApplicationFrameExitedSizeMoveCommand && *((_QWORD *)v5 + 1) == 0x789E03E893229A8ALL )
    {
      updated = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(*a1, v11);
      FrameWrapper = updated;
      if ( updated < 0 )
      {
        v8 = 1258LL;
        goto LABEL_19;
      }
      updated = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(a1[3], *a1);
      FrameWrapper = updated;
      if ( updated < 0 )
      {
        v8 = 1259LL;
        goto LABEL_19;
      }
    }
    FrameWrapper = 0;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
LABEL_21:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v12);
  return (unsigned int)FrameWrapper;
}
