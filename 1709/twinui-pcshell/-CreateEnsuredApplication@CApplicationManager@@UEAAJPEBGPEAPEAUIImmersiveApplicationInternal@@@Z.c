/*
 * XREFs of ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x1800071C0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800076AC (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001114C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800180EC (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800197FC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::CreateEnsuredApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationInternal **a3)
{
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // edi
  __int64 *v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  struct IImmersiveMonitor *v16; // rdi
  unsigned int v17; // ebx
  void **v18; // rax
  int ImmersiveApp; // eax
  int v20; // eax
  int v21; // eax
  struct IImmersiveApplicationInternal *v22; // rdi
  void (__fastcall **v23)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v26; // rcx
  struct IImmersiveApplicationInternal *v27; // rbx
  struct IImmersiveApplicationInternal *v28; // rax
  struct IImmersiveMonitor *v29; // rcx
  __int64 v30; // rcx
  struct IImmersiveApplicationInternal *v31; // rcx
  struct _GUID *v33; // [rsp+20h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v35[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IImmersiveApplicationInternal *v37; // [rsp+A0h] [rbp+40h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v38; // [rsp+B0h] [rbp+50h] BYREF
  struct IImmersiveMonitor *v39; // [rsp+B8h] [rbp+58h] BYREF

  v35[1] = -2LL;
  *a3 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v6 = (__int64 *)*((_QWORD *)this + 42);
  v7 = *v6;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64))(v7 + 32))(
         v6,
         0LL,
         &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
         v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC8D,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_25;
  }
  v39 = 0LL;
  v11 = (__int64 *)*((_QWORD *)this + 40);
  v12 = *v11;
  v33 = (struct _GUID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v39);
  v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *))(v12 + 72))(
          v11,
          0LL,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  v10 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 3217LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v14);
    goto LABEL_23;
  }
  v16 = v39;
  v17 = 1;
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
              (CApplicationManager *)((char *)this + 384),
              a2,
              &v38,
              0LL) >= 0 )
  {
    v17 = *((_DWORD *)v38 + 8);
    *((_DWORD *)v38 + 8) = v17 + 1;
  }
  v18 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v37);
  ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                   (CApplicationManager *)((char *)this - 248),
                   a2,
                   v17,
                   v16,
                   v33,
                   v18);
  v10 = ImmersiveApp;
  if ( ImmersiveApp < 0 )
  {
    v14 = (unsigned int)ImmersiveApp;
    v15 = 3222LL;
    goto LABEL_21;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v34 + 48LL))(
          v34,
          v37,
          0LL,
          0LL,
          8,
          0LL);
  v10 = v20;
  if ( v20 < 0 )
  {
    v14 = (unsigned int)v20;
    v15 = 3224LL;
    goto LABEL_21;
  }
  v21 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp((CApplicationManager *)((char *)this + 384), &v37);
  v10 = v21;
  if ( v21 < 0 )
  {
    v14 = (unsigned int)v21;
    v15 = 3227LL;
    goto LABEL_21;
  }
  v35[0] = 0LL;
  v22 = v37;
  v38 = 0LL;
  v23 = *(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64))v37;
  v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v38);
  (*v23)(v22, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v24);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
    (char *)this + 384,
    &v38,
    v25,
    v35);
  v26 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v37;
  v38 = v37;
  if ( v37 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v37 + 8LL))(v37);
  v10 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
          (char *)this + 384,
          &v38,
          v35[0]);
  if ( v27 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v10 < 0 )
  {
    v14 = (unsigned int)v10;
    v15 = 3231LL;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v37 + 176LL))(v37);
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v37 + 544LL))(v37);
  v28 = v37;
  v37 = 0LL;
  *a3 = v28;
  v10 = 0;
LABEL_23:
  v29 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v29 + 16LL))(v29);
  }
LABEL_25:
  v30 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return (unsigned int)v10;
}
