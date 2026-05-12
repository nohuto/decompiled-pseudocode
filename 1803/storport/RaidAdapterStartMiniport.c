/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C0029188
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0023DC4 (InitializeBusesWithVmLunsBitmap.c)
 *     RaCallMiniportHwInitialize @ 0x1C00249CC (RaCallMiniportHwInitialize.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0025920 (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOptsPassive @ 0x1C002AD18 (RaidInitializePerfOptsPassive.c)
 *     RaidPreInitializePerfOpts @ 0x1C002B978 (RaidPreInitializePerfOpts.c)
 *     RaCallMiniportFindAdapter @ 0x1C002E8E0 (RaCallMiniportFindAdapter.c)
 *     StorEtwEnableAdapter @ 0x1C00406A0 (StorEtwEnableAdapter.c)
 *     RaInitializeMiniport @ 0x1C0066170 (RaInitializeMiniport.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // al
  char v9; // cl
  int v10; // edx
  int v11; // eax
  KIRQL v12; // si
  int v13; // edi
  unsigned __int8 (__fastcall *v14)(__int64); // rax
  KIRQL v15; // [rsp+48h] [rbp+10h]

  if ( !a2 )
    return 3221225486LL;
  v5 = a1 + 296;
  result = RaInitializeMiniport(a1 + 296, a2, a3, a1 + 280);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 2080);
  *(_BYTE *)(a1 + 4450) = 1;
  result = RaCallMiniportFindAdapter(v5, v6);
  *(_BYTE *)(a1 + 109) |= 0x20u;
  if ( (int)result < 0 )
    return result;
  LOBYTE(v7) = StorEtwLoggingEnabled;
  StorEtwEnableAdapter(a1, v7);
  if ( !*(_DWORD *)(a1 + 744) )
  {
    v8 = *(_BYTE *)(a1 + 448);
    if ( v8 == 2 )
    {
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0x100000000LL;
      goto LABEL_14;
    }
    if ( (unsigned __int8)(v8 - 3) <= 1u )
    {
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0LL;
LABEL_14:
      *(_QWORD *)(a1 + 4400) = -1LL;
    }
  }
  v9 = *(_BYTE *)(a1 + 500);
  v10 = *(_DWORD *)(a1 + 452);
  *(_DWORD *)(a1 + 688) = v10;
  *(_BYTE *)(a1 + 4450) = v9 == 0;
  if ( v9 )
  {
    v12 = v15;
LABEL_24:
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v13 = RaCallMiniportHwInitialize(v5);
    if ( v13 >= 0 )
      *(_BYTE *)(a1 + 104) |= 1u;
    if ( *(_BYTE *)(a1 + 4450) )
      RaidAdapterReleaseInterruptLock(a1, v12);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v14 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4408);
    if ( v14 )
    {
      if ( v14(*(_QWORD *)(a1 + 536) + 16LL) )
      {
LABEL_34:
        *(_BYTE *)(a1 + 104) &= ~0x10u;
        RaidInitializePerfOptsPassive(a1);
        return InitializeBusesWithVmLunsBitmap(a1);
      }
      v13 = -1073741823;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
    goto LABEL_34;
  }
  v11 = *(_DWORD *)(a1 + 464);
  *(_BYTE *)(a1 + 107) = 0;
  *(_DWORD *)(a1 + 4416) = v11;
  if ( v11 )
  {
    *(_BYTE *)(a1 + 4448) = 1;
    if ( !v10 )
      v11 = 1;
    *(_DWORD *)(a1 + 4416) = v11;
  }
  result = RaidAdapterConnectInterrupt(a1);
  if ( (int)result >= 0 )
  {
    result = RaidPreInitializePerfOpts(a1);
    if ( (int)result >= 0 )
    {
      v12 = RaidAdapterAcquireInterruptLock(a1);
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_24;
    }
  }
  return result;
}
