/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x180186F7C
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180186EB8 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180184DE4 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  _QWORD *v7; // r14
  void *v8; // rsi
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64); // rcx
  bool v10; // al
  float v11; // xmm0_4
  float v12; // xmm1_4
  int v13; // eax
  int v14; // esi
  void *v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v25; // [rsp+80h] [rbp+40h] BYREF
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  void **v27; // [rsp+98h] [rbp+58h]

  v27 = a4;
  v23[1] = -2LL;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((__int64 *)(a1 + 96), a3);
  v7 = (_QWORD *)(a1 + 104);
  if ( (void **)(a1 + 104) != a4 )
  {
    v8 = *a4;
    *a4 = 0LL;
    v9 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))*v7;
    if ( v8 != (void *)*v7 )
    {
      if ( v9 )
        operator delete(v9, (const struct std::nothrow_t *)8);
      *v7 = v8;
    }
  }
  v10 = IsPPIEdition();
  *(_BYTE *)(a1 + 240) = v10;
  if ( v10 )
  {
    v11 = FLOAT_492_0;
    v12 = FLOAT_428_0;
  }
  else
  {
    v11 = FLOAT_656_0;
    v12 = FLOAT_320_0;
  }
  *(float *)(a1 + 188) = v12;
  *(float *)(a1 + 192) = v11;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v13 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          &v26);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v15 = *a4;
    if ( !*a4 )
      return (unsigned int)v14;
LABEL_11:
    operator delete(v15, (const struct std::nothrow_t *)8);
    return (unsigned int)v14;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v26 + 24LL))(
          v26,
          26LL,
          a1 + 40,
          a1 + 212);
  if ( v14 < 0 )
  {
    v17 = 373LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_16;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v26 + 24LL))(
          v26,
          1025LL,
          a1 + 40,
          a1 + 216);
  if ( v14 < 0 )
  {
    v17 = 374LL;
    goto LABEL_15;
  }
  v23[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
  v14 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          v23);
  if ( v14 < 0 )
  {
    v18 = 378LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v15 = *a4;
    if ( !*a4 )
      return (unsigned int)v14;
    goto LABEL_11;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23[0] + 32LL))(v23[0], a1 + 64, a1 + 228);
  if ( v14 < 0 )
  {
    v18 = 379LL;
    goto LABEL_22;
  }
  v25 = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23[0] + 24LL))(v23[0], &v25);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      381LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v19);
  *(_BYTE *)(a1 + 206) = v25 != 0;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 112), a2);
  LOBYTE(v20) = *(_BYTE *)(a1 + 240);
  v21 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*v7)(*v7, a1 + 72, v20);
  v22 = v21;
  if ( v21 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( *a4 )
      operator delete(*a4, (const struct std::nothrow_t *)8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x184,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( *a4 )
      operator delete(*a4, (const struct std::nothrow_t *)8);
    return v22;
  }
}
