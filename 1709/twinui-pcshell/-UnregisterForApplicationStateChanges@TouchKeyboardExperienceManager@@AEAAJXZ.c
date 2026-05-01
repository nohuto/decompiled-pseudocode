/*
 * XREFs of ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C600
 * Callers:
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18019B1B0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18019BE38 (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     _lambda_3fdb60befb1dd70167fe026bdb430be3_::operator() @ 0x18019C298 (_lambda_3fdb60befb1dd70167fe026bdb430be3_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges(
        TouchKeyboardExperienceManager *this)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+18h] BYREF

  if ( !*((_DWORD *)this + 62) )
    return 0LL;
  v14 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  Instance = CoCreateInstance(
               &CLSID_ShellServiceHost,
               0LL,
               4u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v4 = Instance;
  if ( Instance >= 0 )
  {
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL))(
           v14,
           &SID_ProcessLifetimeManagerControl,
           &GUID_48f4e2d1_eeba_461e_8f8f_6353da1a3aca,
           &v13);
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = 1059LL;
      goto LABEL_8;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, *((unsigned int *)this + 62));
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = 1060LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      v7 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      goto LABEL_10;
    }
    *((_DWORD *)this + 62) = 0;
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x420,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)Instance);
LABEL_10:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v4;
}
