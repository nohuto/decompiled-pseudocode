/*
 * XREFs of GreDwmNotifySpriteDPIChange @ 0x1C00916F8
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C009103C (UpdateWindowSpriteDPI.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     vSetDevDragRectDPI @ 0x1C0265D38 (vSetDevDragRectDPI.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00920C0 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncNotifySpriteDPIChange @ 0x1C0092298 (DwmAsyncNotifySpriteDPIChange.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteDPIChange(__int64 a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // edi
  struct PDEVOBJ *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  void *v12; // rax
  unsigned int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = a1;
  v5 = 0;
  v16 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v17, v6, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v15, a2, a3);
    v11 = v15;
    if ( v15 )
    {
      v12 = (void *)UserReferenceDwmApiPort(v8, v7, v9, v10);
      v13 = DwmAsyncNotifySpriteDPIChange(v12);
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      v5 = v13;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v17);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v5;
}
