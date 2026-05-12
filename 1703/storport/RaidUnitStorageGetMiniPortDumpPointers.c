/*
 * XREFs of RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C
 * Callers:
 *     RaidUnitCreateDumpAdapter @ 0x1C003CB54 (RaidUnitCreateDumpAdapter.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_qD @ 0x1C003040C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_DD @ 0x1C0031680 (WPP_SF_DD.c)
 */

__int64 __fastcall RaidUnitStorageGetMiniPortDumpPointers(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r14
  _BYTE *v5; // r15
  _QWORD *Pool; // rax
  _QWORD *v10; // rbp
  int v11; // ebx
  __int64 v12; // rdx
  _BYTE *Srb; // rdi
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  void *v16; // r13
  __int64 v18; // rsi
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r8
  PDEVICE_OBJECT v26; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  char v28; // [rsp+78h] [rbp+10h]

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0LL;
  *a4 = 0LL;
  v28 = 0;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  v10 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, 0x70uLL);
  if ( a3 )
    v10[8] = a3;
  Srb = RaidAllocateSrb(*(_QWORD *)(a2 + 8), 0x26u, *(_BYTE *)(v4 + 402), 0);
  if ( !Srb )
  {
    v11 = -1073741670;
    goto LABEL_11;
  }
  ContiguousIoResources = StorAllocateContiguousIoResources(
                            ((*(_DWORD *)(v4 + 444) + 7) & 0xFFFFFFF8) + 1072,
                            v12,
                            (_QWORD *)v4);
  v16 = (void *)ContiguousIoResources;
  if ( !ContiguousIoResources )
  {
    v11 = -1073741670;
    goto LABEL_9;
  }
  v18 = ContiguousIoResources + 16;
  RaidZeroXrb(ContiguousIoResources + 16, v15, 0, 0LL);
  *(_BYTE *)(v18 + 17) |= 8u;
  *(_QWORD *)(v18 + 176) = a1;
  *(_QWORD *)(v18 + 184) = v10;
  *(_QWORD *)(v18 + 168) = Srb;
  if ( *(_BYTE *)(v4 + 402) == 1 )
  {
    *((_QWORD *)Srb + 10) = a1;
    v5 = Srb;
    *((_QWORD *)Srb + 12) = v18;
    *((_DWORD *)Srb + 6) = 256;
    v19 = 256;
    *((_DWORD *)Srb + 5) = 38;
    *((_QWORD *)Srb + 8) = v10;
    *((_DWORD *)Srb + 15) = 112;
    v20 = *(_BYTE *)(v4 + 4450) == 0;
    *((_DWORD *)Srb + 10) = 10;
    if ( v20 )
      v19 = 64;
    v28 = 1;
    v21 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 6) = v19;
    Srb[v21 + 8] = *(_BYTE *)(a2 + 88);
    Srb[v21 + 9] = *(_BYTE *)(a2 + 89);
    Srb[v21 + 10] = *(_BYTE *)(a2 + 90);
  }
  else
  {
    *((_QWORD *)Srb + 6) = v18;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 3) = 256;
    v22 = 256;
    Srb[2] = 38;
    *((_QWORD *)Srb + 3) = v10;
    *((_DWORD *)Srb + 4) = 112;
    v20 = *(_BYTE *)(v4 + 4450) == 0;
    *((_DWORD *)Srb + 5) = 10;
    if ( v20 )
      v22 = 64;
    *((_DWORD *)Srb + 3) = v22;
    Srb[5] = *(_BYTE *)(a2 + 88);
    Srb[6] = *(_BYTE *)(a2 + 89);
    Srb[7] = *(_BYTE *)(a2 + 90);
  }
  RaSrbSetMiniportContext(v4, (__int64)Srb, (__int64)v16 + 1072);
  KeInitializeEvent((PRKEVENT)(v18 + 664), NotificationEvent, 0);
  *(_QWORD *)(v18 + 656) = RaidXrbSignalCompletion;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Fu,
      (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
      v18,
      Srb);
  }
  if ( *(_BYTE *)(v4 + 4450) )
    v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v4, v18);
  else
    v24 = RaidAdapterExecuteXrb(v4, (_QWORD *)v18, v23);
  v11 = v24;
  if ( v24 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v18 + 664), Executive, 0, 0, 0LL);
    v11 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  v26 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    LODWORD(Timeout) = (unsigned __int8)Srb[3];
    WPP_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x50u,
      (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
      v11,
      Timeout);
    v26 = WPP_GLOBAL_Control;
  }
  if ( v11 >= 0 )
    goto LABEL_41;
  if ( *(_BYTE *)(v4 + 4450) )
  {
    v11 = 0;
LABEL_41:
    *a4 = v10;
    v10 = 0LL;
    goto LABEL_42;
  }
  if ( v26 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v26->Timer) & 0x100) != 0 && BYTE1(v26->Timer) )
  {
    LODWORD(Timeout) = v11;
    WPP_SF_qD(
      (__int64)v26->AttachedDevice,
      0x51u,
      (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
      v18,
      Timeout);
  }
LABEL_42:
  RaidXrbDeallocateResources(v18, 0, v25);
  MmFreeContiguousMemory(v16);
  if ( v28 == 1 )
  {
    if ( !v5 )
      v5 = Srb;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 13) = 0LL;
    goto LABEL_10;
  }
LABEL_9:
  *((_QWORD *)Srb + 6) = 0LL;
  *((_QWORD *)Srb + 7) = 0LL;
LABEL_10:
  ExFreePoolWithTag(Srb, 0x72536152u);
LABEL_11:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x44436152u);
  return (unsigned int)v11;
}
