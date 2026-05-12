/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C0011A40
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x1C0011AC0 (StorTickEventQueue.c)
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C002C118 (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C00349AC (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C0034AD0 (RaUnitRequestPowerUp.c)
 *     McTemplateK0qcccjq @ 0x1C003A058 (McTemplateK0qcccjq.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003C39C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C003D4D0 (RaidUnitRequestTimeout.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C00458F0 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  char v7; // si
  char v8; // bp
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-30h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 208);
  if ( *(int *)(v4 + 1520) <= 0 )
  {
    if ( (int)StorTickEventQueue(v5, DeferredContext, SystemArgument1, SystemArgument2) < 0 )
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
    return;
  }
  v6 = *(_DWORD *)(v5 + 4);
  v7 = 0;
  v8 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1536), &LockHandle);
  v9 = *(_DWORD *)(v4 + 1520);
  if ( v9 > 0 )
  {
    if ( v9 >= v6 )
    {
      v16 = v9 - v6;
      *(_DWORD *)(v4 + 1520) = v16;
      if ( v16 )
      {
        v7 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 1520) = 0;
    }
    v7 = 1;
  }
LABEL_10:
  v10 = *(_DWORD *)(v4 + 1524);
  if ( v10 <= 0 || v7 )
    goto LABEL_15;
  if ( v10 < v6 )
  {
    *(_DWORD *)(v4 + 1524) = 0;
LABEL_14:
    v8 = 1;
    goto LABEL_15;
  }
  v17 = v10 - v6;
  *(_DWORD *)(v4 + 1524) = v17;
  if ( !v17 )
    goto LABEL_14;
  v8 = 0;
LABEL_15:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(v4 + 2624) )
  {
    if ( (*(_BYTE *)(v4 + 154) & 2) == 0 )
    {
      v12 = *(_DWORD *)(v4 + 2632);
      if ( v12 != -1 )
      {
        v13 = *(_DWORD *)(v4 + 1032);
        if ( v13 < 0x1E )
          v13 = 30;
        v11 = 4 * v13 - *(_DWORD *)(v4 + 1520) + 42;
        if ( !v12 || v12 < (unsigned int)v11 )
        {
          v14 = *(_DWORD *)(v4 + 88);
          StorpTelemetryMarkUnitUnresponsive(v4, v11);
          *(_BYTE *)(v4 + 154) |= 2u;
          if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
            McTemplateK0qcccjq(
              *(_QWORD *)(v4 + 24),
              (unsigned int)&EventUnitUnresponsive,
              v15,
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
              v14,
              SBYTE1(v14),
              SBYTE2(v14),
              v4 + 1720,
              1);
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids, v4);
          }
        }
      }
    }
  }
  if ( v7 )
  {
    if ( (qword_1C0056210 & 0x400) != 0 )
      DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
    RaidUnitAbortHierarchicalResetWorkItem(v4);
  }
  else if ( v8 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 64LL, &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids, v4);
    }
    LOBYTE(v11) = *(_BYTE *)(v4 + 88);
    RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v11);
  }
}
