/*
 * XREFs of ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18024305C
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18023F720 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241564 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4Repo.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180243280 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802433D4 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEBQEAG@Z @ 0x18025747C (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::TerminateInputApplication(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  const unsigned __int16 *v19; // [rsp+78h] [rbp+28h] BYREF
  int v20; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+88h] [rbp+38h] BYREF

  v19 = a2;
  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, ppv);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v16 = 0LL;
    v6 = ppv[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v7 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &SID_ProcessLifetimeManagerControl,
           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
           &v16);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1494LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_20;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v16 + 112LL))(v16, a2, &v20);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1497LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    if ( (unsigned int)(v20 - 1) <= 3 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      v10 = Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short * const &>(
              &v15,
              &v19);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 1503LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
LABEL_20:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_21;
      }
      v21 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v16 + 184LL))(v16, v15, 2LL, &v21);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 1509LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
    v7 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)this);
    v5 = v7;
    if ( v7 >= 0 )
    {
      wil::Feature<__WilFeatureTraits_Feature_MultiViewInputApp>::ReportUsageToService(v12, 3u, v13);
      TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)this);
      AcquireSRWLockExclusive(this + 82);
      LODWORD(this[81].Ptr) = 0;
      if ( this != (RTL_SRWLOCK *)-656LL )
        ReleaseSRWLockExclusive(this + 82);
      v5 = 0;
      goto LABEL_20;
    }
    v8 = 1512LL;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5D3,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)Instance);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return v5;
}
