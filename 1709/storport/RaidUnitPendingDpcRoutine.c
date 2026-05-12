/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C001AF90
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x1C001B010 (StorTickEventQueue.c)
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C0030A44 (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C00374A8 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C00375DC (RaUnitRequestPowerUp.c)
 *     McTemplateK0qcccjq @ 0x1C003B7B8 (McTemplateK0qcccjq.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003DD48 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C003EF68 (RaidUnitRequestTimeout.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0045A54 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  bool v5; // si
  bool v6; // bp
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-30h] BYREF

  v4 = DeferredContext[8];
  if ( *(int *)(v4 + 1520) > 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 208) + 4LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1536), &LockHandle);
    v8 = *(_DWORD *)(v4 + 1520);
    if ( v8 > 0 )
    {
      if ( v8 >= v7 )
        *(_DWORD *)(v4 + 1520) = v8 - v7;
      else
        *(_DWORD *)(v4 + 1520) = 0;
      v5 = *(_DWORD *)(v4 + 1520) == 0;
    }
    v9 = *(_DWORD *)(v4 + 1524);
    if ( v9 > 0 && !v5 )
    {
      if ( v9 >= v7 )
        *(_DWORD *)(v4 + 1524) = v9 - v7;
      else
        *(_DWORD *)(v4 + 1524) = 0;
      v6 = *(_DWORD *)(v4 + 1524) == 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_BYTE *)(v4 + 2624) )
    {
      if ( (*(_BYTE *)(v4 + 154) & 2) == 0 )
      {
        v11 = *(_DWORD *)(v4 + 2632);
        if ( v11 != -1 )
        {
          v12 = *(_DWORD *)(v4 + 1032);
          if ( v12 < 0x1E )
            v12 = 30;
          v10 = 4 * v12 - *(_DWORD *)(v4 + 1520) + 42;
          if ( !v11 || v11 < (unsigned int)v10 )
          {
            v13 = *(_DWORD *)(v4 + 88);
            StorpTelemetryMarkUnitUnresponsive(v4, v10);
            *(_BYTE *)(v4 + 154) |= 2u;
            if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
              McTemplateK0qcccjq(
                *(_QWORD *)(v4 + 24),
                (unsigned int)&EventUnitUnresponsive,
                v14,
                *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
                v13,
                SBYTE1(v13),
                SBYTE2(v13),
                v4 + 1720,
                1);
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids, v4);
            }
          }
        }
      }
    }
    if ( v5 )
    {
      if ( (qword_1C0056210 & 0x400) != 0 )
        DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
      RaidUnitAbortHierarchicalResetWorkItem(v4);
    }
    else if ( v6 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 64LL, &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids, v4);
      }
      LOBYTE(v10) = *(_BYTE *)(v4 + 88);
      RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v10);
    }
  }
  else if ( (int)StorTickEventQueue(*(_QWORD *)(v4 + 208), DeferredContext, SystemArgument1, SystemArgument2) < 0 )
  {
    if ( (qword_1C0056210 & 0x400) != 0 )
      DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, 0LL, 0LL, 0LL, 0LL);
    RaidUnitRequestTimeout(v4);
  }
  else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1504), 0) )
  {
    RaUnitRequestPowerUp(v4);
  }
  else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1508), 0) )
  {
    RaUnitRequestPowerDown(v4);
  }
}
