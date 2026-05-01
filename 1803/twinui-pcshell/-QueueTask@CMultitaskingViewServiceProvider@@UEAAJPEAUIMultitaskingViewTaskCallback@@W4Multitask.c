/*
 * XREFs of ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180267760
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x1800F8A74 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     shell::TaskScheduler::AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802666C8 (shell--TaskScheduler--AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x180267E78 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::QueueTask(_QWORD *a1, IUnknown *a2, char a3)
{
  int v6; // eax
  bool v7; // zf
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // ebx
  HWND ForegroundWindow; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  DWORD dwProcessId; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17; // [rsp+28h] [rbp-51h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  IUnknown *v19; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  int v22; // [rsp+50h] [rbp-29h]
  struct tagGUITHREADINFO pgui; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v21 = (unsigned __int64)(a1 + 2) & -(__int64)(a1 != (_QWORD *)96);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v21, 1);
  v7 = a1[8] == 0LL;
  v22 = v6;
  if ( v7 )
  {
    v8 = -2147019873;
    v9 = 194LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  if ( (a3 & 3) != 0 )
  {
    if ( (v10 = a3 & 2, (ForegroundWindow = GetForegroundWindow()) != 0LL)
      && GetWindowThreadProcessId(ForegroundWindow, &dwProcessId)
      && dwProcessId == GetCurrentProcessId()
      && !v10
      || (v12 = ForegroundStaging::SetActive((ForegroundStaging *)(a1 + 19)), v8 = v12, v12 >= 0) )
    {
      pgui.cbSize = 72;
      memset_0(&pgui.flags, 0, 0x44uLL);
      if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 4) != 0 )
        SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12);
    }
    if ( v8 < 0 )
    {
      v9 = 198LL;
      goto LABEL_16;
    }
  }
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v18);
  dwProcessId = 2;
  v19 = a2;
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v18);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          &v18,
          &GUID_0d1b8579_c52e_4207_89b3_9726ce949410,
          &v19,
          (int *)&dwProcessId);
  v8 = v13;
  if ( v13 >= 0 )
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v17);
    v19 = (IUnknown *)a1[8];
    dwProcessId = 2;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v17);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v17,
            &GUID_537b455d_1240_433b_82af_10929138b8be,
            &v19,
            (int *)&dwProcessId);
    v8 = v14;
    if ( v14 >= 0 )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v19, (const struct CMarshaledInterface *)&v18);
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)v20, (const struct CMarshaledInterface *)&v17);
      shell::TaskScheduler::AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___(a1[18], (__int64)&v19);
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)v20);
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)&v19);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v13);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)&v18);
LABEL_24:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v21);
  return (unsigned int)v8;
}
