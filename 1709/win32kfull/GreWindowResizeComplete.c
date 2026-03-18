/*
 * XREFs of GreWindowResizeComplete @ 0x1C0250914
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008EADC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C013F614 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C024D4A0 (DwmAsyncProcessSurfaceComplete.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C024EA80 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // esi
  struct PDEVOBJ *v5; // rdx
  struct DWMSPRITE *v6; // rbx
  int v7; // ebp
  SFMLOGICALSURFACE *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  void *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+28h] [rbp-80h] BYREF
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v21[80]; // [rsp+40h] [rbp-68h] BYREF
  char v22; // [rsp+C0h] [rbp+18h] BYREF
  struct DWMSPRITE *v23; // [rsp+C8h] [rbp+20h] BYREF

  v4 = 0;
  v19 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v22, v5, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v23, a2);
    v6 = v23;
    if ( v23 )
    {
      v7 = 0;
      v8 = (SFMLOGICALSURFACE *)*((_QWORD *)v23 + 24);
      if ( *((_DWORD *)v23 + 32) )
      {
        if ( !*((_DWORD *)v23 + 33) )
        {
          if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v23 + 24)) )
            goto LABEL_13;
          v18 = a1;
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v18);
          if ( a1 && *(_QWORD *)(a1 + 3528) )
          {
            if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 )
            {
              v13 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v8, &v20);
              v14 = *(_QWORD *)(a1 + 1816);
              if ( v14 )
                *(_QWORD *)(v14 + 104) = *v13;
            }
            v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3528))(*(_QWORD *)(a1 + 1816), *(_QWORD *)v8);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
          if ( !v7 )
          {
LABEL_13:
            v15 = *(_QWORD *)v8;
            v16 = (void *)UserReferenceDwmApiPort(v10, v9, v11, v12);
            DwmAsyncProcessSurfaceComplete(v16, v15);
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
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v22);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  return v4;
}
