/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaSrbSetMiniportContext @ 0x1C0006F5C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C00073D0 (StorFreeContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00073F8 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0011758 (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidDriverGetName @ 0x1C0011818 (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0011890 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0011960 (RaidGetTelemetryLogPageIds.c)
 *     RtlStringCbPrintfW @ 0x1C0012254 (RtlStringCbPrintfW.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C002C028 (WPP_SF_D.c)
 *     WPP_SF_DD @ 0x1C002C06C (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C002C15C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     WPP_SF_S @ 0x1C003E5B8 (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  IRP *v2; // r12
  _MDL *Pool; // rax
  void *v5; // r15
  __int64 v6; // r13
  __int64 v7; // rbp
  _BYTE *Srb; // rdi
  void *v9; // r14
  char v10; // bl
  _IRP *MasterIrp; // r14
  _MDL *v12; // r12
  unsigned int *p_ByteCount; // r15
  __int64 v14; // rcx
  __int16 v15; // ax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _MDL *v18; // rcx
  signed int AdditionalCrashDumpArea; // ebx
  __int64 v20; // rax
  PVOID v21; // rax
  wchar_t *v22; // r15
  wchar_t *v23; // rax
  __int64 v24; // r8
  PVOID v25; // rax
  __int64 ContiguousIoResources; // rax
  int v27; // eax
  bool v28; // zf
  __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // ecx
  int v35; // eax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _DWORD *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rcx
  int v42; // esi
  int v43; // eax
  _BYTE *v44; // rax
  wchar_t *v45; // [rsp+30h] [rbp-78h]
  __int64 v46; // [rsp+38h] [rbp-70h]
  struct _EPROCESS **p_Process; // [rsp+40h] [rbp-68h]
  _BYTE *v48; // [rsp+48h] [rbp-60h]
  __int64 v49; // [rsp+50h] [rbp-58h] BYREF
  __int64 v50; // [rsp+58h] [rbp-50h]
  _MDL *v51; // [rsp+B0h] [rbp+8h]
  PVOID v53; // [rsp+C0h] [rbp+18h]
  PVOID P; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  Pool = 0LL;
  P = 0LL;
  v5 = 0LL;
  v46 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  a2->IoStatus.Information = 0LL;
  v9 = 0LL;
  v45 = 0LL;
  v10 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  if ( a2->RequestorMode )
  {
    AdditionalCrashDumpArea = -1073741790;
  }
  else if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    AdditionalCrashDumpArea = -1073741789;
    Pool = 0LL;
  }
  else
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    memset(MasterIrp, 0, 0x68uLL);
    Pool = (_MDL *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v51 = Pool;
    if ( Pool )
    {
      v12 = Pool;
      memset(Pool, 0, 0x160uLL);
      HIDWORD(v12->Next) = 280;
      LODWORD(v12->Next) = 1;
      *(_DWORD *)&v12->Size = 1145917508;
      p_Process = &v12->Process;
      p_ByteCount = &v12[5].ByteCount;
      *(_OWORD *)&v12->Process = *(_OWORD *)(v7 + 304);
      *(_OWORD *)&v12->StartVa = *(_OWORD *)(v7 + 320);
      *(_OWORD *)&v12[1].Next = *(_OWORD *)(v7 + 336);
      *(_OWORD *)&v12[1].Process = *(_OWORD *)(v7 + 352);
      *(_OWORD *)&v12[1].StartVa = *(_OWORD *)(v7 + 368);
      *(_OWORD *)&v12[2].Next = *(_OWORD *)(v7 + 384);
      *(_OWORD *)&v12[2].Process = *(_OWORD *)(v7 + 400);
      *(_OWORD *)&v12[2].StartVa = *(_OWORD *)(v7 + 416);
      *(_OWORD *)&v12[3].Next = *(_OWORD *)(v7 + 432);
      *(_OWORD *)&v12[3].Process = *(_OWORD *)(v7 + 448);
      *(_OWORD *)&v12[3].StartVa = *(_OWORD *)(v7 + 464);
      *(_OWORD *)&v12[4].Next = *(_OWORD *)(v7 + 480);
      *(_OWORD *)&v12[4].Process = *(_OWORD *)(v7 + 496);
      *(_OWORD *)&v12[4].StartVa = *(_OWORD *)(v7 + 512);
      RaidGetTelemetryLogPageIds(*(unsigned int *)(v7 + 4356), &v12[5], &v12[5].StartVa);
      v14 = *(_QWORD *)(v7 + 528);
      if ( (*(_DWORD *)(v14 + 184) & 0x80u) != 0 && (*(_DWORD *)(v14 + 188) & 2) != 0 )
        v15 = HiberFileHybridPriority;
      else
        v15 = -1;
      WORD1(v12[5].StartVa) = v15;
      if ( RaidUnitCheckAndAcquirePoFx(a1) )
      {
        if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1488)) >= 0 )
        {
          *(_BYTE *)p_ByteCount = 1;
          v10 = 1;
          v12[6].Next = **(_MDL ***)(a1 + 1488);
        }
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
      }
      v16 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5088LL);
      if ( v16 && (int)PoFxRegisterCrashdumpDevice(*v16) >= 0 )
      {
        v10 = 1;
        LOBYTE(v12[6].MappedSystemVa) = 1;
        v12[6].StartVa = **(void ***)(*(_QWORD *)(a1 + 24) + 5088LL);
      }
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 5152LL) = 40;
      if ( (int)RaidQueryCrashdumpFunctions(
                  *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL),
                  (void *)(*(_QWORD *)(a1 + 24) + 5152LL)) >= 0
        && (v17 = *(_QWORD *)(a1 + 24), (v18 = *(_MDL **)(v17 + 5184)) != 0LL)
        && *(_QWORD *)(v17 + 5176) )
      {
        v12[7].Next = v18;
        *(_QWORD *)&v12[7].Size = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5160LL);
      }
      else
      {
        *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 0;
        if ( !v10 )
        {
LABEL_16:
          AdditionalCrashDumpArea = 0;
          *(_QWORD *)&v12[6].Size = a1 + 1478;
          v20 = *(_QWORD *)(a1 + 24) + 4989LL;
          v12[6].Process = (struct _EPROCESS *)(a1 + 1479);
          *(_QWORD *)&v12[6].ByteCount = v20;
          v21 = RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
          v53 = v21;
          v22 = (wchar_t *)v21;
          if ( !v21 )
          {
            v2 = a2;
            AdditionalCrashDumpArea = -1073741670;
            v5 = 0LL;
            v9 = 0LL;
            goto LABEL_59;
          }
          memset(v21, 0, 0x48uLL);
          v23 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
          v45 = v23;
          if ( !v23 )
          {
            v2 = a2;
            AdditionalCrashDumpArea = -1073741670;
            v5 = 0LL;
            goto LABEL_58;
          }
          memset(v23, 0, 0x48uLL);
          RtlStringCbPrintfW(v22 + 4, 0x1EuLL, L"diskdump.sys");
          RtlStringCbPrintfW(v22 + 19, 0x1EuLL, L"storport.sys");
          *(_QWORD *)v22 = v45;
          *(_QWORD *)v45 = 0LL;
          MasterIrp->MdlAddress = v51;
          BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
          MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v22;
          *(_DWORD *)&MasterIrp->Type = 4;
          *(_DWORD *)(&MasterIrp->Size + 1) = 104;
          *(_QWORD *)&MasterIrp->Flags = 0LL;
          MasterIrp->ThreadListEntry.Flink = 0LL;
          MasterIrp->UserEvent = (_KEVENT *)(a1 + 1479);
          if ( (unsigned __int8)(*(_BYTE *)(v7 + 448) - 2) <= 2u )
            MasterIrp->IoStatus.Status |= 1u;
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 528) + 184LL) & 0x20) != 0 )
            MasterIrp->IoStatus.Status |= 4u;
          v24 = 8LL;
          if ( *(_BYTE *)(v7 + 4450) && (*(_DWORD *)(*(_QWORD *)(v7 + 528) + 184LL) & 8) == 0 )
          {
            v2 = a2;
          }
          else
          {
            v25 = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
            P = v25;
            v5 = v25;
            if ( !v25
              || (memset(v25, 0, 0x70uLL),
                  (Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v7 + 402), 0)) == 0LL)
              || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                            ((*(_DWORD *)(v7 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                            0,
                                            v7),
                  (v46 = ContiguousIoResources) == 0) )
            {
              v2 = a2;
              AdditionalCrashDumpArea = -1073741670;
              goto LABEL_58;
            }
            v6 = ContiguousIoResources + 32;
            RaidZeroXrb(ContiguousIoResources + 32, 0LL, 0, 0LL);
            v2 = a2;
            *(_BYTE *)(v6 + 17) |= 8u;
            *(_QWORD *)(v6 + 176) = a2;
            *(_QWORD *)(v6 + 184) = v5;
            *(_QWORD *)(v6 + 168) = Srb;
            if ( *(_BYTE *)(v7 + 402) == 1 )
            {
              *((_DWORD *)Srb + 6) = 256;
              v35 = *((_DWORD *)Srb + 6);
              *((_QWORD *)Srb + 12) = v6;
              *((_QWORD *)Srb + 10) = a2;
              *((_DWORD *)Srb + 5) = 38;
              *((_QWORD *)Srb + 8) = v5;
              *((_DWORD *)Srb + 15) = 112;
              v28 = *(_BYTE *)(v7 + 4450) == 0;
              *((_DWORD *)Srb + 10) = 10;
              if ( v28 )
                v35 = 64;
              v48 = Srb;
              v36 = *((unsigned int *)Srb + 13);
              *((_DWORD *)Srb + 6) = v35;
              Srb[v36 + 8] = *(_BYTE *)(a1 + 88);
              Srb[v36 + 9] = *(_BYTE *)(a1 + 89);
              Srb[v36 + 10] = *(_BYTE *)(a1 + 90);
            }
            else
            {
              *((_DWORD *)Srb + 3) = 256;
              *(_WORD *)Srb = 88;
              v27 = *((_DWORD *)Srb + 3);
              *((_QWORD *)Srb + 6) = v6;
              Srb[2] = 38;
              *((_QWORD *)Srb + 3) = v5;
              *((_DWORD *)Srb + 4) = 112;
              v28 = *(_BYTE *)(v7 + 4450) == 0;
              *((_DWORD *)Srb + 5) = 10;
              if ( v28 )
                v27 = 64;
              *((_DWORD *)Srb + 3) = v27;
              Srb[5] = *(_BYTE *)(a1 + 88);
              Srb[6] = *(_BYTE *)(a1 + 89);
              Srb[7] = *(_BYTE *)(a1 + 90);
            }
            RaSrbSetMiniportContext(v7, (__int64)Srb, v46 + 1088);
            KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
            *(_QWORD *)(v6 + 656) = RaidXrbSignalCompletion;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                30LL,
                &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                v6,
                Srb);
            }
            if ( *(_BYTE *)(v7 + 4450) )
              v30 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v6);
            else
              v30 = RaidAdapterExecuteXrb(v7, (_QWORD *)v6, v29);
            AdditionalCrashDumpArea = v30;
            if ( v30 >= 0 )
            {
              KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
              AdditionalCrashDumpArea = RaidSrbStatusToNtStatus(Srb[3]);
            }
            v24 = (__int64)&WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_DD(
                WPP_GLOBAL_Control->AttachedDevice,
                31LL,
                &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                (unsigned int)AdditionalCrashDumpArea,
                (unsigned __int8)Srb[3]);
              v24 = (__int64)&WPP_GLOBAL_Control;
            }
            if ( AdditionalCrashDumpArea < 0 )
            {
              if ( !*(_BYTE *)(v7 + 4450) || (*(_DWORD *)(*(_QWORD *)(v7 + 528) + 184LL) & 0x1000) != 0 )
              {
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) )
                {
                  WPP_SF_qD(
                    WPP_GLOBAL_Control->AttachedDevice,
                    32LL,
                    &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                    v6,
                    AdditionalCrashDumpArea);
                }
                goto LABEL_57;
              }
              AdditionalCrashDumpArea = 0;
            }
            else
            {
              v31 = *((_DWORD *)P + 20);
              if ( v31 )
              {
                *((_DWORD *)p_Process + 6) = v31;
                v32 = *((_DWORD *)P + 20);
              }
              else
              {
                v32 = *((_DWORD *)p_Process + 6);
              }
              HIDWORD(MasterIrp->IoStatus.Information) = v32;
              p_Process[8] = (struct _EPROCESS *)*((_QWORD *)P + 8);
              if ( !*(_BYTE *)(v7 + 4450) )
              {
                *((_DWORD *)p_Process + 1) = *((_DWORD *)P + 18);
                *((_DWORD *)p_Process + 2) = *((_DWORD *)P + 19);
                *((_DWORD *)p_Process + 7) = *((_DWORD *)P + 21);
                *((_DWORD *)p_Process + 12) = *((_DWORD *)P + 22);
                *((_DWORD *)p_Process + 13) = *((_DWORD *)P + 23);
                p_Process[7] = (struct _EPROCESS *)*((_QWORD *)P + 12);
                *((_BYTE *)p_Process + 72) = *((_BYTE *)P + 104);
                *((_BYTE *)p_Process + 82) = *((_BYTE *)P + 105);
                *((_BYTE *)p_Process + 89) = *((_BYTE *)P + 106);
                *((_BYTE *)p_Process + 97) = *((_BYTE *)P + 107);
                RtlStringCbPrintfW(v45 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)P + 2);
                *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
                MasterIrp->UserIosb = 0LL;
                MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)P + 14);
              }
              *(_BYTE *)(a1 + 1477) = 1;
            }
          }
          if ( *(_BYTE *)(v7 + 4450) )
          {
            RaidDriverGetName(*(_QWORD *)(v7 + 16), &v49);
            RtlStringCbPrintfW(v45 + 4, 0x1EuLL, L"%ws.sys", v50);
            v33 = (*(_DWORD *)(v7 + 444) + 7) & 0xFFFFFFF8;
            if ( !v33 )
              v33 = 16;
            v28 = HIDWORD(MasterIrp->IoStatus.Information) == 0;
            MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v7 + 744) + 4095 + 16 * v33) & 0xFFFFF000;
            if ( v28 )
              HIDWORD(MasterIrp->IoStatus.Information) = *((_DWORD *)p_Process + 6);
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v7 + 696);
            MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v7 + 760);
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 524LL) & 1) != 0 )
            {
              v37 = RaidAllocatePool(NonPagedPoolNx, 0x7CuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
              v38 = v37;
              if ( v37 )
              {
                v37[2] = 1771264LL;
                *(_DWORD *)v37 = 28;
                *((_DWORD *)v37 + 6) = 96;
                memmove((char *)v37 + 4, "TELEMTRY", 8uLL);
                v38[3] = 1;
                *((_WORD *)v38 + 14) = 2;
                if ( Srb )
                {
                  if ( *(_BYTE *)(v7 + 402) == 1 )
                  {
                    memset(Srb, 0, 0x90uLL);
                    *((_DWORD *)Srb + 14) = 0;
                    *(_WORD *)Srb = 8;
                    Srb[2] = 40;
                    *((_DWORD *)Srb + 2) = 1397899864;
                    *((_DWORD *)Srb + 3) = 1;
                    *((_DWORD *)Srb + 4) = 144;
                    *((_DWORD *)Srb + 13) = 128;
                    *((_DWORD *)Srb + 5) = 2;
                    *((_WORD *)Srb + 18) = 2;
                    *((_WORD *)Srb + 64) = 1;
                    *((_DWORD *)Srb + 33) = 4;
                    v48 = Srb;
                  }
                  else
                  {
                    memset(Srb, 0, 0x58uLL);
                  }
                }
                else
                {
                  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v7 + 402), 0);
                }
                if ( Srb )
                {
                  v40 = v46;
                  if ( v46
                    || (v46 = StorAllocateContiguousIoResources(
                                ((*(_DWORD *)(v7 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                v39,
                                v7),
                        (v40 = v46) != 0) )
                  {
                    v6 = v40 + 32;
                    RaidZeroXrb(v40 + 32, v39, 0, 0LL);
                    *(_QWORD *)(v40 + 208) = v2;
                    *(_QWORD *)(v40 + 216) = v38;
                    *(_QWORD *)(v40 + 200) = Srb;
                    if ( *(_BYTE *)(v7 + 402) == 1 )
                    {
                      v41 = *((unsigned int *)Srb + 13);
                      *((_QWORD *)Srb + 12) = v6;
                      *((_QWORD *)Srb + 10) = v2;
                      *((_DWORD *)Srb + 5) = 2;
                      *((_QWORD *)Srb + 8) = v38;
                      *((_DWORD *)Srb + 15) = 124;
                      *((_DWORD *)Srb + 6) = 256;
                      *((_DWORD *)Srb + 10) = 1;
                      Srb[v41 + 8] = *(_BYTE *)(a1 + 88);
                      Srb[v41 + 9] = *(_BYTE *)(a1 + 89);
                      Srb[v41 + 10] = *(_BYTE *)(a1 + 90);
                      v48 = Srb;
                    }
                    else
                    {
                      *((_QWORD *)Srb + 6) = v6;
                      *(_WORD *)Srb = 88;
                      Srb[2] = 2;
                      *((_QWORD *)Srb + 3) = v38;
                      *((_DWORD *)Srb + 4) = 124;
                      *((_DWORD *)Srb + 3) = 256;
                      *((_DWORD *)Srb + 5) = 1;
                      Srb[5] = *(_BYTE *)(a1 + 88);
                      Srb[6] = *(_BYTE *)(a1 + 89);
                      Srb[7] = *(_BYTE *)(a1 + 90);
                    }
                    RaSrbSetMiniportContext(v7, (__int64)Srb, v40 + 1088);
                    KeInitializeEvent((PRKEVENT)(v40 + 696), NotificationEvent, 0);
                    *(_QWORD *)(v40 + 688) = RaidXrbSignalCompletion;
                    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) )
                    {
                      WPP_SF_qq(
                        WPP_GLOBAL_Control->AttachedDevice,
                        33LL,
                        &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                        v6,
                        Srb);
                    }
                    v42 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v6);
                    if ( v42 >= 0 )
                    {
                      KeWaitForSingleObject((PVOID)(v40 + 696), Executive, 0, 0, 0LL);
                      v42 = RaidSrbStatusToNtStatus(Srb[3]);
                    }
                    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) )
                    {
                      WPP_SF_DD(
                        WPP_GLOBAL_Control->AttachedDevice,
                        34LL,
                        &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                        (unsigned int)v42,
                        (unsigned __int8)Srb[3]);
                    }
                    if ( v42 >= 0 && v38[7] == 1497715456 )
                    {
                      HIDWORD(MasterIrp->IoStatus.Pointer) = *(_DWORD *)(v7 + 4992) + 33162;
                      v43 = *(unsigned __int8 *)(v7 + 4990);
                      MasterIrp->IoStatus.Status |= 2u;
                      LODWORD(MasterIrp->IoStatus.Information) = v43;
                    }
                  }
                }
                ExFreePoolWithTag(v38, 0x44436152u);
              }
              else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) )
              {
                WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids);
              }
              AdditionalCrashDumpArea = 0;
            }
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, 0LL, v24, v45 + 4);
          }
          if ( *(_DWORD *)(v7 + 496) )
            AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v7, p_Process);
          if ( AdditionalCrashDumpArea < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_D(
                WPP_GLOBAL_Control->AttachedDevice,
                37LL,
                &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
                (unsigned int)AdditionalCrashDumpArea);
            }
          }
          else
          {
            v2->IoStatus.Information = 104LL;
          }
LABEL_57:
          v5 = P;
LABEL_58:
          v9 = v53;
LABEL_59:
          Pool = v51;
          goto LABEL_60;
        }
      }
      MasterIrp->Overlay.AsynchronousParameters.UserApcContext = p_ByteCount;
      MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
      goto LABEL_16;
    }
    AdditionalCrashDumpArea = -1073741670;
    v9 = 0LL;
  }
LABEL_60:
  if ( AdditionalCrashDumpArea < 0 )
  {
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x44436152u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x44436152u);
    if ( v45 )
      ExFreePoolWithTag(v45, 0x44436152u);
  }
  if ( v46 )
  {
    RaidXrbDeallocateResources(v6, 0);
    StorFreeContiguousIoResources(v7, v46);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v44 = Srb;
      if ( v48 )
        v44 = v48;
      *((_QWORD *)v44 + 10) = 0LL;
      *((_QWORD *)v44 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  return RaidCompleteRequestEx(v2, 0, AdditionalCrashDumpArea);
}
