/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800BA138
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BBBAC (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BD4A4 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
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
  __int64 (__fastcall ***v18)(_QWORD, GUID *, char *); // rcx
  __int64 v19; // rcx
  int ShellExperienceView; // eax
  unsigned int v21; // esi
  __int64 (__fastcall ***v22)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, char *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 (__fastcall ***v25)(_QWORD, GUID *, char *); // [rsp+60h] [rbp+30h] BYREF
  CortanaSharedExperienceManager *v26; // [rsp+78h] [rbp+48h]

  v26 = a4;
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
      (void *)0x129,
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
  v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v14 + 16LL))(*v14, 1LL, &v25);
  if ( v11 < 0 )
  {
    v17 = 301LL;
    goto LABEL_19;
  }
  v19 = *((_QWORD *)this + 58);
  if ( v19 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v11 = (**v25)(v25, &GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086, (char *)this + 464);
  if ( v11 < 0 )
  {
    v17 = 302LL;
    goto LABEL_19;
  }
  v11 = CortanaSharedExperienceManager::_RegisterMessages(this);
  if ( v11 < 0 )
  {
    v17 = 304LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v18)[2])(v18);
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
    v23 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v23)[2])(v23);
    }
    if ( *(_QWORD *)a4 )
      operator delete(*(void **)a4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x131,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    v22 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v22)[2])(v22);
    }
    if ( *(_QWORD *)a4 )
      operator delete(*(void **)a4);
    return v21;
  }
}
