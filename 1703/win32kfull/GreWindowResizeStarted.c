/*
 * XREFs of GreWindowResizeStarted @ 0x1C024F05C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002571C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C009D7AC (DwmAsyncUpdateSprite.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C024C3D4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C024D004 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, HWND a2, int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  unsigned int v10; // edi
  struct PDEVOBJ *v11; // rdx
  __int64 v12; // r9
  struct DWMSPRITE *v13; // rbx
  __int64 *v14; // rsi
  __int64 v15; // rcx
  SURFACE *v16; // rax
  bool v17; // zf
  int v18; // eax
  PVOID v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rsi
  void *v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  void *v31; // [rsp+68h] [rbp-18h] BYREF
  struct DWMSPRITE *v32; // [rsp+70h] [rbp-10h] BYREF
  __int64 v33; // [rsp+78h] [rbp-8h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+30h] BYREF

  v34 = a1;
  v8 = 0;
  v9 = gdwDwmResizeOptimizationOptions & 1;
  v10 = gdwDwmResizeOptimizationOptions & 2;
  v33 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v34, v11, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v32, a2);
    v13 = v32;
    if ( v32 )
    {
      v14 = (__int64 *)*((_QWORD *)v32 + 24);
      if ( v14 && (v15 = v14[24]) != 0 )
        v16 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v15);
      else
        v16 = 0LL;
      if ( !v16 || (v17 = (unsigned int)SURFACE::bRedirectionBitmap(v16) == 0, v18 = 1, v17) )
        v18 = 0;
      if ( v9 && v18 || a3 && v10 )
      {
        if ( *((_DWORD *)v13 + 32) )
          CheckAndProcessWindowResizeComplete(v13, 1LL, 0LL, v12);
        *((_QWORD *)v13 + 16) = 1LL;
        UpdateWindowResizeTelemetry(v13, 1);
        if ( a3 && v10 )
        {
          Object = 0LL;
          if ( (int)DCompositionCreateSynchronizationObject(&Object) >= 0 )
          {
            v19 = Object;
            v31 = 0LL;
            if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v31) < 0 )
            {
              ObfDereferenceObject(v19);
            }
            else
            {
              *((_QWORD *)v13 + 19) = v31;
              *((_QWORD *)v13 + 18) = v19;
              *((_DWORD *)v13 + 33) = 1;
              *((_DWORD *)v13 + 34) = 1;
              v24 = *v14;
              v25 = *(_QWORD *)v13;
              v26 = (void *)UserReferenceDwmApiPort(v21, v20, v22, v23);
              DwmAsyncUpdateSprite(v26, v25, v24, 256, 0LL, 0LL, 0, 0, 0, 0, 0LL);
            }
          }
          v27 = gdwDwmResizeTimeoutModern;
          v28 = gdwDwmResizeOptimizationOptions & 8;
        }
        else
        {
          v27 = gdwDwmResizeTimeoutGdi;
          v28 = gdwDwmResizeOptimizationOptions & 4;
        }
        *a4 = v28;
        v8 = 1;
        *a5 = v27;
      }
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v34);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v33);
  return v8;
}
