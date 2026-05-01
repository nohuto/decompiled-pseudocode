/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18023FB50
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18024B390 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800A08D0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_114373a7e1561dd71911e06c6b6df4ef___ @ 0x1800A0D18 (Windows--Internal--ComTaskPool--QueueTask__lambda_114373a7e1561dd71911e06c6b6df4ef___.c)
 *     _lambda_114373a7e1561dd71911e06c6b6df4ef_::_lambda_114373a7e1561dd71911e06c6b6df4ef_ @ 0x1800A10E0 (_lambda_114373a7e1561dd71911e06c6b6df4ef_--_lambda_114373a7e1561dd71911e06c6b6df4ef_.c)
 *     _lambda_114373a7e1561dd71911e06c6b6df4ef_::__lambda_114373a7e1561dd71911e06c6b6df4ef_ @ 0x1800A11EC (_lambda_114373a7e1561dd71911e06c6b6df4ef_--__lambda_114373a7e1561dd71911e06c6b6df4ef_.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 TouchKeyboardExperienceManager::OnInputAppRequestedShow(
        TouchKeyboardExperienceManager *this,
        int a2,
        struct tagRECT *a3,
        char a4,
        bool a5,
        ...)
{
  __int64 *v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v16[8]; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v19[2]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v20[40]; // [rsp+68h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  va_list va; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va, a5);
  v19[1] = (__int64 *)-2LL;
  v17 = a2;
  v16[0] = a4;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)v18);
  v19[0] = (__int64 *)v18;
  v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v19);
  v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v19[0] = (__int64 *)this;
    v12 = lambda_114373a7e1561dd71911e06c6b6df4ef_::_lambda_114373a7e1561dd71911e06c6b6df4ef_(
            (__int64)v20,
            &v17,
            a3,
            v16,
            &a5,
            (bool *)va,
            (__int64)v18,
            v19);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_114373a7e1561dd71911e06c6b6df4ef___(
           v14,
           v13,
           *((_DWORD *)this + 190),
           v12);
    lambda_114373a7e1561dd71911e06c6b6df4ef_::__lambda_114373a7e1561dd71911e06c6b6df4ef_((__int64)v20);
    if ( v9 >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = (unsigned int)v9;
    v11 = 322LL;
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 249LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v10);
LABEL_7:
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)v18);
  return (unsigned int)v9;
}
