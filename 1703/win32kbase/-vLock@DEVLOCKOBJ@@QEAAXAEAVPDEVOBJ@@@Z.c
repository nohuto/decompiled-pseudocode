/*
 * XREFs of ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0037DE0
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0037DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0037E54 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DEVLOCKOBJ::vLock(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  HSEMAPHORE v4; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_DWORD *)this + 6) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 32LL) & 1) != 0 )
  {
    v4 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 40LL);
    *(_QWORD *)this = v4;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    EngAcquireSemaphore(v4);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, 11LL);
  }
}
