/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800578EC
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x1800504E8 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059790 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18005BAA4 (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x180065D78 (--0CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180065F64 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  bool v3; // r15
  struct IImmersiveApplicationInternal *v4; // rdi
  CFrameApplicationPresentation **v5; // r14
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
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF
  CFrameApplicationPresentation *v19; // [rsp+A0h] [rbp+48h] BYREF
  struct IIAMServiceProvider *v20; // [rsp+A8h] [rbp+50h] BYREF
  struct IIAMServiceProvider *v21; // [rsp+B0h] [rbp+58h] BYREF
  CFrameApplicationPresentation *v22; // [rsp+B8h] [rbp+60h] BYREF

  v20 = a2;
  v18[1] = -2LL;
  *((_BYTE *)this + 186) = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 18) + 72LL) + 328LL))(
          *((_QWORD *)this + 18) + 72LL,
          0LL)
    || (v3 = 1,
        (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 72LL) + 328LL))(
          *((_QWORD *)this + 18) + 72LL,
          4LL)) )
  {
    v3 = 0;
  }
  v4 = (struct IImmersiveApplicationInternal *)((*((_QWORD *)this + 18) + 88LL) & -(__int64)(*((_QWORD *)this + 18) != 0LL));
  v5 = (CFrameApplicationPresentation **)((char *)this + 136);
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 18);
  v8 = *(_DWORD *)(v7 + 512);
  v9 = *(const unsigned __int16 **)(v7 + 504);
  v19 = 0LL;
  v21 = 0LL;
  v10 = (CFrameApplicationPresentation *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v10;
  v18[0] = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_19:
    v12 = v19;
    goto LABEL_20;
  }
  v18[2] = v10;
  v12 = CFrameApplicationPresentation::CFrameApplicationPresentation(v10);
  v21 = v12;
  v22 = 0LL;
  v11 = CFrameApplicationPresentation::RuntimeClassInitialize(v12, v9, v8, v3, v20, v4);
  if ( v11 >= 0 )
  {
    if ( v12 )
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 8LL))(v12);
    v19 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 16LL))(v12);
      v12 = v19;
    }
    v11 = 0;
  }
  else
  {
    if ( v12 )
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 16LL))(v12);
    v12 = v19;
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
    v19 = 0LL;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 >= 0 )
  {
    v19 = 0LL;
    v11 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *, CFrameApplicationPresentation **))(*(_QWORD *)*v5 + 128LL))(
            *v5,
            &v19);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *, _QWORD *))(*(_QWORD *)v19 + 24LL))(v19, v18);
      if ( v11 >= 0 )
      {
        v20 = 0LL;
        v13 = (void (__fastcall **)(_QWORD, GUID *, __int64 *))**((_QWORD **)this + 18);
        v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v20);
        (*v13)(*((_QWORD *)this + 18), &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v14);
        v21 = v20;
        v22 = *v5;
        v11 = Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
                (int)this + 232,
                (unsigned int)v18,
                (unsigned int)*((_QWORD *)this + 18) + 672,
                (unsigned int)&v22,
                (__int64)&v21);
        v15 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v11 >= 0 )
    {
      *((_BYTE *)this + 184) = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*v5 + 96LL))(*v5);
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)v11;
}
