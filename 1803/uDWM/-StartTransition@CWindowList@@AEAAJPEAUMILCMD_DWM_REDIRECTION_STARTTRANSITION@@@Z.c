/*
 * XREFs of ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18002C5C4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000BCDC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180026C60 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 */

__int64 __fastcall CWindowList::StartTransition(CWindowList *this, struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *a2)
{
  CWindowList *v3; // rcx
  const struct _GUID *v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // ebx
  CAnimationScheduler *v7; // rdi
  int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+38h] [rbp-20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v3, &UdwmBeginTransitionRequest, *((unsigned int *)a2 + 1));
  v5 = *((_QWORD *)a2 + 1);
  if ( !v5 )
    v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
  {
    v4 = (const struct _GUID *)((char *)a2 + 8);
    CWindowList::BeginTelemetryScenario(v3, (const struct _GUID *)((char *)a2 + 8), *((_QWORD *)a2 + 5));
  }
  v6 = *((_DWORD *)a2 + 1);
  v10 = &CDesktopManager::s_csDwmInstance;
  v7 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, v6, v4, 0LL, (struct _GUID *)((char *)a2 + 24));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xF66u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return (unsigned int)v8;
}
