/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C01F7150
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsThreadMiPEnabled @ 0x1C00CF820 (IsThreadMiPEnabled.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01C00AC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01C00D8 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     MNDestroyAnimationBitmap @ 0x1C01F6CCC (MNDestroyAnimationBitmap.c)
 *     UnlockMFMWFPWindow @ 0x1C0205C3C (UnlockMFMWFPWindow.c)
 *     xxxMNSetCapture @ 0x1C0209840 (xxxMNSetCapture.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagMENUSTATE *v14; // [rsp+40h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 64);
  UnlockMFMWFPWindow(a2 + 80);
  v4 = *(_QWORD *)(a1 + 584);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 584) = *(_QWORD *)(a2 + 48);
  }
  else if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( v5 == a2 )
        break;
      v4 = *(_QWORD *)(v4 + 48);
      if ( !v5 )
        goto LABEL_8;
    }
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(a2 + 48);
  }
LABEL_8:
  if ( IsThreadMiPEnabled(a1) && *(_QWORD *)(a1 + 1224) )
    *(_QWORD *)(*(_QWORD *)(a1 + 408) + 432LL) = 0LL;
  v8 = *(_DWORD *)(a2 + 8);
  if ( (v8 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v8 & 0xFDFFFFFF;
  }
  if ( *(_QWORD *)(a2 + 128) )
    MNDestroyAnimationBitmap(a2);
  if ( a2 == gMenuState[0] )
  {
    gdwPUDFlags &= ~0x2000000u;
    GreSetDCOwnerEx(gMenuState[17], 0LL, 0LL, 0LL);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 136);
    if ( v9 )
      GreDeleteDC(v9);
    Win32FreePool(a2, v6, v7);
  }
  v10 = *(_QWORD *)(a1 + 584);
  if ( v10 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v14,
      *(struct tagMENUSTATE **)(a1 + 584));
    if ( (*(_DWORD *)(v10 + 8) & 0x100) != 0 )
    {
      xxxActivateThisWindow(*(struct tagWND **)(*(_QWORD *)v10 + 56LL), 0, 0, 0);
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, *(_QWORD *)v10, v11, v12);
      xxxMNSetCapture(v13, v10);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v14);
  }
}
