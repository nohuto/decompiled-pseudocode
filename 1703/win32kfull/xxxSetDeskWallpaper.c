/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C0114D24
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     IsThreadDesktopComposed @ 0x1C00CCDD0 (IsThreadDesktopComposed.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C0114E80 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C0114EFC (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C0114F6C (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0115020 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, const wchar_t *a2)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 CurrentProcess; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+30h] [rbp-248h] BYREF
  int v18; // [rsp+50h] [rbp-228h] BYREF
  wchar_t pszDest[262]; // [rsp+54h] [rbp-224h] BYREF

  memset(pszDest, 0, 0x200uLL);
  v4 = 0;
  v18 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(pszDest, 0x100uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, pszDest, 256LL);
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, pszDest, 256LL);
  }
  else if ( a2 != (const wchar_t *)-2LL )
  {
    RtlStringCchCopyW(pszDest, 0x100uLL, a2);
  }
  v5 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 160LL);
  else
    v6 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v6 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    ++*(_DWORD *)(v6 + 8);
    v17[1] = v6;
    v8 = xxxSendNotifyMessage((struct tagWND *)v6, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v16, v15);
  }
  else
  {
    v4 = 1;
    v8 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v18);
  }
  if ( v8 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v13 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
      DwmAsyncNotifyWallpaperChange(v13);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v8;
}
