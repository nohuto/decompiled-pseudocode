/*
 * XREFs of GreGetDxSharedSurface @ 0x1C00E7634
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00E7558 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01E7930 (NtUserHwndQueryRedirectionInfo.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0252660 (DxgkEngGetRedirBitmapSharedHandle.c)
 * Callees:
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C008EAB0 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008EADC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00E785C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00E7950 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C013F614 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
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
  __int64 v17; // r8
  int v18; // eax
  _DWORD *v19; // r9
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rcx
  int v24; // eax
  _DWORD *v25; // r8
  SFMLOGICALSURFACE *v26; // rcx
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF

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
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)v27, a1, 0LL);
    v11 = v27[0];
    if ( !v27[0] )
    {
      v10 = -1073741811;
LABEL_17:
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(v27[0] + 192LL);
    if ( v27[0] != -120LL )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v11 + 120);
    }
    if ( !*(_QWORD *)(v12 + 192)
      || !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12)
      || (unsigned int)UserIsRemoteConnection(v14, v13, v15, v16)
      && !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
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
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v12 + 248) & 0x100) != 0 || v27[0] == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v12 + 200);
        *a4 = *(_DWORD *)(v12 + 216);
        v24 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v25 = v24;
        *(_QWORD *)a3 = **(_QWORD **)&SFMLOGICALSURFACE::AdapterLuid(v26);
        goto LABEL_12;
      }
    }
    else
    {
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v12 + 192));
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v17 + 116) & 0x400) != 0 || *(_QWORD *)(v17 + 504) == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v17 + 496);
        *a4 = 87;
        v18 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v19 = v18;
        *(_QWORD *)a3 = *(_QWORD *)(v20 + 504);
LABEL_12:
        v21 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        v22 = *(unsigned int *)(*(_QWORD *)(v12 + 192) + 68LL);
        if ( (v21 & 2) != 0 )
          v22 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v22;
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
