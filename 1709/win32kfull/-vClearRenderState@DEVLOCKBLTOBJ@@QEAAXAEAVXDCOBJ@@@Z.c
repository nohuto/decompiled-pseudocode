/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00225E0
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002238C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0022408 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00224A4 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0022528 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0029120 (GreSelectRedirectionBitmap.c)
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C024F7B4 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C02590B8 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  int v15; // ebp
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  SURFOBJ *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KTHREAD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KTHREAD *v30; // r14
  __int64 v31; // rdi
  __int64 *v32; // rax
  int v33; // r14d
  int v34; // r15d
  HBITMAP v35; // r8
  HWND v36; // rdx
  HDEV v37; // rcx
  int v38; // r10d
  int v39; // eax
  int v40; // edi
  int v41; // [rsp+78h] [rbp+10h]

  if ( *(_QWORD *)a2 )
  {
    if ( (*((_DWORD *)this + 18) & 0x801000) != 0 )
      *(_DWORD *)(*(_QWORD *)a2 + 40LL) &= ~2u;
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 12);
      if ( !v6 || (v7 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL || *v6 != *v7 )
      {
        if ( *(_QWORD *)a2 )
        {
          v8 = *(unsigned int *)(*(_QWORD *)a2 + 36LL);
          if ( (v8 & 0x200) != 0 )
          {
            if ( (v8 & 0x4000) == 0 )
            {
              CurrentThread = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached(v8, a2, a3, a4) )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                {
                  v11 = *ThreadWin32Thread;
                  if ( v11 )
                    *(_BYTE *)(v11 + 328) = 0;
                }
              }
            }
            v12 = (_QWORD *)*((_QWORD *)this + 10);
            if ( v12 && **(_QWORD **)a2 == *v12 && !*((_QWORD *)this + 15)
              || (v13 = (_QWORD *)*((_QWORD *)this + 12)) != 0LL && **(_QWORD **)a2 == *v13 && !*((_QWORD *)this + 19) )
            {
              GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
              v14 = *(_QWORD *)a2;
              v15 = 0;
              *(_DWORD *)(v14 + 40) &= 0xFFFFFFFC;
              v16 = *(_DWORD *)(v14 + 36);
              if ( (v16 & 0x4000) != 0 )
              {
                v17 = *(_QWORD *)(v14 + 512);
                if ( *(_QWORD *)(v17 + 256) || (*(_DWORD *)(v17 + 116) & 1) != 0 )
                  EngLockSurface(*(HSURF *)(v17 + 32));
                v18 = *(_QWORD *)(v14 + 512);
                if ( (*(_DWORD *)(v14 + 36) & 0x40000) != 0 )
                {
                  v19 = 0LL;
                  if ( v18 )
                    v19 = (SURFOBJ *)(v18 + 24);
                  EngUnlockSurface(v19);
                  GreSelectRedirectionBitmap(*(HDC *)v14);
                  *(_DWORD *)(v14 + 36) &= ~0x40000u;
                  *(_QWORD *)(v14 + 2552) = 0LL;
                }
                if ( *(_QWORD *)(v18 + 256) || (*(_DWORD *)(v18 + 116) & 1) != 0 )
                {
                  GreAcquireSemaphore(ghsemSprite);
                  EngUnlockSurface((SURFOBJ *)(v18 + 24));
                  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 280));
                  if ( (*(_DWORD *)(v18 + 332))-- != 1 )
                    goto LABEL_53;
                  v25 = KeGetCurrentThread();
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20, v22, v23) )
                    PsGetThreadWin32Thread(v25);
                  v30 = KeGetCurrentThread();
                  v31 = 0LL;
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26, v28, v29)
                    && (v32 = (__int64 *)PsGetThreadWin32Thread(v30)) != 0LL
                    && (v31 = *v32) != 0 )
                  {
                    v33 = *(_DWORD *)(v31 + 104);
                    v34 = *(_DWORD *)(v31 + 108);
                    *(_QWORD *)(v31 + 104) = 0LL;
                  }
                  else
                  {
                    v34 = v41;
                    v33 = v41;
                  }
                  if ( (*(_DWORD *)(v18 + 112) & 0x2000000) != 0 )
                  {
                    v35 = *(HBITMAP *)(v18 + 352);
                    v36 = *(HWND *)(v18 + 344);
                    v37 = *(HDEV *)(v18 + 336);
                    if ( (*(_DWORD *)(v18 + 116) & 2) != 0 )
                    {
                      v38 = *(_DWORD *)(v18 + 420);
                      if ( v38 && g_pDwmState )
                        GreHintSpriteShape(v37, v36, v35, *(_DWORD *)(v18 + 416), v38, 0);
                      else
                        GdiHintSpriteShapeDelayDelete(v37, v36, v35, 0);
                    }
                    else
                    {
                      GreHintSpriteShape(v37, v36, v35, *(_DWORD *)(v18 + 416), *(_DWORD *)(v18 + 420), 0);
                    }
                    *(_DWORD *)(v18 + 112) &= ~0x2000000u;
                    _InterlockedDecrement(&glDelayedHintShape);
                  }
                  v39 = *(_DWORD *)(v18 + 116);
                  if ( (v39 & 2) != 0 )
                  {
                    *(_DWORD *)(v18 + 116) = v39 & 0xFFFFFFFD;
                    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 280));
                    GreDeleteSpriteDelayDelete(*(HDEV *)(v18 + 424), *(HWND *)(v18 + 432), *(HSPRITE *)(v18 + 440));
                    v15 = 1;
                  }
                  if ( v31 )
                  {
                    *(_DWORD *)(v31 + 104) = v33;
                    *(_DWORD *)(v31 + 108) = v34;
                  }
                  if ( !v15 )
                  {
LABEL_53:
                    if ( *(_QWORD *)(v18 + 256) || (*(_DWORD *)(v18 + 116) & 1) != 0 )
                    {
                      v40 = *(_DWORD *)(v18 + 328);
                      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 280));
                      if ( v40 == 1 )
                        bDeleteSurface(*(_QWORD *)v18);
                    }
                  }
                  if ( ghsemSprite )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
                    GreReleaseSemaphoreInternal(ghsemSprite);
                  }
                }
              }
              else if ( (v16 & 0x40000) != 0 )
              {
                GreSelectRedirectionBitmap(*(HDC *)v14);
                *(_DWORD *)(v14 + 36) &= ~0x40000u;
                *(_QWORD *)(v14 + 2552) = 0LL;
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
              GreReleaseSemaphoreInternal(ghsemDCVisRgn);
            }
          }
        }
      }
    }
  }
}
