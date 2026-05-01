/*
 * XREFs of _lambda_0b793df119bfe5dcf9aeba02981ffa9e_::operator() @ 0x1800A139C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b793df119bfe5dcf9aeba02981ffa9e___::Run @ 0x1800A22F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b793df119bfe5dcf9aeba02981ffa9e___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18023D19C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18023E788 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0b793df119bfe5dcf9aeba02981ffa9e_::operator()(struct IApplicationFrame **a1)
{
  int v2; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int FrameWrapper; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1 + 1, &v9);
  v3 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1361LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( v9 && TouchKeyboardExperienceManager::IsFrameReady(v3, *a1) )
  {
    v8 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[2], *a1, &v8);
    if ( FrameWrapper >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
      FrameWrapper = v5;
      if ( v5 >= 0 )
        FrameWrapper = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55F,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  else
  {
    FrameWrapper = 0;
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v9);
  return (unsigned int)FrameWrapper;
}
