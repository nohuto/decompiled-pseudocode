/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C01EB320
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsShellThreadMiPEnabled @ 0x1C00CCD80 (IsShellThreadMiPEnabled.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01BC3BC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01BC3E8 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     MNDestroyAnimationBitmap @ 0x1C01EACE8 (MNDestroyAnimationBitmap.c)
 *     UnlockMFMWFPWindow @ 0x1C02041F0 (UnlockMFMWFPWindow.c)
 *     xxxMNSetCapture @ 0x1C0207828 (xxxMNSetCapture.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, HDC a2)
{
  HDC v4; // rcx
  HDC v5; // rax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  struct tagMENUSTATE *v10; // [rsp+50h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 16);
  UnlockMFMWFPWindow(a2 + 20);
  v4 = *(HDC *)(a1 + 528);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 528) = *((_QWORD *)a2 + 6);
  }
  else if ( v4 )
  {
    while ( 1 )
    {
      v5 = (HDC)*((_QWORD *)v4 + 6);
      if ( v5 == a2 )
        break;
      v4 = (HDC)*((_QWORD *)v4 + 6);
      if ( !v5 )
        goto LABEL_8;
    }
    *((_QWORD *)v4 + 6) = *((_QWORD *)a2 + 6);
  }
LABEL_8:
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 768LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled((_QWORD *)a1))
    && *(_QWORD *)(a1 + 1136) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 384) + 392LL) = 0LL;
  }
  v6 = *((_DWORD *)a2 + 2);
  if ( (v6 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *((_DWORD *)a2 + 2) = v6 & 0xFDFFFFFF;
  }
  if ( *((_QWORD *)a2 + 16) )
    MNDestroyAnimationBitmap((__int64)a2);
  if ( a2 == gMenuState[0] )
  {
    gdwPUDFlags &= ~0x2000000u;
    GreSetDCOwnerEx(gMenuState[17], 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)a2 + 17);
    if ( v7 )
      GreDeleteDC(v7);
    Win32FreePool(a2);
  }
  v8 = *(_QWORD *)(a1 + 528);
  if ( v8 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v10,
      *(struct tagMENUSTATE **)(a1 + 528));
    if ( (*(_DWORD *)(v8 + 8) & 0x100) != 0 )
    {
      xxxActivateThisWindow(*(struct tagWND **)(*(_QWORD *)v8 + 56LL), 0LL, 0, 0);
    }
    else
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v9, *(_QWORD *)v8);
      xxxMNSetCapture(v9, v8);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v10);
  }
}
