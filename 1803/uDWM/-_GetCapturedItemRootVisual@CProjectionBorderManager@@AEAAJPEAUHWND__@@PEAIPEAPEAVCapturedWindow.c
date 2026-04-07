/*
 * XREFs of ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindowSWRVisual@@@Z @ 0x18007E764
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007C580 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DC70 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800702A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x18007B260 (-Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAI@Z @ 0x18007E8D8 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAI@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetCapturedItemRootVisual(
        CProjectionBorderManager *this,
        HWND a2,
        unsigned int *a3,
        struct CapturedWindowSWRVisual **a4)
{
  unsigned int WindowRootVisual; // ebx
  int v8; // eax
  struct CapturedWindowSWRVisual *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CapturedWindowSWRVisual *v16; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp+18h] BYREF

  v16 = this;
  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowRootVisual = 0;
  *a3 = 0;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  v8 = CapturedWindowSWRVisual::Create(a2, &v16);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A3,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = v16;
  if ( v16 )
  {
    v10 = *((_QWORD *)v16 + 3);
    v11 = v10 ? *(_QWORD *)(v10 + 48) : 0LL;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      v13 = 0;
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 24);
      *a3 = v13;
    }
  }
  if ( *a3 )
  {
    v16 = 0LL;
    *a4 = v9;
  }
  else
  {
    WindowRootVisual = CProjectionBorderManager::_GetWindowRootVisual(v9, a2, a3);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return WindowRootVisual;
}
