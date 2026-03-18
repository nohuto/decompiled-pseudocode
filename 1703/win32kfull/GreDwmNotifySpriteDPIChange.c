/*
 * XREFs of GreDwmNotifySpriteDPIChange @ 0x1C0022FD0
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C0022F88 (UpdateWindowSpriteDPI.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     vSetDevDragRectDPI @ 0x1C0266AA8 (vSetDevDragRectDPI.c)
 * Callees:
 *     DwmAsyncNotifySpriteDPIChange @ 0x1C00230E0 (DwmAsyncNotifySpriteDPIChange.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0025790 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteDPIChange(__int64 a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // edi
  struct PDEVOBJ *v6; // rdx
  __int64 v7; // rbx
  void *v8; // rax
  unsigned int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  v5 = 0;
  v12 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v13, v6, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v11, a2, a3);
    v7 = v11;
    if ( v11 )
    {
      v8 = (void *)UserReferenceDwmApiPort();
      v9 = DwmAsyncNotifySpriteDPIChange(v8);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
      v5 = v9;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v5;
}
