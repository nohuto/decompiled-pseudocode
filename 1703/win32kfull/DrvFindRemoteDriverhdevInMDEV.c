/*
 * XREFs of DrvFindRemoteDriverhdevInMDEV @ 0x1C024A8A8
 * Callers:
 *     GetRemoteHDEV @ 0x1C01EE2D8 (GetRemoteHDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvFindRemoteDriverhdevInMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  _DWORD *DisplayDriverNames; // rax
  _DWORD *v10; // r8
  unsigned int v11; // r11d
  int v12; // edx
  unsigned __int16 *v13; // rax
  __int64 v14; // r10
  int v15; // r9d
  int v16; // ecx
  __int64 v17; // rax
  __int64 v19; // rbx
  __int64 v20; // rax

  v5 = 0LL;
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = a1;
  WdLogEvent5_WdEvent(v6);
  if ( (unsigned int)UserIsDisconnectConnection() || (unsigned int)UserIsConsoleConnection() || !a3 )
  {
    v19 = *(_QWORD *)(a1 + 32);
    v20 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdTrace(v20);
    return v19;
  }
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  v7 = 0LL;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_19;
  while ( 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40 * v7 + 32) + 2592LL);
    DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v8);
    v10 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_14:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_17;
  }
  v11 = *DisplayDriverNames;
  v12 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_13:
    Win32FreePool(v10);
    v10 = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v13 = *(unsigned __int16 **)&v10[4 * v12 + 4];
    v14 = a3 - (_QWORD)v13;
    do
    {
      v15 = *(unsigned __int16 *)((char *)v13 + v14);
      v16 = *v13 - v15;
      if ( v16 )
        break;
      ++v13;
    }
    while ( v15 );
    if ( !v16 && (*(_DWORD *)(v8 + 160) & 0x4000004) == 0x4000004 )
      break;
    if ( ++v12 >= v11 )
      goto LABEL_13;
  }
  v5 = *(_QWORD *)(a1 + 40 * v7 + 32);
LABEL_17:
  if ( v10 )
    Win32FreePool(v10);
LABEL_19:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  v17 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v17 + 24) = v5;
  WdLogEvent5_WdTrace(v17);
  return v5;
}
