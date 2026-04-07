/*
 * XREFs of ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18002BEC8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180016738 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180024830 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x1800395D0 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006C3A0 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::SetColorizationParameters(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // r15d
  int v7; // r14d
  __int64 v8; // xmm1_8
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  struct _RTL_GENERIC_TABLE *v12; // r12
  _QWORD *v13; // rax
  CWindowData *v15; // rsi
  CWindowData *i; // rdi
  CTopLevelWindow *v17; // rcx
  PVOID RestartKey; // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+28h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-18h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  RestartKey = 0LL;
  if ( CDesktopManager::CheckAnyPolicy(2u) )
  {
    v4 = -2147024846;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = 0;
    v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 129) == 2;
    v8 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 508);
    v20 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 492);
    LODWORD(v20) = v5;
    DWORD1(v20) = *((_DWORD *)a2 + 2);
    v9 = *((_DWORD *)a2 + 3);
    v21 = v8;
    if ( v9 > 0x78 )
      v9 = 120;
    DWORD2(v20) = v9;
    v10 = *((_DWORD *)a2 + 4);
    if ( v10 > 0x78 )
      v10 = 120;
    HIDWORD(v20) = v10;
    v11 = *((_DWORD *)a2 + 5);
    if ( v11 > 0x78 )
      v11 = 120;
    LODWORD(v21) = v11;
    HIDWORD(v21) = *((_DWORD *)a2 + 6);
    v22 = *((_DWORD *)a2 + 7);
    LOBYTE(v6) = v22 == 2;
    CDesktopManager::ApplyColorizationParameters(
      CDesktopManager::s_pDesktopManagerInstance,
      (const struct CGlassColorizationParameters *)&v20);
    v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    while ( 1 )
    {
      v13 = RtlEnumerateGenericTableWithoutSplaying(v12, &RestartKey);
      if ( !v13 )
        break;
      v15 = (CWindowData *)(v13 + 8);
      for ( i = (CWindowData *)v13[8]; i != v15; i = *(CWindowData **)i )
      {
        CWindowData::OnColorizationUpdated(i);
        v17 = (CTopLevelWindow *)*((_QWORD *)i + 49);
        if ( v17 && v6 != v7 )
          CTopLevelWindow::OnBlurBehindUpdated(v17);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v4;
}
