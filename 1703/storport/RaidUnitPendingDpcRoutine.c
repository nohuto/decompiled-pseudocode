/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C001AE20
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x1C001AE98 (StorTickEventQueue.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C00357F4 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C0035928 (RaUnitRequestPowerUp.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003C444 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C003E02C (RaidUnitRequestTimeout.c)
 *     Template_qcccjq @ 0x1C003FA10 (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0044E44 (StorpTelemetryMarkUnitUnresponsive.c)
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
  PDEVICE_OBJECT v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-30h] BYREF

  v4 = DeferredContext[8];
  if ( *(int *)(v4 + 1488) <= 0 )
  {
    if ( (int)StorTickEventQueue(*(_QWORD *)(v4 + 208), DeferredContext, SystemArgument1, SystemArgument2) < 0 )
    {
      if ( (qword_1C00551F8 & 0x400) != 0 )
        DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, 0LL, 0LL, 0LL, 0LL);
      RaidUnitRequestTimeout(v4);
    }
    else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1472), 0) )
    {
      RaUnitRequestPowerUp(v4);
    }
    else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1476), 0) )
    {
      RaUnitRequestPowerDown(v4);
    }
    return;
  }
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 208) + 4LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1504), &LockHandle);
  v8 = *(_DWORD *)(v4 + 1488);
  if ( v8 > 0 )
  {
    if ( v8 >= v7 )
      *(_DWORD *)(v4 + 1488) = v8 - v7;
    else
      *(_DWORD *)(v4 + 1488) = 0;
    v5 = *(_DWORD *)(v4 + 1488) == 0;
  }
  v9 = *(_DWORD *)(v4 + 1492);
  if ( v9 > 0 && !v5 )
  {
    if ( v9 >= v7 )
      *(_DWORD *)(v4 + 1492) = v9 - v7;
    else
      *(_DWORD *)(v4 + 1492) = 0;
    v6 = *(_DWORD *)(v4 + 1492) == 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(v4 + 2576) )
  {
    if ( (*(_BYTE *)(v4 + 154) & 2) == 0 )
    {
      v11 = *(_DWORD *)(v4 + 2584);
      if ( v11 != -1 )
      {
        v12 = *(_DWORD *)(v4 + 1000);
        if ( v12 < 0x1E )
          v12 = 30;
        v10 = 4 * v12 - *(_DWORD *)(v4 + 1488) + 42;
        if ( !v11 || v11 < (unsigned int)v10 )
        {
          v13 = *(_DWORD *)(v4 + 88);
          StorpTelemetryMarkUnitUnresponsive(v4, v10);
          *(_BYTE *)(v4 + 154) |= 2u;
          if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
            Template_qcccjq(
              *(_QWORD *)(v4 + 24),
              (unsigned int)&EventUnitUnresponsive,
              v14,
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
              v13,
              SBYTE1(v13),
              SBYTE2(v13),
              v4 + 1688,
              1);
          v15 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_31;
          }
          WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 65LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, v4);
        }
      }
    }
  }
  v15 = WPP_GLOBAL_Control;
LABEL_31:
  if ( v5 )
  {
    if ( (qword_1C00551F8 & 0x400) != 0 )
      DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
    RaidUnitAbortHierarchicalResetWorkItem(v4);
  }
  else if ( v6 )
  {
    if ( v15 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v15->Timer) & 8) != 0 && BYTE1(v15->Timer) >= 2u )
      WPP_SF_q(v15->AttachedDevice, 66LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, v4);
    LOBYTE(v10) = *(_BYTE *)(v4 + 88);
    RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v10);
  }
}
