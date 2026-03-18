/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0072C4C
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C00A9038 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F997C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00732F0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, DC **a2)
{
  _QWORD *v2; // r14
  int v5; // esi
  DC *v6; // rcx
  DC *v7; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v12; // r8
  int v13; // edx
  bool v14; // zf
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 18) = 1;
  v2 = (_QWORD *)((char *)this + 120);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v5 = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = *(_QWORD *)*a2;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 16, (HSURF *)this + 15, (unsigned int *)this + 36) )
    return 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v6 = *a2;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 18) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v5 = 1;
    }
    v7 = *a2;
    v15 = *((_QWORD *)*a2 + 6);
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 10) + 8LL) & 0x4000) == 0 && (*((_DWORD *)v7 + 9) & 0x8000) == 0
      || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
    {
      *(_QWORD *)this = *((_QWORD *)*a2 + 8);
      *((_QWORD *)this + 3) = *((_QWORD *)*a2 + 6);
      if ( v5 && *(_QWORD *)this == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v5 = 0;
      }
      GreAcquireSemaphore(*(_QWORD *)this);
      v12 = 2LL;
      if ( *(_QWORD *)this != ghsemGreLock )
        v12 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v12);
      v13 = *((_DWORD *)this + 18);
      if ( (v13 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 18) = v13 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v6 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x5000) == 0x1000 )
    {
      v14 = (*((_DWORD *)this + 18) & 0x1000) == 0;
LABEL_49:
      if ( !v14 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
      *((_DWORD *)this + 18) &= ~1u;
      if ( v5 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && (*((_DWORD *)v6 + 9) & 0x80000) != 0
    || ((*((_DWORD *)this + 18) & 0x1000) != 0 || !*((_QWORD *)this + 2))
    && (*((_DWORD *)v6 + 9) & 0x10) != 0
    && !DC::bCompute(v6) )
  {
    v14 = *((_QWORD *)this + 2) == 0LL;
    goto LABEL_49;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
    goto LABEL_25;
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
  {
    if ( !*v2 )
      DC::vSetRendering(*a2);
    v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v10 = v9;
    if ( v9 )
    {
      *(_QWORD *)(v9 + 312) = (char *)this + 80;
      if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
      {
        *(_BYTE *)(v9 + 328) = 1;
        *((_QWORD *)*a2 + 301) = 0LL;
        GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        *(_DWORD *)(v10 + 336) = giVisRgnUniqueness;
        EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
      }
    }
LABEL_25:
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) == 0
    || (unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 0) )
  {
    return 1LL;
  }
  *((_DWORD *)this + 18) &= ~1u;
  return 0LL;
}
