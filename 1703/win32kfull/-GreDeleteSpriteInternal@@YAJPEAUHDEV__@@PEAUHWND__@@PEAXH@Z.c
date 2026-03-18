/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0020DE4
 * Callers:
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00A0800 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00A145C (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     DwmAsyncDestroySprite @ 0x1C001DC68 (DwmAsyncDestroySprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0025790 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00264A0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C0101F38 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0257424 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  struct DWMSPRITE *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebp
  struct DWMSPRITE *v15; // r8
  __int64 v17; // rdi
  __int64 v18; // rcx
  W32PIDLOCK *v19; // rsi
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v22; // [rsp+28h] [rbp-30h] BYREF

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v22, (HWND)a2, a3);
    v8 = v22;
    if ( v22 )
    {
      v9 = *((_QWORD *)v22 + 24);
      v10 = *(_QWORD *)v22;
      v11 = (void *)UserReferenceDwmApiPort();
      v12 = DwmAsyncDestroySprite(v11, v10);
      v13 = *(_QWORD *)(v9 + 192);
      v14 = v12;
      if ( !v13 )
        goto LABEL_5;
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v17) )
        goto LABEL_5;
      v19 = (W32PIDLOCK *)(v18 + 280);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 280));
      if ( *(_DWORD *)(v17 + 332) && (*(_DWORD *)(v17 + 116) & 2) == 0 )
      {
        *((_DWORD *)v8 + 50) |= 0x10u;
        vspRemoveStateReferencesForSprite(v8);
        *(_QWORD *)(v17 + 432) = 0LL;
        *(_QWORD *)(v17 + 424) = a1;
        v20 = *(_QWORD *)v8;
        *(_DWORD *)(v17 + 116) |= 2u;
        *(_DWORD *)(v17 + 448) = 1;
        v4 = 0;
        *(_QWORD *)(v17 + 440) = v20;
      }
      W32PIDLOCK::vUnlockSingleThread(v19);
      if ( v4 )
      {
LABEL_5:
        v15 = v8;
        *((_DWORD *)v8 + 16) = *((_DWORD *)v8 + 14);
        *((_DWORD *)v8 + 17) = *((_DWORD *)v8 + 15);
        _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
        v8 = 0LL;
        v22 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v15);
      }
    }
    else
    {
      v14 = -2143354870;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v21);
  }
  else
  {
    return (unsigned int)GdiDeleteSprite(a1, (HWND)a2, a3);
  }
  return v14;
}
