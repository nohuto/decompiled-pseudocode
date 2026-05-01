/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x18023F990
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18024AE00 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800A08D0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5e1669f70f5e626cb13f0ae9b344f394___ @ 0x1800A0DA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_5e1669f70f5e626cb13f0ae9b344f394___.c)
 *     _lambda_5e1669f70f5e626cb13f0ae9b344f394_::_lambda_5e1669f70f5e626cb13f0ae9b344f394_ @ 0x1800A1134 (_lambda_5e1669f70f5e626cb13f0ae9b344f394_--_lambda_5e1669f70f5e626cb13f0ae9b344f394_.c)
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_ @ 0x1800A11F8 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--__lambda_c3020acaf10c7144233ee4f2e713fc58_.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(
        TouchKeyboardExperienceManager *this,
        int a2,
        char a3)
{
  __int64 *v4; // rax
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  _BYTE v15[32]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v17; // [rsp+88h] [rbp+28h] BYREF
  char v18; // [rsp+90h] [rbp+30h] BYREF
  char v19; // [rsp+98h] [rbp+38h] BYREF

  v18 = a3;
  v17 = a2;
  v14 = -2LL;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v19);
  *(_QWORD *)v13 = &v19;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v13);
  v5 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)v13 = this;
    v9 = lambda_5e1669f70f5e626cb13f0ae9b344f394_::_lambda_5e1669f70f5e626cb13f0ae9b344f394_(
           (__int64)v15,
           &v17,
           &v18,
           (__int64)&v19,
           v13);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_5e1669f70f5e626cb13f0ae9b344f394___(
           v11,
           v10,
           *((_DWORD *)this + 190),
           v9);
    lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_((__int64)v15);
    if ( v6 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = (unsigned int)v6;
    v8 = 420LL;
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 329LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v7);
LABEL_7:
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v19);
  return (unsigned int)v6;
}
