/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a__&___ptr64__1_long_::Invoke @ 0x180120A00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

/*
 * Hex-Rays decompilation failed for Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a__&___ptr64__1_long_::Invoke @ 0x180120A00
 * Reason: Hex-Rays returned no pseudocode for 0x180120A00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180120A00: push    rbx
 * 0000000180120A02: sub     rsp, 30h
 * 0000000180120A06: mov     rax, [rcx+30h]
 * 0000000180120A0A: mov     r9d, [rcx+28h]
 * 0000000180120A0E: mov     r8, [rcx+20h]
 * 0000000180120A12: mov     rdx, [rcx+18h]
 * 0000000180120A16: mov     rcx, [rcx+10h]
 * 0000000180120A1A: mov     [rsp+38h+var_10], rax
 * 0000000180120A1F: and     [rsp+38h+var_18], 0
 * 0000000180120A25: call    ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z; CAppViewManager::_SwitchAsyncWorker(HWND__ *,HWND__ *,VIEW_SWITCH_PREFERENCES,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,IAsyncCallback *)
 * 0000000180120A2A: mov     ebx, eax
 * 0000000180120A2C: test    eax, eax
 * 0000000180120A2E: jns     short loc_180120A37
 * 0000000180120A30: mov     ecx, eax
 * 0000000180120A32: call    ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z; Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(long)
 * 0000000180120A37: mov     eax, ebx
 * 0000000180120A39: add     rsp, 30h
 * 0000000180120A3D: pop     rbx
 * 0000000180120A3E: retn
 */
