/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C009C470
 * Callers:
 *     xxxRemoteConnect @ 0x1C009F300 (xxxRemoteConnect.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     DrvGetDisplayDriverNames @ 0x1C005FE90 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HDXDrvEscape @ 0x1C009C070 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r14
  unsigned int v8; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v15; // rbx
  int v16; // ebp
  unsigned __int16 *v17; // rax
  __int64 v18; // r8
  int v19; // edx
  int v20; // ecx
  PERESOURCE v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax

  v6 = 0LL;
  v8 = 0;
  v11 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !a3 )
    return HDXDrvEscape(*(_QWORD *)(a1 + 32), (HSEMAPHORE)a4, a5, (HSEMAPHORE)a6);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  v12 = 0LL;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_17;
  while ( 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40 * v12 + 32) + 2592LL);
    DisplayDriverNames = DrvGetDisplayDriverNames(v13);
    v15 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_14:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_15;
  }
  v16 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_13:
    Win32FreePool((__int64)v15);
    v15 = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v17 = *(unsigned __int16 **)&v15[4 * v16 + 4];
    v18 = a3 - (_QWORD)v17;
    do
    {
      v19 = *(unsigned __int16 *)((char *)v17 + v18);
      v20 = *v17 - v19;
      if ( v20 )
        break;
      ++v17;
    }
    while ( v19 );
    if ( !v20 && (*(_DWORD *)(v13 + 160) & 0x4000000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 40 * v12 + 32);
      v8 = HDXDrvEscape(v6, (HSEMAPHORE)a4, a5, (HSEMAPHORE)a6);
      if ( v8 != 1 )
        break;
    }
    if ( ++v16 >= *v15 )
      goto LABEL_13;
  }
LABEL_15:
  if ( v15 )
    Win32FreePool((__int64)v15);
LABEL_17:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  v21 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v22);
  }
  v23 = WdLogNewEntry5_WdTrace(v21);
  *(_QWORD *)(v23 + 24) = v6;
  WdLogEvent5_WdTrace(v23);
  return v8;
}
