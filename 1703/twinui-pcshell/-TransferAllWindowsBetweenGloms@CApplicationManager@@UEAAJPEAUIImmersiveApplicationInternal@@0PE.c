/*
 * XREFs of ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18000DEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qSd @ 0x180006BD4 (WPP_SF_qSd.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x18001878C (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::TransferAllWindowsBetweenGloms(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal *a3,
        const struct TransferWindowOptions *a4)
{
  int v7; // r15d
  void (__fastcall **v8)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  bool v11; // bl
  __int64 v12; // rcx
  void (__fastcall **v13)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v14; // rax
  unsigned int v15; // r14d
  struct IImmersiveApplicationInternal *v16; // r15
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rcx
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+90h] [rbp+40h] BYREF
  int v31; // [rsp+98h] [rbp+48h] BYREF
  struct IImmersiveApplicationInternal *v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v29[1] = -2LL;
  v7 = -2147019873;
  v30 = 0LL;
  v8 = *(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64))a2;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v30);
  (*v8)(a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v9);
  v11 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
               (char *)this + 440,
               &v30,
               v10,
               &v31) < 0;
  v12 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 )
  {
    v27 = 0LL;
    v13 = *(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64))a2;
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
    v7 = ((__int64 (__fastcall *)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64))v13[44])(
           a2,
           1LL,
           &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
           v14);
    if ( v7 >= 0 )
    {
      LODWORD(v30) = 0;
      v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v27 + 24))(v27, &v30);
      v31 = v7;
      if ( v7 >= 0 )
      {
        v15 = 0;
        if ( (_DWORD)v30 )
        {
          v16 = v32;
          do
          {
            v28 = 0LL;
            v17 = v27;
            v18 = *v27;
            v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v28);
            if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64))(v18 + 32))(
                   v17,
                   v15,
                   &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                   v19) >= 0
              && (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v28 + 32LL))(v28, v29) >= 0 )
            {
              (*(void (__fastcall **)(CApplicationManager *, _QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, const struct TransferWindowOptions *))(*(_QWORD *)this + 88LL))(
                this,
                v29[0],
                a2,
                v16,
                a4);
            }
            v20 = v28;
            if ( v28 )
            {
              v28 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            }
            ++v15;
          }
          while ( v15 < (unsigned int)v30 );
          v7 = v31;
        }
      }
    }
    if ( ((*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 280LL))(a2) & 1) != 0 )
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 200, a2, 0LL);
    v21 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
    }
  }
  else if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v22 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
    v23 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
    WPP_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 2), v24, v25, a2, v23, v22);
  }
  return (unsigned int)v7;
}
