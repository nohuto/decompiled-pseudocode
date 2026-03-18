/*
 * XREFs of memset_0 @ 0x1400043A8
 * Callers:
 *     sub_1400010C0 @ 0x1400010C0 (sub_1400010C0.c)
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x140001DA0 (--0CDwmAppHost@@QEAA@XZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020B0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002200 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1400024D0 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     McGenControlCallbackV2 @ 0x140002BB0 (McGenControlCallbackV2.c)
 *     __scrt_fastfail @ 0x140004248 (__scrt_fastfail.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x14000596C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140005CA0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ModuleFailFastForHRESULT @ 0x1400079DC (ModuleFailFastForHRESULT.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140008410 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
