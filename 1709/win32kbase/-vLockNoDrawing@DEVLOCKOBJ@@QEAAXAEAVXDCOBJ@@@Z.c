/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0046FB0
 * Callers:
 *     GreGetNearestColor @ 0x1C00634D0 (GreGetNearestColor.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0046E54 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  HSEMAPHORE v4; // rcx
  __int64 v5; // r8

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 32LL) & 1) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 6) |= 8u;
    v4 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v4;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    EngAcquireSemaphore(v4);
    v5 = 11LL;
    if ( *(HSEMAPHORE *)this == ghsemGreLock )
      v5 = 2LL;
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v5);
  }
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
}
