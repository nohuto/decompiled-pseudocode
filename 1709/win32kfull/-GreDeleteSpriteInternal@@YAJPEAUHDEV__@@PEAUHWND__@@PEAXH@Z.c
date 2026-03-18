/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C008F260
 * Callers:
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00E3B34 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00E4100 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0009F50 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncDestroySprite @ 0x1C008BA8C (DwmAsyncDestroySprite.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C008BB20 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008E7F0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00920C0 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DWMSPRITE *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebp
  struct DWMSPRITE *v19; // r8
  __int64 v21; // rdi
  __int64 v22; // rcx
  W32PIDLOCK *v23; // rsi
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v26; // [rsp+28h] [rbp-30h] BYREF

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v25, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v26, (HWND)a2, a3);
    v12 = v26;
    if ( v26 )
    {
      v13 = *((_QWORD *)v26 + 24);
      v14 = *(_QWORD *)v26;
      v15 = (void *)UserReferenceDwmApiPort(v9, v8, v10, v11);
      v16 = DwmAsyncDestroySprite(v15, v14);
      v17 = *(_QWORD *)(v13 + 192);
      v18 = v16;
      if ( !v17 )
        goto LABEL_5;
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v21) )
        goto LABEL_5;
      v23 = (W32PIDLOCK *)(v22 + 280);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v22 + 280));
      if ( *(_DWORD *)(v21 + 332) && (*(_DWORD *)(v21 + 116) & 2) == 0 )
      {
        *((_DWORD *)v12 + 50) |= 0x10u;
        vspRemoveStateReferencesForSprite(v12);
        *(_QWORD *)(v21 + 432) = 0LL;
        *(_QWORD *)(v21 + 424) = a1;
        v24 = *(_QWORD *)v12;
        *(_DWORD *)(v21 + 116) |= 2u;
        *(_DWORD *)(v21 + 448) = 1;
        v4 = 0;
        *(_QWORD *)(v21 + 440) = v24;
      }
      W32PIDLOCK::vUnlockSingleThread(v23);
      if ( v4 )
      {
LABEL_5:
        v19 = v12;
        *((_DWORD *)v12 + 16) = *((_DWORD *)v12 + 14);
        *((_DWORD *)v12 + 17) = *((_DWORD *)v12 + 15);
        _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
        v12 = 0LL;
        v26 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v19);
      }
    }
    else
    {
      v18 = -2143354870;
    }
    if ( v12 )
      _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v25);
  }
  else
  {
    return (unsigned int)GdiDeleteSprite(a1, (HWND)a2, a3);
  }
  return v18;
}
