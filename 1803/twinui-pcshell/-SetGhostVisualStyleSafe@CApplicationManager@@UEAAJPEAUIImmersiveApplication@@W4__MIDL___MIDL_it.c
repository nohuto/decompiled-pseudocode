/*
 * XREFs of ?SetGhostVisualStyleSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@@Z @ 0x18009CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetGhostVisualStyleSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // ebx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(&v9);
  v7 = (*v5)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v6);
  if ( v7 >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 368LL))(v9, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return (unsigned int)v7;
}
