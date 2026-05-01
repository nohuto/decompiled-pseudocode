/*
 * XREFs of ?SetApplicationMonitorSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIImmersiveMonitor@@W4__MIDL___MIDL_itf_shpriv_core_0000_0318_0002@@@Z @ 0x18009CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationMonitorSafe(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        int a4)
{
  int v4; // ebp
  void (__fastcall **v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+6Ch] [rbp+14h]

  v4 = a4 - 1;
  v11 = 0LL;
  v8 = *a2;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(&v11);
  (*v8)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  v12 = *(_DWORD *)(a1 + 576);
  v13 = 0;
  (*(void (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)v11 + 456LL))(
    v11,
    a3,
    &v12,
    3 - (unsigned int)(v4 != 0));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return 0LL;
}
