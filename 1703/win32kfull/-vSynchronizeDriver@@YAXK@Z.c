/*
 * XREFs of ?vSynchronizeDriver@@YAXK@Z @ 0x1C008040C
 * Callers:
 *     GreFlush @ 0x1C00800C0 (GreFlush.c)
 *     ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C027D630 (-GreSynchronizeTimer@@YAXPEAXI_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSynchronizeDriver(int a1)
{
  __int64 i; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // r9d
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( gcSynchronizeFlush != -1 && a1 == 64 || a1 == 128 && gcSynchronizeTimer != -1 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    for ( i = 0LL; ; i = v4 )
    {
      v3 = hdevEnumerate(i);
      v4 = v3;
      if ( !v3 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        return;
      }
      v6 = v3;
      if ( (a1 & *(_DWORD *)(v3 + 2144)) != 0 )
        break;
LABEL_17:
      ;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      GreAcquireSemaphore(*(_QWORD *)(v6 + 40));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(v6 + 40), 11LL);
    }
    if ( (a1 & *(_DWORD *)(v6 + 2144)) == 0 || (*(_DWORD *)(v6 + 32) & 0x400) != 0 )
    {
LABEL_15:
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) )
      {
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(v6 + 40));
        GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 40));
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      goto LABEL_17;
    }
    v5 = 0;
    if ( a1 == 64 )
    {
      if ( gcSynchronizeFlush == -1 )
      {
LABEL_14:
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v6,
          (struct _SURFOBJ *)((*(_QWORD *)(v6 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v6 + 2568) != 0LL)),
          0LL,
          v5);
        goto LABEL_15;
      }
      v5 = 2;
    }
    if ( a1 == 128 && gcSynchronizeTimer != -1 )
      v5 |= 1u;
    goto LABEL_14;
  }
}
