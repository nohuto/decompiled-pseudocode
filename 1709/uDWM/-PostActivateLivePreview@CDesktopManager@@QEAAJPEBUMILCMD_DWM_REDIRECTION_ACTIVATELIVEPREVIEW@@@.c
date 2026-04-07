/*
 * XREFs of ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180016FAC
 * Callers:
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800078BC (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18003D0EC (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180035858 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::PostActivateLivePreview(
        CDesktopManager *this,
        const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *a2)
{
  unsigned int v2; // ebx
  WPARAM v5; // rdi
  __int64 v6; // rax
  int v8; // r14d
  int v9; // r9d
  signed int LastError; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  v5 = 0LL;
  if ( *((_DWORD *)a2 + 1) )
  {
    v8 = *((_DWORD *)a2 + 6);
    if ( WinSqmIsOptedIn_CachedInDwm() )
    {
      v12[2] = v8;
      v12[0] = 1;
      WinSqmAddToStream(0LL, 4017LL, 1LL, v12);
    }
  }
  if ( !*((_DWORD *)this + 156) )
  {
    v9 = -2147467259;
    v11 = 2399;
LABEL_11:
    v2 = v9;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v11);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         56LL);
  v5 = v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    v11 = 2408;
    goto LABEL_11;
  }
  *(_DWORD *)v6 = *((_DWORD *)a2 + 1);
  *(_QWORD *)(v6 + 8) = *((_QWORD *)a2 + 1);
  *(_QWORD *)(v6 + 16) = *((_QWORD *)a2 + 2);
  *(_DWORD *)(v6 + 24) = *((_DWORD *)a2 + 6);
  *(_DWORD *)(v6 + 28) = *((_DWORD *)a2 + 7);
  *(_DWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 36) = *((_OWORD *)a2 + 2);
  SetLastError(0);
  if ( !PostThreadMessageW(*((_DWORD *)this + 156), 0x405u, v5, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v11 = 2423;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v2 = LastError;
    v9 = LastError;
    goto LABEL_15;
  }
  v5 = 0LL;
LABEL_6:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WPARAM))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v5);
  return v2;
}
