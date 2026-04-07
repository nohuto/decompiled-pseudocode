/*
 * XREFs of ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x18000C0D0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180035EF0 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x180036998 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

char CDesktopManager::IsLivePreviewAllowed(void)
{
  char v0; // bl
  int v1; // eax
  int v2; // edx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  v1 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 7)
                                                                 + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         L"EnableAeroPeek",
         &v4);
  v2 = v4;
  if ( v1 < 0 )
    v2 = 1;
  v4 = v2;
  if ( v2 && !CDesktopManager::CheckAnyPolicy(1u) )
    return CDesktopManager::IsFeatureEnabled(2LL);
  return v0;
}
