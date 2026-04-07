/*
 * XREFs of ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x18008A4F0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x1800390E4 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DBA0 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCFlickVisual@@@Z @ 0x180088AC4 (--$CreateTouchVisual@VCFlickVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCFlickVisual@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180091E4C (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 */

__int64 __fastcall CContactManager::OnFlick(CContactManager *this, const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *a2)
{
  CContactManager *v4; // rcx
  unsigned int v5; // ebx
  struct CVisual ***v6; // rdi
  struct CTouchVisual *v7; // rbx
  unsigned int v8; // r14d
  int Touch; // eax
  CContactManager *v10; // rcx
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)a2 + 1) <= 0x14u )
  {
    v6 = (struct CVisual ***)((char *)this + 312);
    v7 = (struct CTouchVisual *)*((_QWORD *)this + 39);
    CContactManager::StopAndRemoveFromRootNode(v4, v7);
    if ( v7 )
      CBaseObject::Release(v7);
    v8 = *((_DWORD *)this + 80);
    *v6 = 0LL;
    *((_DWORD *)this + 80) = v8 + 1;
    GetDesktopID(1LL, &v12);
    Touch = CreateTouchVisual<CFlickVisual>(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              v12,
              (CFlickVisual **)this + 39);
    v5 = Touch;
    if ( Touch >= 0 )
    {
      CContactManager::AddToTouchNode(v10, v12, *v6);
      CFlickVisual::Start(*v6, (char *)a2 + 8, *((unsigned int *)a2 + 1), v8);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x33Du);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
