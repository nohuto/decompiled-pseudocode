/*
 * XREFs of GreConfirmWindowResizeCommit @ 0x1C024F6DC
 * Callers:
 *     NtUserConfirmResizeCommit @ 0x1C01E3AA0 (NtUserConfirmResizeCommit.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreConfirmWindowResizeCommit(HWND a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v6 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v5, a1);
    v3 = v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 136) = 0;
      v2 = 1;
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v2;
}
