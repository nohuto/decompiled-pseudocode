/*
 * XREFs of ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x180045130
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x18004401C (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::AddUnghostWindowCallbackTrigger(
        CAppViewManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        __int64 a3,
        struct IAsyncCallback *a4)
{
  __int64 (__fastcall **v8)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // ebx
  __int64 (__fastcall ***v11)(__int64, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v13[5])(__int64, GUID *, __int64 *); // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v13[1] = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))-2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13[0] = 0LL;
  v8 = *a2;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)v13);
  v10 = (*v8)((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  if ( v10 >= 0 )
  {
    v10 = -2147019873;
    if ( (*((unsigned __int8 (__fastcall **)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))*v13[0] + 59))(v13[0]) )
      v10 = CAppViewManager::_AddPresentedWindowCallbackTrigger((__int64)this - 48, 1, v13[0], a3, (__int64)a4, &v14);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v11)[2])(v11);
  }
  return (unsigned int)v10;
}
