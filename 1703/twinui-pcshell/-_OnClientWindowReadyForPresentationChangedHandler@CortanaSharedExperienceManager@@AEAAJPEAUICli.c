/*
 * XREFs of ?_OnClientWindowReadyForPresentationChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800BDA40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnClientWindowReadyForPresentationChangedHandler(
        CortanaSharedExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  const struct _TlgProvider_t *v3; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v3 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v3 > 4u )
    TlgWrite(v3, &unk_1801F8577, 0LL, 0LL, 2u, &pData);
  return 0LL;
}
