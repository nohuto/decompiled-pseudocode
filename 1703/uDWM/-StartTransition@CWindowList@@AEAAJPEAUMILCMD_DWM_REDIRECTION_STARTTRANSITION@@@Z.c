/*
 * XREFs of ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180006634
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180004D68 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x18003514C (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
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
    Template_q(v3, &UdwmBeginTransitionRequest, *((unsigned int *)a2 + 1));
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
  v7 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, v6, v4, 0LL, (struct _GUID *)((char *)a2 + 24));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE30u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return (unsigned int)v8;
}
