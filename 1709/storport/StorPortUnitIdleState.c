/*
 * XREFs of StorPortUnitIdleState @ 0x1C0038D50
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00187C8 (StorUpdateCrashDumpPowerReady.c)
 *     RaidGetStorPoFxComponent @ 0x1C0019534 (RaidGetStorPoFxComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqcccqq @ 0x1C00366BC (McTemplateK0pqcccqq.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C00385C4 (RaidUnitSendPoFxIdleStateToMiniport.c)
 */

void __fastcall StorPortUnitIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebp
  char *StorPoFxComponent; // rax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+48h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0pqcccqq(
        *(_QWORD *)(a1 + 24),
        &EventUnitIdleStateStart,
        v6,
        **(_QWORD **)(a1 + 1488),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2,
        a3);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1752) = MEMORY[0xFFFFF78000000008];
      v8 = *(_QWORD *)(a1 + 1488);
      if ( *(char *)(*(_QWORD *)(a1 + 24) + 108LL) >= 0 )
        *(_DWORD *)(v8 + 32) &= ~0x40u;
      else
        *(_DWORD *)(v8 + 32) |= 0x40u;
    }
    else
    {
      ++*(_DWORD *)(a1 + 1804);
      if ( *(_QWORD *)(a1 + 1752) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 0x40) != 0 || *(char *)(*(_QWORD *)(a1 + 24) + 108LL) < 0 )
        {
          v7 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 1752);
          *(_QWORD *)(a1 + 1760) += v7 / 0x2710;
          if ( v7 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 1812);
        }
        *(_QWORD *)(a1 + 1752) = 0LL;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 16LL) = a3;
    if ( *(_DWORD *)(a1 + 688) && a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 4) != 0 && RaidIsUnitControlSupported(a1, 7) )
    {
      v9 = 1;
      StorPoFxComponent = RaidGetStorPoFxComponent(*(int **)(*(_QWORD *)(a1 + 1488) + 8LL), a2);
      if ( StorPoFxComponent && *(_DWORD *)StorPoFxComponent == 2 )
        v9 = *((_DWORD *)StorPoFxComponent + 8);
      if ( a3 <= v9 )
      {
        v11 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v11 + 5088) )
        {
          v12 = *(_BYTE *)(a1 + 153);
          if ( (v12 & 8) == 0 )
          {
            *(_BYTE *)(a1 + 153) = v12 | 8;
            if ( !(unsigned __int8)RaidAdapterPoFxActivateComponent(v11, 0LL, 0LL) )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 80LL), &LockHandle);
              v13 = *(_QWORD *)(a1 + 24);
              if ( *(int *)(v13 + 268) > 1 )
              {
                *(_BYTE *)(a1 + 1656) = 1;
                *(_DWORD *)(a1 + 1660) = a3;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v13 + 5072), (PSLIST_ENTRY)(a1 + 1680));
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
                  goto LABEL_43;
                v15 = (const EVENT_DESCRIPTOR *)&EventUnitIdleStateQueued;
LABEL_42:
                v18 = *(_QWORD *)(a1 + 24);
                LODWORD(v24) = a3;
                LODWORD(v23) = a2;
                LOBYTE(v22) = *(_BYTE *)(a1 + 90);
                LOBYTE(v21) = *(_BYTE *)(a1 + 89);
                LOBYTE(v20) = *(_BYTE *)(a1 + 88);
                LODWORD(v19) = *(_DWORD *)(v18 + 56);
                McTemplateK0pqcccqq(v18, v15, v14, **(_QWORD **)(a1 + 1488), v19, v20, v21, v22, v23, v24);
LABEL_43:
                ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
                return;
              }
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
          }
        }
      }
      RaidUnitSendPoFxIdleStateToMiniport(a1);
      if ( a3 > v9 )
      {
        v16 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v16 + 5088) )
        {
          v17 = *(_BYTE *)(a1 + 153);
          if ( (v17 & 8) != 0 )
          {
            *(_BYTE *)(a1 + 153) = v17 & 0xF7;
            RaidAdapterPoFxIdleComponent(v16, 0LL, 0LL);
          }
        }
      }
    }
    if ( *(_DWORD *)(a1 + 688) && !a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**(_QWORD **)(a1 + 1488), a2);
    if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
      goto LABEL_43;
    v15 = (const EVENT_DESCRIPTOR *)&EventUnitIdleStateStop;
    goto LABEL_42;
  }
}
