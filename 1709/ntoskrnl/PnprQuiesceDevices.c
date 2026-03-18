/*
 * XREFs of PnprQuiesceDevices @ 0x14042CC58
 * Callers:
 *     PnprQuiesceWorker @ 0x14042D5E0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PnprGetMillisecondCounter @ 0x14042C26C (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     PoBlockConsoleSwitch @ 0x1406FC85C (PoBlockConsoleSwitch.c)
 *     PoStartPartitionReplace @ 0x1406FC9F4 (PoStartPartitionReplace.c)
 *     PoStartPowerStateTasks @ 0x1406FCA30 (PoStartPowerStateTasks.c)
 *     PoInitializeBroadcast @ 0x140700A98 (PoInitializeBroadcast.c)
 */

__int64 __fastcall PnprQuiesceDevices(char *a1)
{
  int started; // edi
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax

  *(_DWORD *)(PnprContext + 21024) = PnprGetMillisecondCounter(0);
  memset(a1, 0, 0x3CuLL);
  *((_DWORD *)a1 + 10) = 2;
  *(_DWORD *)a1 = -2013265920;
  *((_DWORD *)a1 + 12) = -2013265920;
  *((_DWORD *)a1 + 11) = 5;
  *((_DWORD *)a1 + 8) = PoBlockConsoleSwitch(a1 + 36);
  started = PoStartPowerStateTasks(a1 + 36);
  if ( started >= 0 )
  {
    PoStartPartitionReplace(a1 + 36, *((unsigned int *)a1 + 8));
    *((_DWORD *)a1 + 2) = 5;
    *((_DWORD *)a1 + 4) = 1;
    *((_DWORD *)a1 + 1) = 1;
    *((_DWORD *)a1 + 6) = *(_DWORD *)a1;
    *((_DWORD *)a1 + 3) = 5;
    *((_DWORD *)a1 + 5) = 2;
    started = PoInitializeBroadcast();
    if ( started >= 0 )
    {
      a1[30] = 3;
      PoBroadcastSystemState(a1 + 4);
      a1[30] = 2;
      started = PoBroadcastSystemState(a1 + 4);
      if ( started >= 0 )
        goto LABEL_16;
      v6 = 2016;
    }
    else
    {
      v6 = 1998;
    }
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 20984);
    if ( !v8 )
      v8 = v6;
    *(_DWORD *)(PnprContext + 20984) = v8;
    v9 = *(_DWORD *)(v7 + 20988);
    if ( !v9 )
      v9 = 7;
    *(_DWORD *)(v7 + 20988) = v9;
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 20984);
    if ( !v4 )
      v4 = 1975;
    v5 = *(_DWORD *)(PnprContext + 20988);
    *(_DWORD *)(PnprContext + 20984) = v4;
    if ( !v5 )
      v5 = 7;
    *(_DWORD *)(v3 + 20988) = v5;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 21028) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
