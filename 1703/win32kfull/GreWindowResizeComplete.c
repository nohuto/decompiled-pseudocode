/*
 * XREFs of GreWindowResizeComplete @ 0x1C024EE98
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002571C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00267CC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C0138BE4 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C024BAE0 (DwmAsyncProcessSurfaceComplete.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C024D004 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C026B1C8 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // esi
  struct PDEVOBJ *v5; // rdx
  struct DWMSPRITE *v6; // rbx
  int v7; // r15d
  SFMLOGICALSURFACE *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _LUID *v13; // rax
  __int64 v14; // rdi
  void *v15; // rax
  struct DWMSPRITE *v17; // [rsp+20h] [rbp-39h] BYREF
  __int64 v18; // [rsp+28h] [rbp-31h] BYREF
  __int64 v19; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v20[112]; // [rsp+40h] [rbp-19h] BYREF
  char v21; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = 0;
  v18 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v21, v5, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v17, a2);
    v6 = v17;
    if ( v17 )
    {
      v7 = 0;
      v8 = (SFMLOGICALSURFACE *)*((_QWORD *)v17 + 24);
      if ( *((_DWORD *)v17 + 32) )
      {
        if ( !*((_DWORD *)v17 + 33) )
        {
          if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v17 + 24)) )
            goto LABEL_12;
          v22 = a1;
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v22);
          if ( a1 && *(_QWORD *)(a1 + 3528) )
          {
            if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 )
            {
              v13 = (struct _LUID *)SFMLOGICALSURFACE::AdapterLuid(v8, &v19);
              PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v22, v13);
            }
            v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3528))(*(_QWORD *)(a1 + 1816), *(_QWORD *)v8);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
          if ( !v7 )
          {
LABEL_12:
            v14 = *(_QWORD *)v8;
            v15 = (void *)UserReferenceDwmApiPort(v10, v9, v11, v12);
            DwmAsyncProcessSurfaceComplete(v15, v14);
          }
          *((_DWORD *)v6 + 32) = 0;
          UpdateWindowResizeTelemetry(v6, 0);
        }
        v4 = 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v21);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  return v4;
}
