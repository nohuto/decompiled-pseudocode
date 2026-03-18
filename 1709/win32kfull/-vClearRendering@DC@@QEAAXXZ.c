/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0022AC0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B06C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002DBD0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002DC00 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0029120 (GreSelectRedirectionBitmap.c)
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C024F7B4 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C02590B8 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // ebp
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  SURFOBJ *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // r14
  __int64 v18; // rdi
  int v19; // r9d
  __int64 *ThreadWin32Thread; // rax
  int v21; // r14d
  int v22; // r15d
  HBITMAP v23; // r8
  HWND v24; // rdx
  HDEV v25; // rcx
  int v26; // r10d
  int v27; // eax
  int v28; // edi
  int v29; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= 0xFFFFFFFC;
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
      GreSelectRedirectionBitmap(*(HDC *)this);
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 319) = 0LL;
    }
    if ( *(_QWORD *)(v5 + 256) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v5 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 280));
      if ( (*(_DWORD *)(v5 + 332))-- != 1 )
        goto LABEL_33;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
        PsGetThreadWin32Thread(CurrentThread);
      v17 = KeGetCurrentThread();
      v18 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15, v16)
        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v17)) != 0LL
        && (v18 = *ThreadWin32Thread) != 0 )
      {
        v21 = *(_DWORD *)(v18 + 104);
        v22 = *(_DWORD *)(v18 + 108);
        *(_QWORD *)(v18 + 104) = 0LL;
      }
      else
      {
        v21 = v29;
        v22 = v29;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v23 = *(HBITMAP *)(v5 + 352);
        v24 = *(HWND *)(v5 + 344);
        v25 = *(HDEV *)(v5 + 336);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
        {
          v26 = *(_DWORD *)(v5 + 420);
          if ( v26 && g_pDwmState )
            GreHintSpriteShape(v25, v24, v23, *(_DWORD *)(v5 + 416), v26, 0);
          else
            GdiHintSpriteShapeDelayDelete(v25, v24, v23, v19);
        }
        else
        {
          GreHintSpriteShape(v25, v24, v23, *(_DWORD *)(v5 + 416), *(_DWORD *)(v5 + 420), 0);
        }
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v27 = *(_DWORD *)(v5 + 116);
      if ( (v27 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v27 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 280));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 424), *(HWND *)(v5 + 432), *(HSPRITE *)(v5 + 440));
        v1 = 1;
      }
      if ( v18 )
      {
        *(_DWORD *)(v18 + 104) = v21;
        *(_DWORD *)(v18 + 108) = v22;
      }
      if ( !v1 )
      {
LABEL_33:
        if ( *(_QWORD *)(v5 + 256) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
        {
          v28 = *(_DWORD *)(v5 + 328);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 280));
          if ( v28 == 1 )
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
    GreSelectRedirectionBitmap(*(HDC *)this);
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 319) = 0LL;
  }
}
