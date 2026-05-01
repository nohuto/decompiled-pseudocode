/*
 * XREFs of ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180011558
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008E4C (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180013FE8 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180011674 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetMonitorObjectArray(
        CApplicationManager *this,
        _QWORD *a2,
        struct IObjectArray **a3,
        _BYTE *a4)
{
  void **v8; // rax
  const struct _GUID *v9; // rcx
  int Instance; // eax
  __int64 v11; // rbx
  unsigned __int64 i; // rdi
  int SingleMonitorObjectArray; // eax
  __int64 v14; // rcx
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v16[1] = -2LL;
  *a4 = 0;
  *a3 = 0LL;
  v16[0] = 0LL;
  v8 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v16);
  Instance = CEnumerableObjectCollection::CreateInstance(v9, v8);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    for ( i = 0LL; i < a2[1]; ++i )
    {
      if ( v11 < 0 )
        break;
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*a2 + 8 * i) + 48LL))(*(_QWORD *)(*a2 + 8 * i), &v17);
      if ( v17 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16[0] + 40LL))(v16[0], *(_QWORD *)(*a2 + 8 * i));
    }
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)v16[0] + 24LL))(v16[0], &v18);
    if ( v18 )
    {
      SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IObjectArray **))v16[0])(
                                   v16[0],
                                   &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                   a3);
    }
    else
    {
      *a4 = 1;
      SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(this, 0LL, a3);
    }
    LODWORD(v11) = SingleMonitorObjectArray;
  }
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v11;
}
