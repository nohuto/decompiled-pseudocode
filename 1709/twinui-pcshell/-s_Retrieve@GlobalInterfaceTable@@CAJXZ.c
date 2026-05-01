/*
 * XREFs of ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025DC4
 * Callers:
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18001F5E0 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001F820 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E50 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180032230 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x180032358 (--1-$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ.c)
 *     ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x1800323B0 (-UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___::Run @ 0x180034750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 GlobalInterfaceTable::s_Retrieve(void)
{
  unsigned int v0; // ebx
  HRESULT Instance; // eax
  LPVOID v2; // rcx
  signed __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !GlobalInterfaceTable::s_pGlobalInterfaceTable )
  {
    v4 = 0LL;
    Instance = CoCreateInstance(
                 &CLSID_StdGlobalInterfaceTable,
                 0LL,
                 1u,
                 &GUID_00000146_0000_0000_c000_000000000046,
                 (LPVOID *)&v4);
    v2 = (LPVOID)v4;
    v0 = Instance;
    if ( Instance >= 0 )
    {
      v2 = (LPVOID)v4;
      if ( !_InterlockedCompareExchange64(
              (volatile signed __int64 *)&GlobalInterfaceTable::s_pGlobalInterfaceTable,
              v4,
              0LL) )
        v2 = 0LL;
    }
    if ( v2 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return v0;
}
