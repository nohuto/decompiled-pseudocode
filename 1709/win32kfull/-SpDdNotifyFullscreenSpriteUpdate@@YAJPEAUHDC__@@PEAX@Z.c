/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E824
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0252D20 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00920C0 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00B115C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00E3CC4 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00E4670 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C00E731C (DwmAsyncDirtySprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  UINT_PTR v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct DWMSPRITE *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  void *v20; // rax
  __int64 v21; // r8
  DYNAMICMODECHANGESHARELOCK *v22; // rcx
  struct DWMSPRITE *v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  DC *v26[2]; // [rsp+40h] [rbp-10h] BYREF
  char v27; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v26[1] = 0LL;
  XDCOBJ::vLock(v26, a1);
  if ( v26[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
    v25 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v24, 0LL, a2);
    v4 = -1073741816;
    if ( g_pDwmState )
    {
      v7 = v24;
      if ( v24 )
      {
        v8 = *((_QWORD *)v24 + 24);
        LOBYTE(v5) = 1;
        vSpDwmUpdateSpriteVisibility(v24, v5, v6);
        vSpUpdateDirtyRgn(v7, (struct SFMLOGICALSURFACE *)v8, 0LL, (struct _RECTL *)((char *)v7 + 56), &v28, 0);
        if ( v28 )
        {
          v12 = bShouldUseSfmTokenArray(*(unsigned int *)(v8 + 256), v9, v10, v11) == 0;
          v17 = *(_QWORD *)(v8 + 192);
          if ( v12 )
          {
            if ( v17 )
              v3 = *(_QWORD *)(v17 + 8);
            v19 = *(_QWORD *)v7;
            v20 = (void *)UserReferenceDwmApiPort(v14, v13, v15, v16);
            v18 = DwmAsyncDirtySprite(v20, v19, v21, v28, v3);
          }
          else
          {
            if ( v17 )
              v3 = *(_QWORD *)(v17 + 8);
            v18 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v8, v28, v3);
          }
          v4 = v18;
        }
        else
        {
          v4 = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
      }
    }
    else if ( v24 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v26);
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
