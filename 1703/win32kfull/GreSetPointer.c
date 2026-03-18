/*
 * XREFs of GreSetPointer @ 0x1C00471C8
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00BC228 (UpdateCursorImageForMonitorDpi.c)
 *     GreHidePointer @ 0x1C00F0EC0 (GreHidePointer.c)
 *     _lambda_99abfd18865ed9d0c307366addb35405_::operator() @ 0x1C024A53C (_lambda_99abfd18865ed9d0c307366addb35405_--operator().c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0045988 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall GreSetPointer(struct _CURSINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // r13d
  unsigned int v7; // esi
  int v8; // r12d
  __int64 ThreadWin32Thread; // rdi
  __int64 v10; // rcx
  __int64 HDEV; // rax
  _DWORD *v12; // rbx
  int v13; // ebp
  int v14; // edx
  __int64 v15; // rcx
  _QWORD *v16; // r14
  int v17; // r13d
  __int64 v18; // rbx
  char v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v23[72]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+18h]
  unsigned int v25; // [rsp+B8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  v21 = ThreadWin32Thread;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v23, ghsemDynamicModeChange);
  HDEV = UserGetHDEV(v10);
  v12 = (_DWORD *)HDEV;
  if ( HDEV )
  {
    v20 = HDEV;
    if ( ThreadWin32Thread )
    {
      v19 = *(_BYTE *)(ThreadWin32Thread + 328);
      *(_BYTE *)(ThreadWin32Thread + 328) = 0;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v20) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v22 = *(_QWORD *)(v20 + 48);
    GreAcquireSemaphore(v22);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C032B32C = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C032B32C = 0;
    }
    dword_1C032B320 = v7;
    dword_1C032B324 = v6;
    dword_1C032B328 = v5;
    if ( gulCachedPointerRefs )
    {
      bCachedSetPointerRefs = 1;
      v13 = 1;
      if ( (v7 & 0x20) != 0 )
      {
        v8 = 1;
        LOBYTE(v7) = v7 | 0x40;
      }
    }
    else
    {
      v13 = 0;
    }
    v14 = *(_DWORD *)(v20 + 32);
    if ( (v14 & 0x20000) != 0 )
    {
      v15 = *(_QWORD *)(v20 + 1816);
      v16 = *(_QWORD **)v15;
      v17 = *(_DWORD *)(v15 + 16);
      do
      {
        v18 = v16[6];
        if ( !v13 || (*(_DWORD *)(v18 + 2144) & 0x2000) != 0 || (*(_DWORD *)(v18 + 32) & 4) != 0 || v8 )
        {
          GreAcquireSemaphore(*(_QWORD *)(v18 + 48));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 48), 4LL);
          vSetPointer((_DWORD *)v16[6], a1, v7, v24, v25);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 48));
          GreReleaseSemaphoreInternal(*(_QWORD *)(v18 + 48));
        }
        v16 = (_QWORD *)*v16;
        --v17;
      }
      while ( v17 );
      ThreadWin32Thread = v21;
    }
    else if ( !v13 || (*(_DWORD *)(v20 + 2144) & 0x2000) != 0 || (v14 & 4) != 0 || v8 )
    {
      vSetPointer(v12, a1, v7, v6, v5);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v20) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v22);
    if ( ThreadWin32Thread )
      *(_BYTE *)(ThreadWin32Thread + 328) = v19;
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v23);
}
