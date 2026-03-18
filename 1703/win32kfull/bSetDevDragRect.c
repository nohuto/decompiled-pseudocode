/*
 * XREFs of bSetDevDragRect @ 0x1C00A2540
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F56B4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C001E1B4 (GreCreateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00A2674 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0116020 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C024BE84 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C02664B0 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, _OWORD *a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r12d
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // edi
  void **v15; // rdi
  _QWORD *v17; // r14
  __int64 v18; // rbx
  HWND v19; // rdx
  void *Sprite; // rax
  unsigned int v21; // eax
  _OWORD *v22; // rax
  void *v23; // rax
  HDEV v25; // [rsp+60h] [rbp-59h] BYREF
  _OWORD *v26; // [rsp+68h] [rbp-51h]
  char v27[8]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v28; // [rsp+78h] [rbp-41h] BYREF
  char v29[8]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v30; // [rsp+88h] [rbp-31h]
  __int64 v31; // [rsp+90h] [rbp-29h]
  _BYTE v32[56]; // [rsp+98h] [rbp-21h] BYREF

  v4 = a1 + 18;
  v25 = a1;
  v26 = a3;
  v30 = 0LL;
  v7 = 1;
  v31 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v29, ghsemDynamicModeChange);
  v28 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v27, (struct PDEVOBJ *)&v25);
  if ( !*((_DWORD *)v4 + 281) || (v8 = 1, !*((_DWORD *)v4 + 282)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v13 = 4LL;
  v14 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 280) = v14;
    v17 = v4 + 284;
    v18 = 4LL;
    do
    {
      memset(v32, 0, sizeof(v32));
      vSpDwmGetMiniWinInfoForNonWindowSprite(v32, 0LL);
      Sprite = GreCreateSprite(a1, v19, 0LL, (struct tagMINIWINDOWINFO *)v32, v14, 1, 0, 0, 0, 0LL);
      *v17++ = Sprite;
      v21 = Sprite != 0LL ? v7 : 0;
      v7 = v21;
      --v18;
    }
    while ( v18 );
    v4 = a1 + 18;
    if ( v21 )
    {
      v22 = v26;
      *((_DWORD *)a1 + 297) = 1;
      *(_OWORD *)(a1 + 313) = *v22;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, a4 & 1);
    }
  }
  else if ( v8 )
  {
    v23 = (void *)UserReferenceDwmApiPort(v10, v9, v11, v12);
    DwmAsyncSendWindowArrangingData(v23, 0LL);
  }
  if ( !*((_DWORD *)v4 + 279) )
  {
    v15 = (void **)(v4 + 284);
    do
    {
      if ( *v15 )
      {
        GreDeleteSprite(a1, 0LL, *v15, *((_DWORD *)v4 + 280));
        *v15 = 0LL;
      }
      ++v15;
      --v13;
    }
    while ( v13 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v29);
  return v7;
}
