/*
 * XREFs of RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88
 * Callers:
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C003B420 (RaUnitStorageFreeDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_DD @ 0x1C0031680 (WPP_SF_DD.c)
 */

__int64 __fastcall RaidUnitStorageFreeMiniPortDumpPointers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _BYTE *v4; // r13
  unsigned int v5; // edi
  __int64 v8; // rdi
  _DWORD *Pool; // rax
  _DWORD *v10; // r15
  __int64 v11; // rdx
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  char *v15; // r12
  __int64 v17; // rsi
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r8
  int v25; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  char v28; // [rsp+78h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = 0LL;
  v5 = 0;
  v28 = 0;
  if ( v3 && *(_BYTE *)(a2 + 1445) )
  {
    v8 = *(_QWORD *)(a3 + 48);
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
    v10 = Pool;
    if ( !Pool )
      return (unsigned int)-1073741670;
    memset(Pool, 0, 0x70uLL);
    *v10 = 7340288;
    v10[14] = *(_DWORD *)(a3 + 104);
    v10[18] = *(_DWORD *)(v8 + 12);
    v10[19] = *(_DWORD *)(v8 + 16);
    v10[20] = *(_DWORD *)(v8 + 32);
    v10[21] = *(_DWORD *)(v8 + 36);
    v10[22] = *(_DWORD *)(v8 + 56);
    v10[23] = *(_DWORD *)(v8 + 60);
    *((_QWORD *)v10 + 12) = *(_QWORD *)(v8 + 64);
    *((_BYTE *)v10 + 104) = *(_BYTE *)(v8 + 80);
    *((_BYTE *)v10 + 105) = *(_BYTE *)(v8 + 90);
    *((_BYTE *)v10 + 106) = *(_BYTE *)(v8 + 97);
    *((_BYTE *)v10 + 107) = *(_BYTE *)(v8 + 105);
    *((_QWORD *)v10 + 8) = *(_QWORD *)(v8 + 72);
    Srb = RaidAllocateSrb(*(_QWORD *)(a2 + 8), 0x27u, *(_BYTE *)(v8 + 106), 0);
    if ( !Srb )
    {
      v5 = -1073741670;
LABEL_11:
      ExFreePoolWithTag(v10, 0x44436152u);
      return v5;
    }
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v3 + 444) + 7) & 0xFFFFFFF8) + 1072,
                              v11,
                              (_QWORD *)v3);
    v15 = (char *)ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v17 = ContiguousIoResources + 16;
      RaidZeroXrb(ContiguousIoResources + 16, v14, 0, 0LL);
      *(_QWORD *)(v17 + 176) = a1;
      *(_QWORD *)(v17 + 184) = v10;
      *(_QWORD *)(v17 + 168) = Srb;
      if ( *(_BYTE *)(v8 + 106) == 1 )
      {
        *((_DWORD *)Srb + 6) = 256;
        v4 = Srb;
        v18 = *((_DWORD *)Srb + 6);
        *((_DWORD *)Srb + 5) = 39;
        *((_QWORD *)Srb + 8) = v10;
        *((_DWORD *)Srb + 15) = 112;
        v19 = *(_BYTE *)(v3 + 4450) == 0;
        *((_DWORD *)Srb + 10) = 10;
        if ( v19 )
          v18 = 128;
        *((_QWORD *)Srb + 10) = a1;
        v20 = *((unsigned int *)Srb + 13);
        *((_DWORD *)Srb + 6) = v18;
        *((_QWORD *)Srb + 13) = v15 + 1072;
        *((_QWORD *)Srb + 12) = v17;
        Srb[v20 + 8] = *(_BYTE *)(a2 + 88);
        Srb[v20 + 9] = *(_BYTE *)(a2 + 89);
        Srb[v20 + 10] = *(_BYTE *)(a2 + 90);
        v28 = 1;
      }
      else
      {
        *((_DWORD *)Srb + 3) = 256;
        *(_WORD *)Srb = 88;
        v21 = *((_DWORD *)Srb + 3);
        Srb[2] = 39;
        *((_QWORD *)Srb + 3) = v10;
        *((_DWORD *)Srb + 4) = 112;
        v19 = *(_BYTE *)(v3 + 4450) == 0;
        *((_DWORD *)Srb + 5) = 10;
        if ( v19 )
          v21 = 128;
        *((_DWORD *)Srb + 3) = v21;
        Srb[5] = *(_BYTE *)(a2 + 88);
        Srb[6] = *(_BYTE *)(a2 + 89);
        Srb[7] = *(_BYTE *)(a2 + 90);
        *((_QWORD *)Srb + 7) = v15 + 1072;
        *((_QWORD *)Srb + 6) = v17;
      }
      KeInitializeEvent((PRKEVENT)(v17 + 664), NotificationEvent, 0);
      *(_QWORD *)(v17 + 656) = RaidXrbSignalCompletion;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x52u,
          (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
          v17,
          Srb);
      }
      if ( *(_BYTE *)(v3 + 4450) )
        v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v3, v17);
      else
        v23 = RaidAdapterExecuteXrb(v3, (_QWORD *)v17, v22);
      v25 = v23;
      if ( v23 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v17 + 664), Executive, 0, 0, 0LL);
        v25 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x53u,
          (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
          v25,
          Timeout);
      }
      v5 = 0;
      RaidXrbDeallocateResources(v17, 0, v24);
      MmFreeContiguousMemory(v15);
      if ( v28 == 1 )
      {
        if ( !v4 )
          v4 = Srb;
        *((_QWORD *)v4 + 10) = 0LL;
        *((_QWORD *)v4 + 13) = 0LL;
        goto LABEL_10;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
LABEL_10:
    ExFreePoolWithTag(Srb, 0x72536152u);
    goto LABEL_11;
  }
  return v5;
}
