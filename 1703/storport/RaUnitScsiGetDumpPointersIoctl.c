/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C000FB7C (StorPortGetAdditionalCrashDumpArea.c)
 *     RtlStringCbPrintfW @ 0x1C00169A8 (RtlStringCbPrintfW.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0018A34 (RaidGetTelemetryLogPageIds.c)
 *     RaidDriverGetName @ 0x1C0018C0C (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0018C78 (RaidQueryCrashdumpFunctions.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003040C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1C00307A4 (WPP_SF_D.c)
 *     WPP_SF_DD @ 0x1C0031680 (WPP_SF_DD.c)
 *     WPP_SF_S @ 0x1C003FBEC (WPP_SF_S.c)
 */

__int64 __fastcall RaUnitScsiGetDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  __int64 v4; // r13
  _BYTE *Srb; // rbx
  char v6; // di
  _IRP *MasterIrp; // r14
  _MDL *Pool; // rax
  _MDL *v9; // r12
  unsigned int *p_ByteCount; // r15
  __int64 v11; // rcx
  __int16 v12; // ax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _MDL *v15; // rcx
  signed int v16; // edi
  __int64 v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // r15
  wchar_t *v20; // rax
  __int64 v21; // rdx
  PVOID v22; // rax
  PVOID v23; // r12
  __int64 v24; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  int v28; // eax
  bool v29; // zf
  __int64 v30; // r8
  int v31; // eax
  PDEVICE_OBJECT v32; // rcx
  __int64 v33; // r8
  char *v34; // r15
  int v35; // eax
  __int64 v36; // r15
  int v37; // eax
  wchar_t *v38; // r12
  unsigned int v39; // ecx
  signed int AdditionalCrashDumpArea; // eax
  IRP *v41; // rsi
  int v43; // eax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // r9
  _DWORD *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // esi
  int v51; // eax
  _BYTE *v52; // rax
  _BYTE *v53; // [rsp+30h] [rbp-78h]
  _MDL *v54; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+40h] [rbp-68h]
  wchar_t *v56; // [rsp+48h] [rbp-60h]
  __int64 v57; // [rsp+50h] [rbp-58h] BYREF
  __int64 v58; // [rsp+58h] [rbp-50h]
  wchar_t *v59; // [rsp+B0h] [rbp+8h]
  __int64 p_Process; // [rsp+C0h] [rbp+18h]
  char *BaseAddress; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  BaseAddress = 0LL;
  v4 = 0LL;
  Srb = 0LL;
  v6 = 0;
  v59 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v53 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( a2->RequestorMode )
  {
    v16 = -1073741790;
LABEL_73:
    v41 = a2;
    return RaidCompleteRequestEx(v41, 0, v16);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    v16 = -1073741789;
    goto LABEL_73;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = (_MDL *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v54 = Pool;
  v9 = Pool;
  if ( !Pool )
  {
    v16 = -1073741670;
    goto LABEL_73;
  }
  memset(Pool, 0, 0x160uLL);
  HIDWORD(v9->Next) = 280;
  *(_DWORD *)&v9->Size = 1145917508;
  LODWORD(v9->Next) = 1;
  p_Process = (__int64)&v9->Process;
  p_ByteCount = &v9[5].ByteCount;
  *(_OWORD *)&v9->Process = *(_OWORD *)(v2 + 304);
  *(_OWORD *)&v9->StartVa = *(_OWORD *)(v2 + 320);
  *(_OWORD *)&v9[1].Next = *(_OWORD *)(v2 + 336);
  *(_OWORD *)&v9[1].Process = *(_OWORD *)(v2 + 352);
  *(_OWORD *)&v9[1].StartVa = *(_OWORD *)(v2 + 368);
  *(_OWORD *)&v9[2].Next = *(_OWORD *)(v2 + 384);
  *(_OWORD *)&v9[2].Process = *(_OWORD *)(v2 + 400);
  *(_OWORD *)&v9[2].StartVa = *(_OWORD *)(v2 + 416);
  *(_OWORD *)&v9[3].Next = *(_OWORD *)(v2 + 432);
  *(_OWORD *)&v9[3].Process = *(_OWORD *)(v2 + 448);
  *(_OWORD *)&v9[3].StartVa = *(_OWORD *)(v2 + 464);
  *(_OWORD *)&v9[4].Next = *(_OWORD *)(v2 + 480);
  *(_OWORD *)&v9[4].Process = *(_OWORD *)(v2 + 496);
  *(_OWORD *)&v9[4].StartVa = *(_OWORD *)(v2 + 512);
  RaidGetTelemetryLogPageIds(*(unsigned int *)(v2 + 4356), &v9[5], &v9[5].StartVa);
  v11 = *(_QWORD *)(v2 + 528);
  if ( (*(_DWORD *)(v11 + 184) & 0x80u) != 0 && (*(_DWORD *)(v11 + 188) & 2) != 0 )
    v12 = HiberFileHybridPriority;
  else
    v12 = -1;
  WORD1(v9[5].StartVa) = v12;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1456)) >= 0 )
    {
      *(_BYTE *)p_ByteCount = 1;
      v6 = 1;
      v9[6].Next = **(_MDL ***)(a1 + 1456);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  v13 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 5088LL);
  if ( v13 && (int)PoFxRegisterCrashdumpDevice(*v13) >= 0 )
  {
    v6 = 1;
    LOBYTE(v9[6].MappedSystemVa) = 1;
    v9[6].StartVa = **(void ***)(*(_QWORD *)(a1 + 24) + 5088LL);
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5152LL) = 40;
  if ( (int)RaidQueryCrashdumpFunctions(
              *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL),
              (void *)(*(_QWORD *)(a1 + 24) + 5152LL)) >= 0 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    v15 = *(_MDL **)(v14 + 5184);
    if ( v15 )
    {
      if ( *(_QWORD *)(v14 + 5176) )
      {
        v9[7].Next = v15;
        *(_QWORD *)&v9[7].Size = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5160LL);
LABEL_15:
        MasterIrp->Overlay.AsynchronousParameters.UserApcContext = p_ByteCount;
        MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
        goto LABEL_16;
      }
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 0;
  if ( v6 )
    goto LABEL_15;
LABEL_16:
  v16 = 0;
  *(_QWORD *)&v9[6].Size = a1 + 1446;
  v17 = *(_QWORD *)(a1 + 24) + 4989LL;
  v9[6].Process = (struct _EPROCESS *)(a1 + 1447);
  *(_QWORD *)&v9[6].ByteCount = v17;
  v18 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v56 = v18;
  v19 = v18;
  if ( !v18 )
    goto LABEL_81;
  memset(v18, 0, 0x48uLL);
  v20 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v59 = v20;
  if ( !v20 )
    goto LABEL_81;
  memset(v20, 0, 0x48uLL);
  RtlStringCbPrintfW(v19 + 4, 0x1EuLL, L"diskdump.sys");
  RtlStringCbPrintfW(v19 + 19, 0x1EuLL, L"storport.sys");
  *(_QWORD *)v19 = v59;
  *(_QWORD *)v59 = 0LL;
  *(_QWORD *)&MasterIrp->Flags = 0LL;
  MasterIrp->ThreadListEntry.Flink = 0LL;
  MasterIrp->MdlAddress = v54;
  *(_DWORD *)&MasterIrp->Type = 4;
  *(_DWORD *)(&MasterIrp->Size + 1) = 104;
  BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
  MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v19;
  MasterIrp->UserEvent = (_KEVENT *)(a1 + 1447);
  if ( (unsigned __int8)(*(_BYTE *)(v2 + 448) - 2) <= 2u )
    MasterIrp->IoStatus.Status |= 1u;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 528) + 184LL) & 0x20) != 0 )
    MasterIrp->IoStatus.Status |= 4u;
  v21 = 8LL;
  if ( *(_BYTE *)(v2 + 4450) && (*(_DWORD *)(*(_QWORD *)(v2 + 528) + 184LL) & 8) == 0 )
  {
    v32 = WPP_GLOBAL_Control;
LABEL_70:
    v36 = p_Process;
    goto LABEL_45;
  }
  v22 = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  P = v22;
  v23 = v22;
  if ( !v22
    || (memset(v22, 0, 0x70uLL), (Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 402), 0)) == 0LL)
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                  v24,
                                  (_QWORD *)v2),
        BaseAddress = (char *)ContiguousIoResources,
        (v27 = ContiguousIoResources) == 0) )
  {
LABEL_81:
    v41 = a2;
    v16 = -1073741670;
LABEL_138:
    ExFreePoolWithTag(v54, 0x44436152u);
    if ( v19 )
      ExFreePoolWithTag(v19, 0x44436152u);
    v34 = 0LL;
    if ( v59 )
      ExFreePoolWithTag(v59, 0x44436152u);
    goto LABEL_60;
  }
  v4 = ContiguousIoResources + 16;
  RaidZeroXrb(ContiguousIoResources + 16, v26, 0, 0LL);
  *(_BYTE *)(v4 + 17) |= 8u;
  *(_QWORD *)(v4 + 176) = a2;
  *(_QWORD *)(v4 + 184) = v23;
  *(_QWORD *)(v4 + 168) = Srb;
  if ( *(_BYTE *)(v2 + 402) == 1 )
  {
    *((_QWORD *)Srb + 10) = a2;
    *((_DWORD *)Srb + 6) = 256;
    v43 = *((_DWORD *)Srb + 6);
    *((_QWORD *)Srb + 12) = v4;
    *((_DWORD *)Srb + 5) = 38;
    *((_QWORD *)Srb + 8) = v23;
    *((_DWORD *)Srb + 15) = 112;
    v29 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 10) = 10;
    if ( v29 )
      v43 = 64;
    v53 = Srb;
    v44 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 6) = v43;
    Srb[v44 + 8] = *(_BYTE *)(a1 + 88);
    Srb[v44 + 9] = *(_BYTE *)(a1 + 89);
    Srb[v44 + 10] = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_DWORD *)Srb + 3) = 256;
    *(_WORD *)Srb = 88;
    v28 = *((_DWORD *)Srb + 3);
    *((_QWORD *)Srb + 6) = v4;
    Srb[2] = 38;
    *((_QWORD *)Srb + 3) = v23;
    *((_DWORD *)Srb + 4) = 112;
    v29 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 5) = 10;
    if ( v29 )
      v28 = 64;
    *((_DWORD *)Srb + 3) = v28;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    Srb[7] = *(_BYTE *)(a1 + 90);
  }
  RaSrbSetMiniportContext(v2, (__int64)Srb, v27 + 1072);
  KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
  *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, v4, Srb);
  }
  if ( *(_BYTE *)(v2 + 4450) )
    v31 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
  else
    v31 = RaidAdapterExecuteXrb(v2, (_QWORD *)v4, v30);
  v16 = v31;
  if ( v31 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
    v16 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  v32 = WPP_GLOBAL_Control;
  v33 = (__int64)&WPP_GLOBAL_Control;
  v21 = 1LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      31LL,
      &WPP_95124dee8acf35750318326cda357b29_Traceguids,
      (unsigned int)v16,
      (unsigned __int8)Srb[3]);
    v32 = WPP_GLOBAL_Control;
    v33 = (__int64)&WPP_GLOBAL_Control;
    v21 = 1LL;
  }
  v34 = 0LL;
  if ( v16 < 0 )
  {
    if ( !*(_BYTE *)(v2 + 4450) )
    {
      if ( v32 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v32->Timer) & 0x100) != 0 && BYTE1(v32->Timer) )
        WPP_SF_qD(v32->AttachedDevice, 32LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, v4, v16);
      goto LABEL_136;
    }
    v16 = 0;
    goto LABEL_70;
  }
  v35 = *((_DWORD *)v23 + 20);
  v36 = p_Process;
  if ( v35 )
  {
    *(_DWORD *)(p_Process + 24) = v35;
    v37 = *((_DWORD *)v23 + 20);
  }
  else
  {
    v37 = *(_DWORD *)(p_Process + 24);
  }
  HIDWORD(MasterIrp->IoStatus.Information) = v37;
  *(_QWORD *)(p_Process + 64) = *((_QWORD *)v23 + 8);
  if ( !*(_BYTE *)(v2 + 4450) )
  {
    *(_DWORD *)(p_Process + 4) = *((_DWORD *)v23 + 18);
    *(_DWORD *)(p_Process + 8) = *((_DWORD *)v23 + 19);
    *(_DWORD *)(p_Process + 28) = *((_DWORD *)v23 + 21);
    *(_DWORD *)(p_Process + 48) = *((_DWORD *)v23 + 22);
    *(_DWORD *)(p_Process + 52) = *((_DWORD *)v23 + 23);
    *(_QWORD *)(p_Process + 56) = *((_QWORD *)v23 + 12);
    *(_BYTE *)(p_Process + 72) = *((_BYTE *)v23 + 104);
    *(_BYTE *)(p_Process + 82) = *((_BYTE *)v23 + 105);
    *(_BYTE *)(p_Process + 89) = *((_BYTE *)v23 + 106);
    *(_BYTE *)(p_Process + 97) = *((_BYTE *)v23 + 107);
    RtlStringCbPrintfW(v59 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)v23 + 2);
    *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
    v21 = 1LL;
    MasterIrp->UserIosb = 0LL;
    MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v23 + 14);
  }
  *(_BYTE *)(a1 + 1445) = 1;
  v32 = WPP_GLOBAL_Control;
LABEL_45:
  if ( !*(_BYTE *)(v2 + 4450) )
  {
    v38 = v59;
    goto LABEL_52;
  }
  RaidDriverGetName(*(_QWORD *)(v2 + 16), &v57);
  v38 = v59;
  RtlStringCbPrintfW(v59 + 4, 0x1EuLL, L"%ws.sys", v58);
  v39 = (*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8;
  if ( !v39 )
    v39 = 16;
  v29 = HIDWORD(MasterIrp->IoStatus.Information) == 0;
  MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 744) + 4095 + 16 * v39) & 0xFFFFF000;
  if ( v29 )
    HIDWORD(MasterIrp->IoStatus.Information) = *(_DWORD *)(v36 + 24);
  *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 696);
  MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v2 + 760);
  v21 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 524LL);
  if ( (v21 & 1) == 0 )
  {
    v32 = WPP_GLOBAL_Control;
LABEL_52:
    v34 = 0LL;
    goto LABEL_53;
  }
  v45 = RaidAllocatePool(NonPagedPoolNx, 0x7CuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v34 = 0LL;
  v47 = v45;
  if ( v45 )
  {
    v45[2] = 1771264LL;
    *(_DWORD *)v45 = 28;
    *((_DWORD *)v45 + 6) = 96;
    memmove((char *)v45 + 4, "TELEMTRY", 8uLL);
    v47[3] = 1;
    *((_WORD *)v47 + 14) = 2;
    if ( Srb )
    {
      if ( *(_BYTE *)(v2 + 402) == 1 )
      {
        memset(Srb, 0, 0x90uLL);
        *((_DWORD *)Srb + 4) = 144;
        *(_WORD *)Srb = 8;
        v34 = 0LL;
        Srb[2] = 40;
        *((_DWORD *)Srb + 2) = 1397899864;
        *((_DWORD *)Srb + 3) = 1;
        *(_QWORD *)(Srb + 52) = 128LL;
        v53 = Srb;
        *((_DWORD *)Srb + 5) = 2;
        *((_WORD *)Srb + 18) = 2;
        *((_WORD *)Srb + 64) = 1;
        *((_DWORD *)Srb + 33) = 4;
      }
      else
      {
        memset(Srb, 0, 0x58uLL);
      }
    }
    else
    {
      Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v2 + 402), 0);
    }
    if ( Srb )
    {
      v34 = BaseAddress;
      if ( BaseAddress
        || (BaseAddress = (char *)StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                    v48,
                                    (_QWORD *)v2),
            (v34 = BaseAddress) != 0LL) )
      {
        v4 = (__int64)(v34 + 16);
        RaidZeroXrb((__int64)(v34 + 16), v48, 0, 0LL);
        *((_QWORD *)v34 + 24) = a2;
        *((_QWORD *)v34 + 25) = v47;
        *((_QWORD *)v34 + 23) = Srb;
        if ( *(_BYTE *)(v2 + 402) == 1 )
        {
          v49 = *((unsigned int *)Srb + 13);
          *((_QWORD *)Srb + 12) = v4;
          *((_QWORD *)Srb + 10) = a2;
          *((_DWORD *)Srb + 5) = 2;
          *((_QWORD *)Srb + 8) = v47;
          *((_DWORD *)Srb + 15) = 124;
          *((_DWORD *)Srb + 6) = 256;
          *((_DWORD *)Srb + 10) = 1;
          Srb[v49 + 8] = *(_BYTE *)(a1 + 88);
          Srb[v49 + 9] = *(_BYTE *)(a1 + 89);
          Srb[v49 + 10] = *(_BYTE *)(a1 + 90);
          v53 = Srb;
        }
        else
        {
          *((_QWORD *)Srb + 6) = v4;
          *(_WORD *)Srb = 88;
          Srb[2] = 2;
          *((_QWORD *)Srb + 3) = v47;
          *((_DWORD *)Srb + 4) = 124;
          *((_DWORD *)Srb + 3) = 256;
          *((_DWORD *)Srb + 5) = 1;
          Srb[5] = *(_BYTE *)(a1 + 88);
          Srb[6] = *(_BYTE *)(a1 + 89);
          Srb[7] = *(_BYTE *)(a1 + 90);
        }
        RaSrbSetMiniportContext(v2, (__int64)Srb, (__int64)(v34 + 1072));
        KeInitializeEvent((PRKEVENT)(v34 + 680), NotificationEvent, 0);
        *((_QWORD *)v34 + 84) = RaidXrbSignalCompletion;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 33LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, v4, Srb);
        }
        v50 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
        if ( v50 >= 0 )
        {
          KeWaitForSingleObject(v34 + 680, Executive, 0, 0, 0LL);
          v50 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_DD(
            WPP_GLOBAL_Control->AttachedDevice,
            34LL,
            &WPP_95124dee8acf35750318326cda357b29_Traceguids,
            (unsigned int)v50,
            (unsigned __int8)Srb[3]);
        }
        v34 = 0LL;
        if ( v50 >= 0 && v47[7] == 1497715456 )
        {
          HIDWORD(MasterIrp->IoStatus.Pointer) = *(_DWORD *)(v2 + 4992) + 33162;
          v51 = *(unsigned __int8 *)(v2 + 4990);
          MasterIrp->IoStatus.Status |= 2u;
          LODWORD(MasterIrp->IoStatus.Information) = v51;
        }
      }
    }
    ExFreePoolWithTag(v47, 0x44436152u);
  }
  else
  {
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || !BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      goto LABEL_128;
    }
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, v46);
  }
  v32 = WPP_GLOBAL_Control;
LABEL_128:
  v16 = (int)v34;
LABEL_53:
  if ( v32 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v32->Timer) & 0x100) != 0 && BYTE1(v32->Timer) )
  {
    WPP_SF_S(v32->AttachedDevice, v21, 1LL, v38 + 4);
    v32 = WPP_GLOBAL_Control;
  }
  v33 = *(unsigned int *)(v2 + 496);
  if ( (_DWORD)v33 )
  {
    AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v2, p_Process, v33);
    v32 = WPP_GLOBAL_Control;
    v16 = AdditionalCrashDumpArea;
  }
  if ( v16 >= 0 )
  {
    v41 = a2;
    a2->IoStatus.Information = 104LL;
    goto LABEL_59;
  }
  if ( v32 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v32->Timer) & 0x100) != 0 && BYTE1(v32->Timer) )
    WPP_SF_D(v32->AttachedDevice, 37LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, (unsigned int)v16);
LABEL_136:
  v41 = a2;
LABEL_59:
  if ( v16 < 0 )
  {
    v19 = v56;
    goto LABEL_138;
  }
LABEL_60:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v4, 0, v33);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v52 = v53;
      if ( !v53 )
        v52 = Srb;
      *((_QWORD *)v52 + 10) = v34;
      *((_QWORD *)v52 + 13) = v34;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v34;
      *((_QWORD *)Srb + 7) = v34;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44436152u);
  return RaidCompleteRequestEx(v41, 0, v16);
}
