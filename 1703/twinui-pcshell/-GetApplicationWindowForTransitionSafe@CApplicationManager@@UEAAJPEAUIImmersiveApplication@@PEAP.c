/*
 * XREFs of ?GetApplicationWindowForTransitionSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18000E6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationWindowForTransitionSafe(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64),
        HWND *a3)
{
  __int64 (__fastcall **v5)(struct IImmersiveApplication *, GUID *, __int64); // rbx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF

  v10[1] = -2LL;
  *a3 = 0LL;
  v10[0] = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v10);
  v7 = (*v5)((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v6);
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(_QWORD, HWND *, _BYTE *))(*(_QWORD *)v10[0] + 328LL))(v10[0], a3, v11);
  v8 = v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
