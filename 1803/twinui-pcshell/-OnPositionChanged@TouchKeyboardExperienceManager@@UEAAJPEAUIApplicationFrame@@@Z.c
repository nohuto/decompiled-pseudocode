/*
 * XREFs of ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18023FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800A08D0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6___ @ 0x1800A0BF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6___.c)
 *     _lambda_0b793df119bfe5dcf9aeba02981ffa9e_::_lambda_0b793df119bfe5dcf9aeba02981ffa9e_ @ 0x1800A10A8 (_lambda_0b793df119bfe5dcf9aeba02981ffa9e_--_lambda_0b793df119bfe5dcf9aeba02981ffa9e_.c)
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_ @ 0x1800A11F8 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--__lambda_c3020acaf10c7144233ee4f2e713fc58_.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EFB90 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18023D19C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnPositionChanged(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int64 *v3; // rdi
  int FrameWrapper; // ebx
  __int64 *v5; // rax
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  char v15; // [rsp+70h] [rbp+28h] BYREF
  struct IApplicationFrame *v16; // [rsp+78h] [rbp+30h] BYREF
  __int64 v17; // [rsp+80h] [rbp+38h] BYREF
  __int64 *v18; // [rsp+88h] [rbp+40h] BYREF

  v16 = a2;
  v17 = 0LL;
  v3 = (__int64 *)((char *)this - 120);
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, &v17);
  if ( FrameWrapper >= 0 )
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v15);
    v18 = (__int64 *)&v15;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
    v6 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)v3, v5);
    FrameWrapper = v6;
    if ( v6 >= 0 )
    {
      v18 = v3;
      v9 = lambda_0b793df119bfe5dcf9aeba02981ffa9e_::_lambda_0b793df119bfe5dcf9aeba02981ffa9e_(
             v13,
             &v16,
             (__int64)&v15,
             &v18);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6___(
                       v11,
                       v10,
                       *((_DWORD *)this + 160),
                       v9);
      lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_((__int64)v13);
      if ( FrameWrapper >= 0 )
      {
        FrameWrapper = 0;
        goto LABEL_8;
      }
      v7 = (unsigned int)FrameWrapper;
      v8 = 1213LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 1187LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v7);
LABEL_8:
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v15);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v17);
  return (unsigned int)FrameWrapper;
}
