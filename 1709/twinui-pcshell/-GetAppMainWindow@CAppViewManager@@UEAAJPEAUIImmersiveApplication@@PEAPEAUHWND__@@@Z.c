/*
 * XREFs of ?GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x180044A20
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180043D3C (-_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::GetAppMainWindow(
        CAppViewManager *this,
        int (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        HWND *a3)
{
  int (__fastcall **v6)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  unsigned int v8; // ebx
  struct IImmersiveApplicationInternal *v9; // rcx
  struct IImmersiveApplicationInternal *v11; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v11);
  if ( (*v6)((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v7) >= 0 )
    *a3 = (HWND)CAppViewManager::_GetAppMainWindow(
                  (CAppViewManager *)((char *)this - 48),
                  (int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v11);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *a3 == 0LL ? 0x80070490 : 0;
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}
