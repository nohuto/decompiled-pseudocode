/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F8074
 * Callers:
 *     ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18010E3F0 (-UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x18013FEA0 (-GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x18018F26C (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?SubscribeToServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x180190090 (-SubscribeToServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x1801975CC (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801D10C0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801DAA20 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _lambda_5eeb3274d8dd6409222f94091fb661d1_::operator() @ 0x1801E2E2C (_lambda_5eeb3274d8dd6409222f94091fb661d1_--operator().c)
 *     _lambda_4f3507863b21d28a47ffae36e7c55767_::operator() @ 0x1801EE054 (_lambda_4f3507863b21d28a47ffae36e7c55767_--operator().c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1802FE5A8 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1802FE680 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x180301ED0 (-SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
