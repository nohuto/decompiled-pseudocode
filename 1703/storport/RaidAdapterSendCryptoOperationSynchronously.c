/*
 * XREFs of RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54
 * Callers:
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002B8A0 (RaidAdapterAcquireCryptoKeyResources.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidDriverGetName @ 0x1C0018C0C (RaidDriverGetName.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqq @ 0x1C0030650 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidAdapterSendCryptoOperationSynchronously(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // ecx
  __int64 ContiguousIoResources; // r15
  _BYTE *Srb; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h]
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1072;
  ContiguousIoResources = 0LL;
  Srb = 0LL;
  if ( !*(_QWORD *)(a1 + 5696) )
    return (unsigned int)-1073741637;
  if ( *(_WORD *)a3 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)(a3 + 2) != 40 )
  {
    v10 = -1073741811;
    goto LABEL_40;
  }
  if ( *(int *)(a3 + 4) >= 2 )
    return (unsigned int)-1073741811;
  ContiguousIoResources = StorAllocateContiguousIoResources(v7, a2, (_QWORD *)a1);
  if ( !ContiguousIoResources )
    return (unsigned int)-1073741670;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x29u, *(_BYTE *)(a1 + 402), 0);
  if ( Srb )
  {
    v6 = ContiguousIoResources + 16;
    RaidZeroXrb(ContiguousIoResources + 16, v11, 0, 0LL);
    *(_QWORD *)(ContiguousIoResources + 200) = a3;
    *(_QWORD *)(ContiguousIoResources + 184) = Srb;
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      *((_QWORD *)Srb + 12) = v6;
      v5 = Srb;
      *((_DWORD *)Srb + 5) = 41;
      *((_QWORD *)Srb + 8) = a3;
      *((_DWORD *)Srb + 15) = 40;
      *((_DWORD *)Srb + 6) = 256;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
      v12 = *((unsigned int *)Srb + 13);
      *(_WORD *)&Srb[v12 + 8] = 0;
      Srb[v12 + 10] = 0;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v6;
      *(_WORD *)Srb = 88;
      Srb[2] = 41;
      *((_QWORD *)Srb + 3) = a3;
      *((_DWORD *)Srb + 4) = 40;
      *((_DWORD *)Srb + 3) = 256;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4204);
      *(_WORD *)(Srb + 5) = 0;
      Srb[7] = 0;
    }
    RaSrbSetMiniportContext(a1, (__int64)Srb, ContiguousIoResources + 1072);
    KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 680), NotificationEvent, 0);
    *(_QWORD *)(ContiguousIoResources + 672) = RaidXrbSignalCompletion;
    v13 = *(_QWORD *)(a1 + 5088);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 20) & 1) == 0 )
      {
        v10 = -1073741101;
        goto LABEL_40;
      }
      RaidAdapterPoFxActivateComponent(a1, 0LL, 2LL);
    }
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          70LL,
          &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
          ContiguousIoResources + 16,
          v5,
          *((_QWORD *)v5 + 13));
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        71LL,
        &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
        ContiguousIoResources + 16,
        Srb,
        *((_QWORD *)Srb + 7));
    }
    v14 = (_QWORD *)(ContiguousIoResources + 16);
    if ( *(_BYTE *)(a1 + 4450) )
      RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v14);
    else
      RaidAdapterExecuteXrb(a1, v14, a3);
    Timeout.QuadPart = -10000000LL * (unsigned int)(*(_DWORD *)(a1 + 4204) + 20);
    if ( KeWaitForSingleObject((PVOID)(ContiguousIoResources + 680), Executive, 0, 0, &Timeout) )
    {
      v16 = 0LL;
      BugCheckParameter2 = 0LL;
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ContiguousIoResources + 240) + 24LL) + 16LL), (__int64)&v16);
      if ( *(_BYTE *)(a1 + 402) == 1 )
        Srb = v5;
      KeBugCheckEx(0xF0u, 3uLL, BugCheckParameter2, (ULONG_PTR)Srb, *(unsigned int *)(a1 + 4204));
    }
    if ( (*(_BYTE *)(ContiguousIoResources + 33) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(ContiguousIoResources + 764));
      *(_BYTE *)(ContiguousIoResources + 33) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    v10 = RaidSrbStatusToNtStatus(Srb[3]);
    goto LABEL_40;
  }
  v10 = -1073741670;
LABEL_40:
  if ( ContiguousIoResources )
  {
    RaidXrbDeallocateResources(v6, 0, a3);
    MmFreeContiguousMemory((PVOID)ContiguousIoResources);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      if ( !v5 )
        v5 = Srb;
      *((_QWORD *)v5 + 10) = 0LL;
      *((_QWORD *)v5 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v10;
}
