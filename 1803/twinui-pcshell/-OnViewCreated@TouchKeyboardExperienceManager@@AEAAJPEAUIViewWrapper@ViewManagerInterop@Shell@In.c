/*
 * XREFs of ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18023FEE0
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180240060 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800A08D0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c3020acaf10c7144233ee4f2e713fc58___ @ 0x1800A0EC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_c3020acaf10c7144233ee4f2e713fc58___.c)
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::_lambda_c3020acaf10c7144233ee4f2e713fc58_ @ 0x1800A1168 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--_lambda_c3020acaf10c7144233ee4f2e713fc58_.c)
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_ @ 0x1800A11F8 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--__lambda_c3020acaf10c7144233ee4f2e713fc58_.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnViewCreated(
        TouchKeyboardExperienceManager *this,
        struct IUnknown *a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v5; // r14
  struct IUnknown ***v6; // rbx
  struct IUnknown ***v7; // rsi
  struct IUnknown ***v8; // rsi
  __int64 *v9; // rax
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v18[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v19[40]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  int v21; // [rsp+A0h] [rbp+38h] BYREF
  struct IUnknown *v22; // [rsp+A8h] [rbp+40h] BYREF
  __int64 value; // [rsp+B0h] [rbp+48h] BYREF
  char v24; // [rsp+B8h] [rbp+50h] BYREF

  value = a3.value;
  v22 = a2;
  v18[1] = (__int64 *)-2LL;
  v5 = (RTL_SRWLOCK *)((char *)this + 416);
  AcquireSRWLockShared((PSRWLOCK)this + 52);
  value = (__int64)v5;
  v6 = (struct IUnknown ***)*((_QWORD *)this + 53);
  v7 = (struct IUnknown ***)*((_QWORD *)this + 54);
  while ( v6 != v7 && !(unsigned int)SHIsSameObject(**v6, a2) )
    v6 += 2;
  v8 = (struct IUnknown ***)*((_QWORD *)this + 54);
  LOBYTE(value) = v6 != v8;
  LOBYTE(v21) = *((_QWORD *)this + 53) == (_QWORD)v8;
  if ( v5 )
    ReleaseSRWLockShared(v5);
  if ( v6 == v8 )
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v24);
    v18[0] = (__int64 *)&v24;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v18);
    v10 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = (unsigned int)v10;
      v13 = 1950LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v12);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v24);
      return (unsigned int)v11;
    }
    v18[0] = (__int64 *)this;
    v14 = lambda_c3020acaf10c7144233ee4f2e713fc58_::_lambda_c3020acaf10c7144233ee4f2e713fc58_(
            (__int64)v19,
            &v22,
            (__int64)&v24,
            v18,
            &v21,
            &value);
    v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_c3020acaf10c7144233ee4f2e713fc58___(
            v16,
            v15,
            *((_DWORD *)this + 190),
            v14);
    lambda_c3020acaf10c7144233ee4f2e713fc58_::__lambda_c3020acaf10c7144233ee4f2e713fc58_((__int64)v19);
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 2064LL;
      goto LABEL_12;
    }
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v24);
  }
  return 0LL;
}
