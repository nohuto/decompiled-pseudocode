/*
 * XREFs of _lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_::operator() @ 0x1800A12B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6___::Run @ 0x1800A22E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6___--Run.c)
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
__int64 __fastcall lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_::operator()(
        Microsoft::WRL::Details::WeakReferenceImpl **a1)
{
  int v2; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int FrameWrapper; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1 + 1, &v10);
  v3 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1191LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v10 || !TouchKeyboardExperienceManager::IsFrameReady(v3, *a1) )
  {
    v5 = 0;
    goto LABEL_13;
  }
  v9 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[2], *a1, &v9);
  v5 = FrameWrapper;
  if ( FrameWrapper >= 0 )
  {
    FrameWrapper = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9);
    v5 = FrameWrapper;
    if ( FrameWrapper >= 0 )
    {
      v5 = 0;
      goto LABEL_11;
    }
    v6 = 1206LL;
  }
  else
  {
    v6 = 1204LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)FrameWrapper);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
LABEL_13:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v10);
  return v5;
}
