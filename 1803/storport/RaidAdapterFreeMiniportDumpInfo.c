/*
 * XREFs of RaidAdapterFreeMiniportDumpInfo @ 0x1C0063B84
 * Callers:
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C00669A8 (RaUnitStorageFreeDumpInfoIoctl.c)
 * Callees:
 *     RaidXrbSetCompletionRoutine @ 0x1C0003624 (RaidXrbSetCompletionRoutine.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C00073D0 (StorFreeContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00073F8 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     RaidFreeSrb @ 0x1C0012210 (RaidFreeSrb.c)
 *     WPP_SF_DD @ 0x1C002C06C (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterFreeMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r13
  _BYTE *v5; // r15
  _BYTE *Srb; // rbx
  unsigned int v7; // edi
  __int64 v8; // rsi
  _QWORD *Pool; // rax
  _QWORD *v12; // rdi
  _BYTE *v13; // rax
  int v14; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  int v21; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  char v24; // [rsp+80h] [rbp+18h]

  v3 = *(_QWORD *)(a3 + 48);
  v4 = 0LL;
  v5 = 0LL;
  v24 = 0;
  Srb = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( v3 )
  {
    if ( v3 == -56 || !*(_QWORD *)(v3 + 48) )
      goto LABEL_6;
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x18uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
    v12 = Pool;
    if ( !Pool )
    {
      v7 = -1073741670;
LABEL_6:
      v5 = 0LL;
      goto LABEL_7;
    }
    *Pool = 0LL;
    Pool[1] = 0LL;
    Pool[2] = 0LL;
    *(_DWORD *)Pool = 24;
    *((_DWORD *)Pool + 1) = 24;
    *((_DWORD *)Pool + 2) = 1179468873;
    Pool[2] = *(_QWORD *)(v3 + 48);
    Srb = RaidAllocateSrb(*(_QWORD *)(a2 + 8), 0x2Bu, *(_BYTE *)(v3 + 154), 0);
    if ( Srb
      && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(a2 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                    v14,
                                    a2),
          (v4 = ContiguousIoResources) != 0) )
    {
      v8 = ContiguousIoResources + 32;
      RaidZeroXrb(ContiguousIoResources + 32, v16, 0, 0LL);
      *(_QWORD *)(v8 + 176) = a1;
      v17 = v4 + 1088;
      *(_QWORD *)(v8 + 184) = v12;
      *(_QWORD *)(v8 + 168) = Srb;
      if ( *(_BYTE *)(v3 + 154) == 1 )
      {
        *((_QWORD *)Srb + 8) = v12;
        v5 = Srb;
        *((_DWORD *)Srb + 5) = 43;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 15) = 24;
        *((_QWORD *)Srb + 10) = a1;
        *((_QWORD *)Srb + 12) = v8;
        *((_QWORD *)Srb + 13) = v17;
        *((_DWORD *)Srb + 10) = 10;
        v24 = 1;
        if ( !*(_BYTE *)(a2 + 4450) )
          *((_DWORD *)Srb + 6) = 128;
      }
      else
      {
        v5 = 0LL;
        *((_QWORD *)Srb + 7) = v17;
        *((_QWORD *)Srb + 3) = v12;
        *(_WORD *)Srb = 88;
        v18 = 256;
        *((_DWORD *)Srb + 3) = 256;
        Srb[2] = 43;
        *((_DWORD *)Srb + 4) = 24;
        *((_QWORD *)Srb + 6) = v8;
        *((_DWORD *)Srb + 5) = 10;
        if ( !*(_BYTE *)(a2 + 4450) )
          v18 = 128;
        *((_DWORD *)Srb + 3) = v18;
      }
      KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Bu,
          (__int64)&WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(a2 + 4450) )
        v20 = RaidAdapterRaiseIrqlAndExecuteXrb(a2, v8);
      else
        v20 = RaidAdapterExecuteXrb(a2, (_QWORD *)v8, v19);
      v21 = v20;
      if ( v20 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
        v21 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Cu,
          (__int64)&WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
          v21,
          Timeout);
      }
      *(_QWORD *)(v3 + 48) = 0LL;
      v7 = 0;
    }
    else
    {
      v7 = -1073741670;
      v5 = 0LL;
    }
  }
LABEL_7:
  if ( v4 )
  {
    RaidXrbDeallocateResources(v8, 0);
    StorFreeContiguousIoResources(a2, v4);
  }
  if ( Srb )
  {
    if ( v24 == 1 )
    {
      v13 = Srb;
      if ( v5 )
        v13 = v5;
      *((_QWORD *)v13 + 10) = 0LL;
      *((_QWORD *)v13 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return v7;
}
