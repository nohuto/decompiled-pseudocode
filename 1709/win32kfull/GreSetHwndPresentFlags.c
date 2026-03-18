/*
 * XREFs of GreSetHwndPresentFlags @ 0x1C0250628
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C01E7EC0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00E785C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreSetHwndPresentFlags(HWND a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v7, a1, 0LL);
    v5 = v7;
    if ( v7 )
    {
      if ( v7 != -120 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v5 + 120);
      }
      v4 = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 192) + 220LL) = a2;
      if ( v5 != -120 )
      {
        GreReleasePushLockShared(v5 + 120);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v4 = -1073741811;
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return v4;
}
