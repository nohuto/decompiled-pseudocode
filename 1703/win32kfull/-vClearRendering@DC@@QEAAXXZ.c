/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00733A4 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00742FC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0075400 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C0075430 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C00716C0 (GreSelectRedirectionBitmap.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C024DD44 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0257B88 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // ebp
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  SURFOBJ *v6; // rcx
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v10; // r9d
  int v11; // r15d
  int v12; // r12d
  HBITMAP v13; // r8
  struct PDEVOBJ *v14; // rdx
  HDEV v15; // rcx
  int v16; // r10d
  int v17; // eax
  int v18; // edi
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+44h] [rbp-24h]

  *((_DWORD *)this + 10) &= ~1u;
  v1 = 0;
  v2 = *((_DWORD *)this + 9);
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 64);
    if ( *(_QWORD *)(v4 + 256) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
      EngLockSurface(*(HSURF *)(v4 + 32));
    v5 = *((_QWORD *)this + 64);
    if ( (*((_DWORD *)this + 9) & 0x40000) != 0 )
    {
      v6 = 0LL;
      if ( v5 )
        v6 = (SURFOBJ *)(v5 + 24);
      EngUnlockSurface(v6);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 319));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 319) = 0LL;
    }
    if ( *(_QWORD *)(v5 + 256) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v5 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 280));
      if ( (*(_DWORD *)(v5 + 332))-- != 1 )
        goto LABEL_30;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v8 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v8 = *ThreadWin32Thread) != 0 )
      {
        v11 = *(_DWORD *)(v8 + 104);
        v12 = *(_DWORD *)(v8 + 108);
        *(_QWORD *)(v8 + 104) = 0LL;
      }
      else
      {
        v12 = v20;
        v11 = v19;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v13 = *(HBITMAP *)(v5 + 352);
        v14 = *(struct PDEVOBJ **)(v5 + 344);
        v15 = *(HDEV *)(v5 + 336);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
        {
          v16 = *(_DWORD *)(v5 + 420);
          if ( v16 && g_pDwmState )
            GreHintSpriteShape(v15, v14, v13, v5 + 360, *(_DWORD *)(v5 + 416), v16, 0);
          else
            GdiHintSpriteShapeDelayDelete(v15, (HWND)v14, v13, v10);
        }
        else
        {
          GreHintSpriteShape(v15, v14, v13, v5 + 360, *(_DWORD *)(v5 + 416), *(_DWORD *)(v5 + 420), 0);
        }
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v17 = *(_DWORD *)(v5 + 116);
      if ( (v17 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v17 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 280));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 424), *(HWND *)(v5 + 432), *(HSPRITE *)(v5 + 440));
        v1 = 1;
      }
      if ( v8 )
      {
        *(_DWORD *)(v8 + 104) = v11;
        *(_DWORD *)(v8 + 108) = v12;
      }
      if ( !v1 )
      {
LABEL_30:
        if ( *(_QWORD *)(v5 + 256) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
        {
          v18 = *(_DWORD *)(v5 + 328);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 280));
          if ( v18 == 1 )
            bDeleteSurface(*(_QWORD *)v5);
        }
      }
      if ( ghsemSprite )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 319));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 319) = 0LL;
  }
}
