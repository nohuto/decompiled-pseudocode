/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180059F38
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x180052794 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C148 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18005E0D8 (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x180067AB0 (--0CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180067DA4 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  bool v3; // r15
  struct IImmersiveApplicationInternal *v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r12d
  const unsigned __int16 *v9; // r13
  CFrameApplicationPresentation *v10; // rax
  int v11; // edi
  CFrameApplicationPresentation *v12; // rbx
  void (__fastcall **v13)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  struct IIAMServiceProvider *v15; // rcx
  CFrameApplicationPresentation *v16; // rcx
  char v18[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-10h]
  CFrameApplicationPresentation *v20; // [rsp+90h] [rbp+48h] BYREF
  struct IIAMServiceProvider *v21; // [rsp+98h] [rbp+50h] BYREF
  struct IIAMServiceProvider *v22; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v21 = a2;
  v19 = -2LL;
  *((_BYTE *)this + 186) = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 18) + 96LL) + 328LL))(
          *((_QWORD *)this + 18) + 96LL,
          0LL)
    || (v3 = 1,
        (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 96LL) + 328LL))(
          *((_QWORD *)this + 18) + 96LL,
          4LL)) )
  {
    v3 = 0;
  }
  v4 = (struct IImmersiveApplicationInternal *)((*((_QWORD *)this + 18) + 112LL) & -(__int64)(*((_QWORD *)this + 18) != 0LL));
  v5 = (_QWORD *)((char *)this + 136);
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 18);
  v8 = *(_DWORD *)(v7 + 552);
  v9 = *(const unsigned __int16 **)(v7 + 544);
  v20 = 0LL;
  v10 = (CFrameApplicationPresentation *)operator new(0x250uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_19:
    v12 = v20;
    goto LABEL_20;
  }
  v12 = CFrameApplicationPresentation::CFrameApplicationPresentation(v10);
  v22 = v12;
  v23 = 0LL;
  v11 = CFrameApplicationPresentation::RuntimeClassInitialize(v12, v9, v8, v3, v21, v4);
  if ( v11 >= 0 )
  {
    if ( v12 )
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 8LL))(v12);
    v20 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 16LL))(v12);
      v12 = v20;
    }
    v11 = 0;
  }
  else
  {
    if ( v12 )
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 16LL))(v12);
    v12 = v20;
  }
  if ( v11 >= 0 )
  {
    v11 = (**(__int64 (__fastcall ***)(CFrameApplicationPresentation *, GUID *, char *))v12)(
            v12,
            &GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0,
            (char *)this + 136);
    goto LABEL_19;
  }
LABEL_20:
  if ( v12 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 >= 0 )
  {
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, CFrameApplicationPresentation **))(*(_QWORD *)*v5 + 128LL))(*v5, &v20);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *, char *))(*(_QWORD *)v20 + 24LL))(v20, v18);
      if ( v11 >= 0 )
      {
        v21 = 0LL;
        v13 = (void (__fastcall **)(_QWORD, GUID *, __int64 *))**((_QWORD **)this + 18);
        v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
        (*v13)(*((_QWORD *)this + 18), &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v14);
        v22 = v21;
        v23 = *v5;
        v11 = Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
                (int)this + 232,
                (unsigned int)v18,
                (unsigned int)*((_QWORD *)this + 18) + 712,
                (unsigned int)&v23,
                (__int64)&v22);
        v15 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v11 >= 0 )
    {
      *((_BYTE *)this + 184) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 96LL))(*v5);
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)v11;
}
