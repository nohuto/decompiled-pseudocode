/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800C2444
 * Callers:
 *     ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0CBC (-_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExp.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 *a2, __int64 a3, void **a4)
{
  __int64 v8; // rcx
  _QWORD *v9; // r15
  void *v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64); // rcx
  DWORD v12; // eax
  bool v13; // al
  __int64 v14; // rbx
  __int64 *v15; // rax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  void *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  int v33; // [rsp+90h] [rbp+48h] BYREF
  __int64 v34; // [rsp+98h] [rbp+50h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+58h] BYREF
  void **v36; // [rsp+A8h] [rbp+60h]

  v36 = a4;
  if ( *(_QWORD *)(a1 + 96) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (_QWORD *)(a1 + 104);
  if ( (void **)(a1 + 104) != a4 )
  {
    v10 = *a4;
    *a4 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))*v9;
    if ( v10 != (void *)*v9 )
    {
      if ( v11 )
        operator delete(v11);
      *v9 = v10;
    }
  }
  v12 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v12 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  v13 = v12 == 119;
  *(_BYTE *)(a1 + 240) = v13;
  if ( v13 )
  {
    *(_DWORD *)(a1 + 188) = 1138098176;
    *(_DWORD *)(a1 + 192) = 1140195328;
  }
  else
  {
    *(_DWORD *)(a1 + 188) = 1134559232;
    *(_DWORD *)(a1 + 192) = 1143209984;
  }
  v34 = 0LL;
  v14 = *a2;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
  v16 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v14 + 24))(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x161,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
    v18 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = *a4;
    if ( !*a4 )
      return (unsigned int)v17;
    goto LABEL_20;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v34 + 24LL))(
          v34,
          26LL,
          a1 + 40,
          a1 + 212);
  if ( v17 < 0 )
  {
    v21 = 354LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_25;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v34 + 24LL))(
          v34,
          1025LL,
          a1 + 40,
          a1 + 216);
  if ( v17 < 0 )
  {
    v21 = 355LL;
    goto LABEL_24;
  }
  v35 = 0LL;
  v23 = *a2;
  v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v35);
  v17 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v23 + 24))(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          v24);
  if ( v17 < 0 )
  {
    v25 = 359LL;
    goto LABEL_33;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v35 + 32LL))(v35, a1 + 64, a1 + 228);
  if ( v17 < 0 )
  {
    v25 = 360LL;
    goto LABEL_33;
  }
  v33 = 0;
  v27 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 24LL))(v35, &v33);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v27);
  *(_BYTE *)(a1 + 205) = v33 != 0;
  if ( *(__int64 **)(a1 + 112) != a2 )
  {
    (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
    v29 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = a2;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  LOBYTE(v28) = *(_BYTE *)(a1 + 240);
  v17 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*v9)(*v9, a1 + 72, v28);
  if ( v17 < 0 )
  {
    v25 = 369LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v17);
    v26 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
LABEL_25:
    v22 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v19 = *a4;
    if ( !*a4 )
      return (unsigned int)v17;
LABEL_20:
    operator delete(v19);
    return (unsigned int)v17;
  }
  v30 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  if ( *a4 )
    operator delete(*a4);
  return 0LL;
}
