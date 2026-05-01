/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18023F580
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800A08D0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f0bf810a5d9c986258710a4a09c5f600___ @ 0x1800A0F50 (Windows--Internal--ComTaskPool--QueueTask__lambda_f0bf810a5d9c986258710a4a09c5f600___.c)
 *     _lambda_f0bf810a5d9c986258710a4a09c5f600_::_lambda_f0bf810a5d9c986258710a4a09c5f600_ @ 0x1800A11B4 (_lambda_f0bf810a5d9c986258710a4a09c5f600_--_lambda_f0bf810a5d9c986258710a4a09c5f600_.c)
 *     _lambda_f0bf810a5d9c986258710a4a09c5f600_::__lambda_f0bf810a5d9c986258710a4a09c5f600_ @ 0x1800A1204 (_lambda_f0bf810a5d9c986258710a4a09c5f600_--__lambda_f0bf810a5d9c986258710a4a09c5f600_.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EFB90 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x1800FBF04 (--8@YA_NAEBU_GUID@@0@Z.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18023D19C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnCommand(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        struct _GUID *a3)
{
  char *v5; // rsi
  int FrameWrapper; // ebx
  _QWORD *v7; // rcx
  __int64 *v8; // rax
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  _QWORD v18[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v20; // [rsp+90h] [rbp+30h] BYREF
  struct IApplicationFrame *v21; // [rsp+98h] [rbp+38h] BYREF
  const struct _GUID *v22; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF

  v22 = a3;
  v21 = a2;
  v17 = -2LL;
  v23 = 0LL;
  v5 = (char *)this - 120;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, &v23);
  if ( FrameWrapper >= 0 )
  {
    if ( operator==(a3, &ApplicationFrameCloseCommand) || operator==(v7, &ApplicationFrameExitedSizeMoveCommand) )
    {
      Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v20);
      *(_QWORD *)v16 = &v20;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v16);
      v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)v5, v8);
      FrameWrapper = v9;
      if ( v9 < 0 )
      {
        v10 = (unsigned int)v9;
        v11 = 1231LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)v10);
        Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v20);
        goto LABEL_11;
      }
      *(_QWORD *)v16 = v5;
      v12 = lambda_f0bf810a5d9c986258710a4a09c5f600_::_lambda_f0bf810a5d9c986258710a4a09c5f600_(
              v18,
              &v21,
              &v22,
              (__int64)&v20,
              v16);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_f0bf810a5d9c986258710a4a09c5f600___(
                       v14,
                       v13,
                       *((_DWORD *)this + 160),
                       v12);
      lambda_f0bf810a5d9c986258710a4a09c5f600_::__lambda_f0bf810a5d9c986258710a4a09c5f600_((__int64)v18);
      if ( FrameWrapper < 0 )
      {
        v10 = (unsigned int)FrameWrapper;
        v11 = 1265LL;
        goto LABEL_8;
      }
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v20);
    }
    FrameWrapper = 0;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v23);
  return (unsigned int)FrameWrapper;
}
