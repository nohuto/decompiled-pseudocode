/*
 * XREFs of GreSetPointer @ 0x1C0089688
 * Callers:
 *     GreHidePointer @ 0x1C0046DE0 (GreHidePointer.c)
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C0053368 (UpdateCursorImageForMonitorDpi.c)
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C024BE44 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00899BC (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rdi
  __int64 HDEV; // rax
  HDEV v11; // rbx
  int v12; // ebp
  int v13; // edx
  __int64 ***v14; // rcx
  __int64 **v15; // r14
  int v16; // r13d
  __int64 *v17; // rbx
  char v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v22[72]; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v20 = ThreadWin32Thread;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v22, ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v11 = (HDEV)HDEV;
  if ( HDEV )
  {
    v19 = HDEV;
    if ( ThreadWin32Thread )
    {
      v18 = *(_BYTE *)(ThreadWin32Thread + 328);
      *(_BYTE *)(ThreadWin32Thread + 328) = 0;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v19) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v21 = *(_QWORD *)(v19 + 48);
    GreAcquireSemaphore(v21);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C0326EBC = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C0326EBC = 0;
    }
    dword_1C0326EB0 = a2;
    dword_1C0326EB4 = a3;
    dword_1C0326EB8 = a4;
    if ( gulCachedPointerRefs )
    {
      bCachedSetPointerRefs = 1;
      v12 = 1;
      if ( (a2 & 0x20) != 0 )
      {
        v8 = 1;
        a2 |= 0x40u;
      }
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_DWORD *)(v19 + 32);
    if ( (v13 & 0x20000) != 0 )
    {
      v14 = *(__int64 ****)(v19 + 1816);
      v15 = *v14;
      v16 = *((_DWORD *)v14 + 4);
      do
      {
        v17 = v15[6];
        if ( !v12 || (v17[268] & 0x2000) != 0 || (v17[4] & 4) != 0 || v8 )
        {
          GreAcquireSemaphore(v17[6]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v17[6], 4LL);
          vSetPointer((HDEV)v15[6], a1, a2, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v17[6]);
          GreReleaseSemaphoreInternal(v17[6]);
        }
        v15 = (__int64 **)*v15;
        --v16;
      }
      while ( v16 );
      ThreadWin32Thread = v20;
    }
    else if ( !v12 || (*(_DWORD *)(v19 + 2144) & 0x2000) != 0 || (v13 & 4) != 0 || v8 )
    {
      vSetPointer(v11, a1, a2, a3, a4);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v19) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    if ( ThreadWin32Thread )
      *(_BYTE *)(ThreadWin32Thread + 328) = v18;
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v22);
}
