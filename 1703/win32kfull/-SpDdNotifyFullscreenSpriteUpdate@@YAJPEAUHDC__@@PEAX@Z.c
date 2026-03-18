/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CD98
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0251240 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0025790 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006E8C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C009D6FC (DwmAsyncDirtySprite.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00A1144 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00A12EC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00A132C (GreAddLogicalSurfaceToDirtyQueue.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  UINT_PTR v3; // rsi
  unsigned int v4; // edi
  struct DWMSPRITE *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdi
  void *v18; // rax
  __int64 v19; // r8
  DYNAMICMODECHANGESHARELOCK *v20; // rcx
  struct DWMSPRITE *v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  DC *v24[2]; // [rsp+40h] [rbp-10h] BYREF
  char v25; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v24[1] = 0LL;
  XDCOBJ::vLock(v24, a1);
  if ( v24[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v25);
    v23 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v22, 0LL, a2);
    if ( g_pDwmState )
    {
      v5 = v22;
      if ( v22 )
      {
        v6 = *((_QWORD *)v22 + 24);
        vSpDwmUpdateSpriteVisibility(v22, 1u);
        vSpUpdateDirtyRgn(v5, (struct SFMLOGICALSURFACE *)v6, 0LL, (struct _RECTL *)((char *)v5 + 56), &v26, 0);
        if ( v26 )
        {
          v10 = bShouldUseSfmTokenArray(*(unsigned int *)(v6 + 256), v7, v8, v9) == 0;
          v15 = *(_QWORD *)(v6 + 192);
          if ( v10 )
          {
            if ( v15 )
              v3 = *(_QWORD *)(v15 + 8);
            v17 = *(_QWORD *)v5;
            v18 = (void *)UserReferenceDwmApiPort(v12, v11, v13, v14);
            v16 = DwmAsyncDirtySprite(v18, v17, v19, v26, v3);
          }
          else
          {
            if ( v15 )
              v3 = *(_QWORD *)(v15 + 8);
            v16 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v6, v26, v3);
          }
          v4 = v16;
        }
        else
        {
          v4 = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
      }
      else
      {
        v4 = -1073741816;
      }
    }
    else
    {
      v4 = -1073741816;
      if ( v22 )
        _InterlockedDecrement((volatile signed __int32 *)v22 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v24);
    _InterlockedDecrement((volatile signed __int32 *)v24[0] + 3);
    SEMOBJ::vUnlock((SEMOBJ *)&v23);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
