/*
 * XREFs of GreGetHwndUpdateIds @ 0x1C024E270
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01DB6E0 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C0026794 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00267CC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C009CE98 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreGetHwndUpdateIds(HWND a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx
  SFMLOGICALSURFACE *v8; // rsi
  char v9; // al
  __int64 v10; // rcx
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v12, a1, 0LL);
    v7 = v12;
    if ( v12 )
    {
      v8 = *(SFMLOGICALSURFACE **)(v12 + 192);
      if ( v12 != -120 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v7 + 120);
      }
      if ( *((_QWORD *)v8 + 24) && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v8) )
      {
        v9 = SFMLOGICALSURFACE::uiDxPresentFlags(v8);
        v10 = *(unsigned int *)(*((_QWORD *)v8 + 24) + 68LL);
        if ( (v9 & 2) != 0 )
          v10 |= 0x8000000000000000uLL;
        *a2 = v10;
        v6 = 0;
        *a3 = *((_QWORD *)v8 + 36);
      }
      if ( v7 != -120 )
      {
        GreReleasePushLockShared(v7 + 120);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v7 )
      DEC_SHARE_REF_CNT(v7);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return v6;
}
