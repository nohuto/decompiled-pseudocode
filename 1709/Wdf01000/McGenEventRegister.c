/*
 * XREFs of McGenEventRegister @ 0x1C00739B8
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0015A64 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister(
        const _GUID *CallbackContext,
        void (__fastcall *RegHandle)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *ProviderId,
        unsigned __int64 *EnableCallback)
{
  if ( *EnableCallback )
    return 0;
  else
    return EtwRegister(&KMDF_PERF_PROVIDER, (PETWENABLECALLBACK)McGenControlCallbackV2, ProviderId, EnableCallback);
}
