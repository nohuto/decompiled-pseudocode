/*
 * XREFs of ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180014E68
 * Callers:
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DE00 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3.c)
 *     ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18000E0A0 (-TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInter.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x180014FE0 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800180EC (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800197FC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
HRESULT __fastcall CApplicationManager::_RemoveWindowFromGlom(
        __int64 a1,
        __int64 a2,
        IUnknown *a3,
        __int64 a4,
        IUnknown *a5)
{
  IUnknown *v8; // rbx
  void **v9; // rax
  HRESULT result; // eax
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  IUnknown *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF

  v17[1] = -2LL;
  v8 = a5;
  a5->lpVtbl = 0LL;
  v16 = 0LL;
  v9 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
  result = IUnknown_GetSite(a3, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, v9);
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, IUnknown *, __int64, IUnknown *))(*(_QWORD *)v16 + 56LL))(
               v16,
               a3,
               a2,
               v8);
    if ( result == 5 )
    {
      if ( ((unsigned __int8 (__fastcall *)(IUnknown *))a3->lpVtbl[8].QueryInterface)(a3) )
      {
        a5 = 0LL;
        lpVtbl = a3->lpVtbl;
        v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&a5);
        ((void (__fastcall *)(IUnknown *, GUID *, __int64))lpVtbl->QueryInterface)(
          a3,
          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
          v12);
        CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
          a1 + 632,
          &a5,
          v13,
          v17);
        v14 = a5;
        if ( a5 )
        {
          a5 = 0LL;
          ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
        }
        a5 = a3;
        ((void (__fastcall *)(IUnknown *))a3->lpVtbl->AddRef)(a3);
        CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
          a1 + 632,
          &a5,
          v17[0]);
        result = ((__int64 (__fastcall *)(IUnknown *))a3->lpVtbl->Release)(a3);
      }
      else
      {
        result = CApplicationManager::_ForgetApplicationNoLock(a1, a3, 3LL);
      }
    }
  }
  v15 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return result;
}
