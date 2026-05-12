/*
 * XREFs of RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C
 * Callers:
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0068718 (RaUnitStorageFreeDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000E488 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B194 (RaidFreeSrb.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterFreeMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  _BYTE *v4; // rbp
  unsigned int v5; // edi
  _QWORD *Pool; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v20; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  char v22; // [rsp+80h] [rbp+18h]
  char *BaseAddress; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a3 + 48);
  v4 = 0LL;
  v5 = 0;
  v22 = 0;
  if ( v3 && v3 != -56 && *(_QWORD *)(v3 + 48) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x18uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
    v9 = Pool;
    if ( Pool )
    {
      *Pool = 0LL;
      Pool[1] = 0LL;
      Pool[2] = 0LL;
      *(_DWORD *)Pool = 24;
      *((_DWORD *)Pool + 1) = 24;
      *((_DWORD *)Pool + 2) = 1179468873;
      Pool[2] = *(_QWORD *)(v3 + 48);
      Srb = RaidAllocateSrb(*(_QWORD *)(a2 + 8), 0x2Bu, *(_BYTE *)(v3 + 154), 0);
      if ( Srb )
      {
        ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(a2 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                  v10,
                                  (_QWORD *)a2);
        BaseAddress = (char *)ContiguousIoResources;
        if ( ContiguousIoResources )
        {
          v15 = ContiguousIoResources + 16;
          RaidZeroXrb(ContiguousIoResources + 16, v13, 0, 0LL);
          *(_QWORD *)(v15 + 176) = a1;
          *(_QWORD *)(v15 + 184) = v9;
          *(_QWORD *)(v15 + 168) = Srb;
          if ( *(_BYTE *)(v3 + 154) == 1 )
          {
            *((_QWORD *)Srb + 8) = v9;
            *((_DWORD *)Srb + 5) = 43;
            *((_DWORD *)Srb + 6) = 256;
            v4 = Srb;
            *((_DWORD *)Srb + 15) = 24;
            *((_QWORD *)Srb + 10) = a1;
            *((_QWORD *)Srb + 12) = v15;
            *((_QWORD *)Srb + 13) = BaseAddress + 1072;
            *((_DWORD *)Srb + 10) = 10;
            v22 = 1;
            if ( !*(_BYTE *)(a2 + 4450) )
              *((_DWORD *)Srb + 6) = 128;
          }
          else
          {
            *((_QWORD *)Srb + 3) = v9;
            *(_WORD *)Srb = 88;
            *((_DWORD *)Srb + 3) = 256;
            *((_QWORD *)Srb + 7) = BaseAddress + 1072;
            v16 = 256;
            Srb[2] = 43;
            *((_DWORD *)Srb + 4) = 24;
            *((_QWORD *)Srb + 6) = v15;
            *((_DWORD *)Srb + 5) = 10;
            if ( !*(_BYTE *)(a2 + 4450) )
              v16 = 128;
            *((_DWORD *)Srb + 3) = v16;
          }
          KeInitializeEvent((PRKEVENT)(v15 + 664), NotificationEvent, 0);
          RaidXrbSetCompletionRoutine(v15, (__int64)RaidXrbSignalCompletion);
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0x4Cu,
              (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
              v15,
              Srb);
          }
          if ( *(_BYTE *)(a2 + 4450) )
            v18 = RaidAdapterRaiseIrqlAndExecuteXrb(a2, v15);
          else
            v18 = RaidAdapterExecuteXrb(a2, (_QWORD *)v15, v17);
          v20 = v18;
          if ( v18 >= 0 )
          {
            KeWaitForSingleObject((PVOID)(v15 + 664), Executive, 0, 0, 0LL);
            v20 = RaidSrbStatusToNtStatus(Srb[3]);
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            LODWORD(Timeout) = (unsigned __int8)Srb[3];
            WPP_SF_DD(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0x4Du,
              (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
              v20,
              Timeout);
          }
          *(_QWORD *)(v3 + 48) = 0LL;
          v5 = 0;
          RaidXrbDeallocateResources(v15, 0, v19);
          MmFreeContiguousMemory(BaseAddress);
          if ( v22 == 1 )
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
        RaidFreeSrb(Srb);
        return v5;
      }
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
