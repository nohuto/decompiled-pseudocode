/*
 * XREFs of GreGetDxSharedSurface @ 0x1C009CA40
 * Callers:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C009C968 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01DB6E0 (NtUserHwndQueryRedirectionInfo.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0250C20 (DxgkEngGetRedirBitmapSharedHandle.c)
 * Callees:
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C0026794 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00267CC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C009CE98 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C009CF8C (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C0138BE4 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(HWND a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r9
  int v22; // eax
  _DWORD *v23; // r10
  __int64 v24; // r9
  char v25; // al
  __int64 v26; // rcx
  int v28; // eax
  _DWORD *v29; // r9
  _QWORD v30[5]; // [rsp+20h] [rbp-28h] BYREF

  v10 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(a1) )
    {
LABEL_19:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      return v10;
    }
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)v30, a1, 0LL);
    v11 = v30[0];
    if ( !v30[0] )
    {
      v10 = -1073741811;
LABEL_17:
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(v30[0] + 192LL);
    if ( v30[0] != -120LL )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v11 + 120);
    }
    if ( !*(_QWORD *)(v12 + 192)
      || !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12)
      || (unsigned int)UserIsRemoteConnection(v14, v13, v15, v16)
      && !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v18, v17, v19, v20) )
    {
      *a2 = 0LL;
      v10 = -1073741822;
      *a4 = 87;
      *a5 = 1;
      *a6 = 0LL;
      *a3 = 0;
      a3[1] = 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v12 + 200) )
    {
      SFMLOGICALSURFACE::AdapterLuid((SFMLOGICALSURFACE *)v12);
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v12 + 248) & 0x100) != 0 || v30[0] == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v12 + 200);
        *a4 = *(_DWORD *)(v12 + 216);
        v28 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v29 = v28;
        *(_QWORD *)a3 = **(_QWORD **)&SFMLOGICALSURFACE::AdapterLuid((SFMLOGICALSURFACE *)v12);
        goto LABEL_12;
      }
    }
    else
    {
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v12 + 192));
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v21 + 116) & 0x400) != 0 || *(_QWORD *)(v21 + 504) == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v21 + 496);
        *a4 = 87;
        v22 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v23 = v22;
        *(_QWORD *)a3 = *(_QWORD *)(v24 + 504);
LABEL_12:
        v25 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        v26 = *(unsigned int *)(*(_QWORD *)(v12 + 192) + 68LL);
        if ( (v25 & 2) != 0 )
          v26 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v26;
        goto LABEL_15;
      }
    }
    v10 = -1071775484;
LABEL_15:
    if ( v11 != -120 )
    {
      GreReleasePushLockShared(v11 + 120);
      KeLeaveCriticalRegion();
    }
    goto LABEL_17;
  }
  return v10;
}
