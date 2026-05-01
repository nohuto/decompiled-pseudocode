/*
 * XREFs of ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800117E0
 * Callers:
 *     ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000DC60 (-NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInt.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetMonitorForNotifyApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveMonitor **a3)
{
  struct IImmersiveMonitor *v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // ebx
  struct IImmersiveMonitor *v10; // rcx
  int v12; // [rsp+68h] [rbp+28h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 464LL))(
    a2,
    &v13);
  (*(void (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v13 + 48LL))(v13, &v12);
  if ( v12 )
    goto LABEL_6;
  v5 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (__int64 *)*((_QWORD *)this + 71);
  v7 = *v6;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64))(v7 + 72))(
         v6,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         v8);
  if ( v9 >= 0 )
  {
LABEL_6:
    v10 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v13 + 8LL))(v13);
      v10 = v13;
    }
    *a3 = v10;
    v9 = 0;
  }
  else
  {
    v10 = v13;
  }
  if ( v10 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v9;
}
