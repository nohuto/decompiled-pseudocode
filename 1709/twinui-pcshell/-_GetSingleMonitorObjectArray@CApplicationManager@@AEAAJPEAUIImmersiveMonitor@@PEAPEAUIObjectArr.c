/*
 * XREFs of ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180011674
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008E4C (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000DC60 (-NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInt.c)
 *     _lambda_8d0ab586cd065271f427bd7ab75519d7_::operator() @ 0x18000F984 (_lambda_8d0ab586cd065271f427bd7ab75519d7_--operator().c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180011558 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015214 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x180015C7C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetSingleMonitorObjectArray(
        CApplicationManager *this,
        struct IImmersiveMonitor *a2,
        struct IObjectArray **a3)
{
  void **v6; // rax
  const struct _GUID *v7; // rcx
  int Instance; // edi
  struct IImmersiveMonitor *v9; // rdx
  struct IImmersiveMonitor *v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+78h] [rbp+38h] BYREF

  v16[1] = -2LL;
  *a3 = 0LL;
  v16[0] = 0LL;
  v6 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v16);
  Instance = CEnumerableObjectCollection::CreateInstance(v7, v6);
  if ( Instance >= 0 )
  {
    v18 = 0LL;
    if ( !a2 )
      goto LABEL_8;
    (*(void (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v17);
    v9 = v18;
    if ( v17 )
    {
      if ( v18 != a2 )
      {
        (*(void (__fastcall **)(struct IImmersiveMonitor *, struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2, v18);
        v10 = v18;
        v9 = a2;
        v18 = a2;
        if ( v10 )
        {
          (*(void (__fastcall **)(struct IImmersiveMonitor *, struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(
            v10,
            a2);
          v9 = v18;
        }
      }
    }
    if ( !v9 )
    {
LABEL_8:
      v11 = (__int64 *)*((_QWORD *)this + 71);
      v12 = *v11;
      v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v18);
      Instance = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64))(v12 + 72))(
                   v11,
                   0LL,
                   &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                   &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                   v13);
      v9 = v18;
    }
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *))(*(_QWORD *)v16[0] + 40LL))(v16[0], v9);
      v9 = v18;
    }
    if ( v9 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( Instance >= 0 )
      Instance = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IObjectArray **))v16[0])(
                   v16[0],
                   &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                   a3);
  }
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)Instance;
}
