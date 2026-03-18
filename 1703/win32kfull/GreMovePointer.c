/*
 * XREFs of GreMovePointer @ 0x1C00BC9F0
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     GreHidePointer @ 0x1C00F0EC0 (GreHidePointer.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C010FDF0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     HideMouseTrails @ 0x1C01B2A60 (HideMouseTrails.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01B6C7C (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00BCBF4 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreMovePointer(HDEV a1, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rsi
  unsigned int v11; // edx
  HDEV v12; // rax
  int v13; // r9d
  __int64 **v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // r9d
  int v21; // r8d
  int v22; // edx
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-20h]
  __int64 v25; // [rsp+28h] [rbp-18h]
  _BYTE v26[16]; // [rsp+30h] [rbp-10h] BYREF
  HDEV v27; // [rsp+80h] [rbp+40h] BYREF
  char v28; // [rsp+88h] [rbp+48h]
  int v29; // [rsp+90h] [rbp+50h]

  v27 = a1;
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v25 = ThreadWin32Thread;
  v10 = ThreadWin32Thread;
  v28 = 0;
  if ( ThreadWin32Thread )
  {
    v28 = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_BYTE *)(ThreadWin32Thread + 328) = 0;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v26, ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphore(*((_QWORD *)v27 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)v27 + 6), 4LL);
  gCachedMovePointerState = a1;
  dword_1C03343F8 = a2;
  dword_1C03343FC = a3;
  dword_1C0334400 = a4;
  if ( gulCachedPointerRefs )
  {
    v11 = 1;
    bCachedMovePointerRefs = 1;
    if ( gbForceSoftwareCursor )
      v8 = 1;
  }
  else
  {
    v11 = 0;
  }
  v12 = v27;
  if ( ((_DWORD)v27[8] & 0x20000) != 0 )
  {
    v14 = (__int64 **)*((_QWORD *)v27 + 227);
    v15 = v11;
    v16 = *((_DWORD *)v14 + 4);
    v17 = *v14;
    v18 = v8;
    v24 = v8;
    v29 = v16;
    while ( 1 )
    {
      v19 = v17[6];
      if ( a2 < *((_DWORD *)v17 + 7)
        || a2 >= *((_DWORD *)v17 + 9)
        || a3 < *((_DWORD *)v17 + 8)
        || a3 >= *((_DWORD *)v17 + 10) )
      {
        if ( v15 && (*(_DWORD *)(v19 + 2144) & 0x2000) == 0 )
          goto LABEL_39;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 48), 4LL);
        v20 = a4;
        v21 = -1;
        v22 = -1;
      }
      else
      {
        if ( v15 && (*(_DWORD *)(v19 + 2144) & 0x2000) == 0 && !v18 )
          goto LABEL_39;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 48), 4LL);
        v20 = a4 | 4;
        if ( !v24 )
          v20 = a4;
        v21 = a3 - *((_DWORD *)v17 + 8);
        v22 = a2 - *((_DWORD *)v17 + 7);
      }
      vMovePointer((HDEV)v17[6], v22, v21, v20);
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 48));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v19 + 48));
      v18 = v24;
LABEL_39:
      v23 = v29-- == 1;
      v17 = (__int64 *)*v17;
      if ( v23 )
      {
        v10 = v25;
        goto LABEL_12;
      }
    }
  }
  if ( !v11 || ((_DWORD)v27[536] & 0x2000) != 0 || v8 )
  {
    v13 = a4 | 4;
    if ( !v8 )
      v13 = a4;
    vMovePointer(a1, a2, a3, v13);
LABEL_12:
    v12 = v27;
  }
  *((_DWORD *)v12 + 14) = a2;
  *((_DWORD *)v27 + 15) = a3;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *((_QWORD *)v27 + 6));
  GreReleaseSemaphoreInternal(*((_QWORD *)v27 + 6));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( v10 )
    *(_BYTE *)(v10 + 328) = v28;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v26);
}
