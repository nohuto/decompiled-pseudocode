/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C024C3D4
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00264A0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1C0104658 (GreWindowLayoutComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C024DB88 (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeStarted @ 0x1C024F05C (GreWindowResizeStarted.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0026AE8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C009D7AC (DwmAsyncUpdateSprite.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C024BAE0 (DwmAsyncProcessSurfaceComplete.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C024D004 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, __int64 a2, int *a3, __int64 a4)
{
  int *v4; // rbx
  int v6; // r13d
  SFMLOGICALSURFACE *v7; // r12
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  __int64 v19; // rbx
  void *v20; // rax
  void *v21; // rcx
  int v22[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+10h] BYREF
  int *v24; // [rsp+C0h] [rbp+18h]
  unsigned int v25; // [rsp+C8h] [rbp+20h] BYREF

  v24 = a3;
  v4 = a3;
  v6 = 0;
  if ( (_DWORD)a2 || !*((_DWORD *)a1 + 33) )
  {
    v7 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 24);
    v6 = 1;
    if ( v7 )
    {
      if ( (_DWORD)a2 )
      {
        SFMLOGICALSURFACE::GetRedirectionInfo(v7, (enum _HLSURF_REDIRECTIONSTYLE *)v22, &v25, &v23, 0LL, 0LL);
        v8 = *((_DWORD *)v7 + 64);
        v9 = *((_DWORD *)a1 + 50);
        v10 = v8 & 1;
        v11 = *((_QWORD *)a1 + 19);
        v12 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 19) = 0LL;
        v13 = *(_QWORD *)v7;
        v14 = v8 & 0xC;
        v15 = v14 | v9 & 1 | (2 * (v10 | (4 * (v9 & 0xE | 0x10))));
        v18 = (void *)UserReferenceDwmApiPort(v14, v10, v16, v17);
        DwmAsyncUpdateSprite(v18, v12, v13, v15, (__int64)a1 + 72, 0LL, v22[0], v25, v23, *((_DWORD *)a1 + 32), v11);
      }
      v19 = *(_QWORD *)v7;
      v20 = (void *)UserReferenceDwmApiPort(a1, a2, a3, a4);
      DwmAsyncProcessSurfaceComplete(v20, v19);
      v4 = v24;
    }
    *((_DWORD *)a1 + 32) = 0;
    UpdateWindowResizeTelemetry(a1, 0);
    v21 = (void *)*((_QWORD *)a1 + 18);
    if ( v21 )
    {
      ObfDereferenceObject(v21);
      *((_QWORD *)a1 + 18) = 0LL;
    }
  }
  if ( v4 )
    *v4 = v6;
}
