/*
 * XREFs of memset_0 @ 0x140003D88
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x140001090 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x140001DE0 (--0CDwmAppHost@@QEAA@XZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020F0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002240 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002510 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     McGenControlCallbackV2 @ 0x140002BF0 (McGenControlCallbackV2.c)
 *     __scrt_fastfail @ 0x1400038E8 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x140003A34 (__scrt_get_show_window_mode.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140005424 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140005768 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     memcpy_s @ 0x1400062E8 (memcpy_s.c)
 *     ModuleFailFastForHRESULT @ 0x140007394 (ModuleFailFastForHRESULT.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140007DE0 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
