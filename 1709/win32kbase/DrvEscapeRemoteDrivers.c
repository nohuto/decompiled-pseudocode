/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C00A6070
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DrvGetDisplayDriverNames @ 0x1C006E430 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HDXDrvEscape @ 0x1C00A6230 (HDXDrvEscape.c)
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
  int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v16; // rbx
  int v17; // ebp
  unsigned __int16 *v18; // rax
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  PERESOURCE v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax

  v6 = 0LL;
  v8 = 0;
  v11 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !a3 )
    return HDXDrvEscape(*(_QWORD *)(a1 + 32), a4, a5, a6);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  v13 = 0LL;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_17;
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40 * v13 + 32) + 2592LL);
    DisplayDriverNames = DrvGetDisplayDriverNames(v14);
    v16 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_14:
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_15;
  }
  v17 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_13:
    Win32FreePool((__int64)v16);
    v16 = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v18 = *(unsigned __int16 **)&v16[4 * v17 + 4];
    v19 = a3 - (_QWORD)v18;
    do
    {
      v20 = *(unsigned __int16 *)((char *)v18 + v19);
      v21 = *v18 - v20;
      if ( v21 )
        break;
      ++v18;
    }
    while ( v20 );
    if ( !v21 && (*(_DWORD *)(v14 + 160) & 0x4000000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 40 * v13 + 32);
      v8 = HDXDrvEscape(v6, a4, a5, a6);
      if ( v8 != 1 )
        break;
    }
    if ( ++v17 >= *v16 )
      goto LABEL_13;
  }
LABEL_15:
  if ( v16 )
    Win32FreePool((__int64)v16);
LABEL_17:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v12);
  v22 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v23);
  }
  v24 = WdLogNewEntry5_WdTrace(v22);
  *(_QWORD *)(v24 + 24) = v6;
  WdLogEvent5_WdTrace(v24);
  return v8;
}
