/*
 * XREFs of ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18019BE38
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1801990C8 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C600 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::TerminateInputApplication(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v26; // [rsp+90h] [rbp+40h] BYREF
  int v27; // [rsp+98h] [rbp+48h] BYREF

  v24[1] = -2LL;
  v24[0] = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v24);
  Instance = CoCreateInstance(
               &CLSID_ShellServiceHost,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3CA,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_31;
  }
  v23 = 0LL;
  v7 = v24[0];
  v8 = *(_QWORD *)v24[0];
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
  v10 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(v8 + 24))(
          v7,
          &SID_ProcessLifetimeManagerControl,
          &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
          v9);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v23 + 112LL))(v23, a2, &v26);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D0,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    if ( (unsigned int)(v26 - 1) <= 3 )
    {
      v22 = 0LL;
      v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      if ( !v13 )
      {
        v6 = -2147024882;
LABEL_16:
        v16 = (unsigned int)v6;
        v17 = 982LL;
        goto LABEL_19;
      }
      *((_DWORD *)v13 + 3) = 1;
      *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplication>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v14 = &StubImmersiveApplication::`vftable';
      v14[2] = 0LL;
      v14[3] = 0LL;
      v14[4] = 0LL;
      v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)(v14 + 2),
              (__int64)a2,
              0xFFFFFFFFFFFFFFFFuLL);
      v6 = v15;
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
        v22 = v14;
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE,
          (__int64)"internal\\shell\\private\\inc\\stubimmersiveapplication.h",
          (const char *)(unsigned int)v15);
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      }
      if ( v6 < 0 )
        goto LABEL_16;
      v27 = 0;
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, int *))(*(_QWORD *)v23 + 184LL))(v23, v22, 2LL, &v27);
      v6 = v18;
      if ( v18 < 0 )
      {
        v16 = (unsigned int)v18;
        v17 = 988LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)v16);
        if ( v22 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        goto LABEL_29;
      }
      if ( v22 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    }
    v10 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)this);
    v6 = v10;
    if ( v10 >= 0 )
    {
      AcquireSRWLockExclusive(this + 78);
      LODWORD(this[77].Ptr) = 0;
      if ( this != (RTL_SRWLOCK *)-624LL )
        ReleaseSRWLockExclusive(this + 78);
      v6 = 0;
      goto LABEL_29;
    }
    v11 = 991LL;
    goto LABEL_25;
  }
  v11 = 973LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_29:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_31:
  v20 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v6;
}
