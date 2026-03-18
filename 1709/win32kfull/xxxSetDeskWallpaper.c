/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C011EB54
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C011ECB0 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C011ED4C (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C011EDBC (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C011EE70 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, const wchar_t *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+30h] [rbp-248h] BYREF
  _DWORD v20[132]; // [rsp+50h] [rbp-228h] BYREF

  memset(v20, 0, 0x204uLL);
  v4 = 0;
  v20[0] = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v20[1], 0x100uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, &v20[1], 256LL);
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, &v20[1], 256LL);
  }
  else if ( a2 != (const wchar_t *)-2LL )
  {
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v20[1], 0x100uLL, a2);
  }
  v6 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 160LL);
  else
    v7 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v8), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v19;
    v19[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v12 = xxxSendNotifyMessage((struct tagWND *)v7, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v18, v17);
  }
  else
  {
    v4 = 1;
    v12 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)v20);
  }
  if ( v12 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v14 = (void *)ReferenceDwmApiPort(v13);
      DwmAsyncNotifyWallpaperChange(v14);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v12;
}
