/*
 * XREFs of ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x1802E9110
 * Callers:
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x1802E9110 (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 *     ?InitDropFeedback@JointResize@@AEAAJH@Z @ 0x1802E928C (-InitDropFeedback@JointResize@@AEAAJH@Z.c)
 *     ?OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z @ 0x1802E9960 (-OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_73ef71535b890153fa9387f7d486ec46___::Run @ 0x1802EA0E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_73ef71535b890153fa9387f7d486ec46___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___ @ 0x1802E83DC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___.c)
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x1802E9110 (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 */

__int64 __fastcall JointResize::HideDropFeedback(JointResize *this, char a2)
{
  CWinRTApplicationView **v3; // rsi
  char v4; // bp
  HWND v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  IUnknown *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int pvAttribute; // [rsp+68h] [rbp+10h] BYREF
  JointResize *v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      v3 = (CWinRTApplicationView **)((char *)this + 208);
      if ( !*((_QWORD *)this + 26) )
      {
        v4 = 1;
        if ( (int)DwmpBeginTransitionRequest(5LL) >= 0 )
        {
          v5 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 112LL))(*((_QWORD *)this + 22));
          DwmpTransitionWindowWithRects(v5, 26LL, 0LL, 0LL);
          pvAttribute = 1;
          DwmSetWindowAttribute(v5, 0xDu, &pvAttribute, 4u);
          DwmpEndTransitionRequest(5LL);
        }
        v13 = this;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
        v13 = this;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
        v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___(
               v7,
               v6,
               v3,
               &v13);
        if ( v8 >= 0 )
          v4 = 0;
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            595LL,
            (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v8);
        if ( v13 )
          (*(void (__fastcall **)(JointResize *))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v4 )
          JointResize::HideDropFeedback(this, 0);
        (*(void (__fastcall **)(JointResize *))(*(_QWORD *)this + 16LL))(this);
      }
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 26);
    v9 = (IUnknown *)*((_QWORD *)this + 22);
    if ( v9 )
    {
      IUnknown_SetSite(v9, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
    }
  }
  return 0LL;
}
