/*
 * XREFs of ?GetHMDStatus@CAnalogCompositorManager@@SAJPEAUMILCMD_DWM_REDIRECTION_GETHMDSTATUS@@@Z @ 0x1800736B4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

__int64 __fastcall CAnalogCompositorManager::GetHMDStatus(struct MILCMD_DWM_REDIRECTION_GETHMDSTATUS *a1)
{
  unsigned int v2; // edi
  CAnalogCompositorManager *v3; // rcx
  struct CAnalogCompositorManager *Instance; // rax

  v2 = -2147467263;
  if ( CAnalogCompositorManager::GetInstance(a1) )
  {
    Instance = CAnalogCompositorManager::GetInstance(v3);
    v2 = 0;
    *((_DWORD *)a1 + 1) = *((_QWORD *)Instance + 13) != 0LL;
    *((_QWORD *)a1 + 1) = *((_QWORD *)Instance + 18);
    *((_QWORD *)a1 + 2) = *((_QWORD *)Instance + 19);
    *((_DWORD *)a1 + 6) = *((_DWORD *)Instance + 40);
    *((_DWORD *)a1 + 8) = *((unsigned __int8 *)Instance + 166);
    *((_DWORD *)a1 + 7) = *((_DWORD *)Instance + 42);
  }
  return v2;
}
