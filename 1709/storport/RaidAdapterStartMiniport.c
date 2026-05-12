/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C00195D8
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0010F4C (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C001975C (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C00197FC (RaidInitializePerfOptsPassive.c)
 *     RaCallMiniportHwInitialize @ 0x1C0019FC4 (RaCallMiniportHwInitialize.c)
 *     RaidPreInitializePerfOpts @ 0x1C0019FFC (RaidPreInitializePerfOpts.c)
 *     RaidAdapterConnectInterrupt @ 0x1C001A11C (RaidAdapterConnectInterrupt.c)
 *     StorEtwEnableAdapter @ 0x1C001A57C (StorEtwEnableAdapter.c)
 *     RaCallMiniportFindAdapter @ 0x1C001A5F4 (RaCallMiniportFindAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     RaInitializeMiniport @ 0x1C00633F0 (RaInitializeMiniport.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // cl
  int v9; // edx
  int v10; // eax
  KIRQL v11; // si
  int v12; // edi
  unsigned __int8 (__fastcall *v13)(__int64); // rax
  char v14; // al
  KIRQL v15; // [rsp+48h] [rbp+10h]

  if ( !a2 )
    return 3221225486LL;
  v4 = a1 + 296;
  result = RaInitializeMiniport(a1 + 296, a2, a3, a1 + 280);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 2080);
  *(_BYTE *)(a1 + 4450) = 1;
  result = RaCallMiniportFindAdapter(v4, v6);
  *(_BYTE *)(a1 + 109) |= 0x20u;
  if ( (int)result < 0 )
    return result;
  LOBYTE(v7) = StorEtwLoggingEnabled;
  StorEtwEnableAdapter(a1, v7);
  if ( !*(_DWORD *)(a1 + 744) )
  {
    v14 = *(_BYTE *)(a1 + 448);
    if ( v14 == 2 )
    {
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0x100000000LL;
    }
    else
    {
      if ( (unsigned __int8)(v14 - 3) > 1u )
        goto LABEL_5;
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0LL;
    }
    *(_QWORD *)(a1 + 4400) = -1LL;
  }
LABEL_5:
  v8 = *(_BYTE *)(a1 + 500);
  v9 = *(_DWORD *)(a1 + 452);
  *(_DWORD *)(a1 + 688) = v9;
  *(_BYTE *)(a1 + 4450) = v8 == 0;
  if ( v8 )
  {
    v11 = v15;
LABEL_13:
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v12 = RaCallMiniportHwInitialize(v4);
    if ( v12 >= 0 )
      *(_BYTE *)(a1 + 104) |= 1u;
    if ( *(_BYTE *)(a1 + 4450) )
      RaidAdapterReleaseInterruptLock(a1, v11);
    if ( v12 >= 0 )
    {
      v13 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4408);
      if ( v13 )
      {
        if ( v13(*(_QWORD *)(a1 + 536) + 16LL) )
        {
LABEL_20:
          *(_BYTE *)(a1 + 104) &= ~0x10u;
          RaidInitializePerfOptsPassive(a1);
          return InitializeBusesWithVmLunsBitmap(a1);
        }
        v12 = -1073741823;
      }
      if ( v12 >= 0 )
        goto LABEL_20;
    }
    return (unsigned int)v12;
  }
  v10 = *(_DWORD *)(a1 + 464);
  *(_BYTE *)(a1 + 107) = 0;
  *(_DWORD *)(a1 + 4416) = v10;
  if ( v10 )
  {
    *(_BYTE *)(a1 + 4448) = 1;
    if ( !v9 )
      v10 = 1;
    *(_DWORD *)(a1 + 4416) = v10;
  }
  result = RaidAdapterConnectInterrupt(a1);
  if ( (int)result >= 0 )
  {
    result = RaidPreInitializePerfOpts(a1);
    if ( (int)result >= 0 )
    {
      v11 = RaidAdapterAcquireInterruptLock(a1);
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_13;
    }
  }
  return result;
}
