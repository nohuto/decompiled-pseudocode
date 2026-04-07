/*
 * XREFs of ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003329C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x1800171E8 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180021EF0 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180036710 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006FDBC (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::SetColorizationParameters(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *a2)
{
  unsigned int v4; // esi
  int v5; // eax
  BOOL v6; // edi
  __int64 v7; // xmm1_8
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  BOOL v11; // ebx
  _QWORD *v12; // rax
  unsigned __int64 v13; // r14
  CWindowData *v15; // rdi
  CWindowData *i; // rbx
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
  if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(2u) )
  {
    v4 = -2147024846;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 119) == 2;
    v7 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 468);
    v20 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 452);
    LODWORD(v20) = v5;
    DWORD1(v20) = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    v21 = v7;
    if ( v8 > 0x78 )
      v8 = 120;
    DWORD2(v20) = v8;
    v9 = *((_DWORD *)a2 + 4);
    if ( v9 > 0x78 )
      v9 = 120;
    HIDWORD(v20) = v9;
    v10 = *((_DWORD *)a2 + 5);
    if ( v10 > 0x78 )
      v10 = 120;
    LODWORD(v21) = v10;
    HIDWORD(v21) = *((_DWORD *)a2 + 6);
    v22 = *((_DWORD *)a2 + 7);
    v11 = v22 == 2;
    CDesktopManager::ApplyColorizationParameters(
      CDesktopManager::s_pDesktopManagerInstance,
      (const struct CGlassColorizationParameters *)&v20);
    v12 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    v13 = v6 ^ (unsigned __int64)v11;
    while ( v12 )
    {
      v15 = (CWindowData *)(v12 + 8);
      for ( i = (CWindowData *)v12[8]; i != v15; i = *(CWindowData **)i )
      {
        CWindowData::OnColorizationUpdated(i);
        v17 = (CTopLevelWindow *)*((_QWORD *)i + 50);
        if ( v17 && v13 )
          CTopLevelWindow::OnBlurBehindUpdated(v17);
      }
      v12 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v4;
}
