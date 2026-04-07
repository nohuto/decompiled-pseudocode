/*
 * XREFs of ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18007B5B0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180035EF0 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x180036998 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 */

__int64 __fastcall CWindowList::GetGlobalState(CWindowList *this, struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = -2147024809;
  if ( *((_DWORD *)a2 + 1) == 16 )
  {
    v3 = 0;
    v4 = 1;
    if ( (*((_BYTE *)a2 + 8) & 1) != 0 )
    {
      if ( !CDesktopManager::IsFeatureEnabled(0) || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 131) )
        v4 = 0;
      *((_DWORD *)a2 + 3) = v4;
    }
    if ( (*((_BYTE *)a2 + 8) & 2) != 0 )
      *((_DWORD *)a2 + 4) = (unsigned __int8)CDesktopManager::CheckAnyPolicy(2u) == 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v3;
}
