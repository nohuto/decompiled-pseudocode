/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800A0490
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A02DC (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A202C (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A3B38 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CortanaConversationCanvas@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800A8EB4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CortanaConversationCanvas@@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, char *),
        CortanaSharedExperienceManager *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r14d
  void *v12; // rcx
  _QWORD *v14; // r14
  void *v15; // r15
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int ShellExperienceView; // eax
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD v24[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v24[1] = -2LL;
  v24[2] = a4;
  if ( *((_QWORD *)this + 48) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 48);
    *((_QWORD *)this + 48) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 57);
  if ( v9 )
  {
    *((_QWORD *)this + 57) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (**a3)(a3, &_uuidof__AUIDisposable_Platform__, (char *)this + 456);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x130,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    v12 = *(void **)a4;
    if ( !*(_QWORD *)a4 )
      return (unsigned int)v11;
LABEL_10:
    operator delete(v12);
    return (unsigned int)v11;
  }
  v14 = (_QWORD *)((char *)this + 400);
  if ( (CortanaSharedExperienceManager *)((char *)this + 400) != a4 )
  {
    v15 = *(void **)a4;
    *(_QWORD *)a4 = 0LL;
    v16 = (void *)*v14;
    if ( v15 != (void *)*v14 )
    {
      if ( v16 )
        operator delete(v16);
      *v14 = v15;
    }
  }
  v24[0] = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*v14 + 16LL))(*v14, 1LL, v24);
  if ( v11 < 0 )
  {
    v17 = 308LL;
    goto LABEL_19;
  }
  v19 = *((_QWORD *)this + 58);
  if ( v19 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v24[0])(
          v24[0],
          &GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086,
          (char *)this + 464);
  if ( v11 < 0 )
  {
    v17 = 309LL;
    goto LABEL_19;
  }
  v11 = CortanaSharedExperienceManager::_RegisterMessages(this);
  if ( v11 < 0 )
  {
    v17 = 311LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    v18 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v12 = *(void **)a4;
    if ( !*(_QWORD *)a4 )
      return (unsigned int)v11;
    goto LABEL_10;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_CreateShellExperienceView(this);
  v21 = ShellExperienceView;
  if ( ShellExperienceView >= 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_CortanaConversationCanvas>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_CortanaConversationCanvas>::GetCachedFeatureEnabledState();
    v23 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    if ( *(_QWORD *)a4 )
      operator delete(*(void **)a4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x138,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    v22 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( *(_QWORD *)a4 )
      operator delete(*(void **)a4);
    return v21;
  }
}
