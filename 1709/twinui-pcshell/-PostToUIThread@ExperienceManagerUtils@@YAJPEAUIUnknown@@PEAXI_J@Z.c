/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801DBD20
 * Callers:
 *     _lambda_e4030f021b3ea92efb30b4fc18581bc0_::_lambda_invoker_cdecl_ @ 0x1800A4310 (_lambda_e4030f021b3ea92efb30b4fc18581bc0_--_lambda_invoker_cdecl_.c)
 *     _lambda_426d63d8a8f31d1aac1a208ad6758ad1_::_lambda_invoker_cdecl_ @ 0x1800A44D0 (_lambda_426d63d8a8f31d1aac1a208ad6758ad1_--_lambda_invoker_cdecl_.c)
 *     _lambda_4f232bdb0e1defed5c13f1da76044def_::_lambda_invoker_cdecl_ @ 0x1800ADBC0 (_lambda_4f232bdb0e1defed5c13f1da76044def_--_lambda_invoker_cdecl_.c)
 *     ?OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z @ 0x1800AE680 (-OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z.c)
 *     ?OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800AE6D0 (-OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExp.c)
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800B7D40 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6FFC (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801DBCE8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        __int64 (__fastcall ***this)(ExperienceManagerUtils *, GUID *, __int64 *),
        struct IUnknown *a2,
        void *a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  __int64 (__fastcall **v8)(ExperienceManagerUtils *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  HRESULT Instance; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 *ppv; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v24; // [rsp+60h] [rbp+8h] BYREF

  v22[1] = -2LL;
  v5 = (unsigned int)a3;
  v24 = 0LL;
  if ( this )
  {
    v8 = *this;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v24);
    Instance = (*v8)((ExperienceManagerUtils *)this, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, v9);
    v11 = Instance;
    if ( Instance < 0 )
    {
      v12 = 244LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_15;
    }
  }
  else
  {
    ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v24);
    Instance = CoCreateInstance(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)ppv);
    v11 = Instance;
    if ( Instance < 0 )
    {
      v12 = 248LL;
      goto LABEL_6;
    }
  }
  v22[0] = 0LL;
  v14 = v24;
  v15 = *v24;
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v22);
  v17 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, __int64 *))(v15 + 24))(
          v14,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          v16);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 252LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_13;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown *, __int64))(*(_QWORD *)v22[0] + 48LL))(
          v22[0],
          v5,
          a2,
          a4);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 253LL;
    goto LABEL_11;
  }
  v11 = 0;
LABEL_13:
  v19 = v22[0];
  if ( v22[0] )
  {
    v22[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_15:
  v20 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v11;
}
