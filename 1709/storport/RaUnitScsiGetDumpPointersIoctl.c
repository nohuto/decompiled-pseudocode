/*
 * XREFs of RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C000F7E4 (StorPortGetAdditionalCrashDumpArea.c)
 *     RtlStringCbPrintfW @ 0x1C0016D40 (RtlStringCbPrintfW.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C00184AC (RaidGetTelemetryLogPageIds.c)
 *     RaidDriverGetName @ 0x1C0018680 (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C00186F8 (RaidQueryCrashdumpFunctions.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C0030A88 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1C0030E98 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1C0040114 (WPP_SF_S.c)
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
  signed int AdditionalCrashDumpArea; // edi
  __int64 v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // r15
  wchar_t *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  wchar_t *v23; // r12
  unsigned int v24; // ecx
  bool v25; // zf
  char *v26; // r15
  __int64 v27; // r8
  IRP *v28; // rsi
  PVOID v30; // rax
  PVOID v31; // r12
  __int64 v32; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // r8
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  _DWORD *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // esi
  int v48; // eax
  _BYTE *v49; // rax
  _BYTE *v50; // [rsp+30h] [rbp-78h]
  _MDL *v51; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+40h] [rbp-68h]
  wchar_t *v53; // [rsp+48h] [rbp-60h]
  __int64 v54; // [rsp+50h] [rbp-58h] BYREF
  __int64 v55; // [rsp+58h] [rbp-50h]
  wchar_t *v56; // [rsp+B0h] [rbp+8h]
  __int64 p_Process; // [rsp+C0h] [rbp+18h]
  char *BaseAddress; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  BaseAddress = 0LL;
  v4 = 0LL;
  Srb = 0LL;
  v6 = 0;
  v56 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v50 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( a2->RequestorMode )
  {
    AdditionalCrashDumpArea = -1073741790;
LABEL_71:
    v28 = a2;
    return RaidCompleteRequestEx(v28, 0, AdditionalCrashDumpArea);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    AdditionalCrashDumpArea = -1073741789;
    goto LABEL_71;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(MasterIrp, 0, 0x68uLL);
  Pool = (_MDL *)RaidAllocatePool(NonPagedPoolNx, 0x160uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v51 = Pool;
  v9 = Pool;
  if ( !Pool )
  {
    AdditionalCrashDumpArea = -1073741670;
    goto LABEL_71;
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
    if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1488)) >= 0 )
    {
      *(_BYTE *)p_ByteCount = 1;
      v6 = 1;
      v9[6].Next = **(_MDL ***)(a1 + 1488);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
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
LABEL_12:
        MasterIrp->Overlay.AsynchronousParameters.UserApcContext = p_ByteCount;
        MasterIrp->Overlay.AllocationSize.QuadPart = (__int64)StorDumpDevicePowerOn;
        goto LABEL_13;
      }
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 5154LL) = 0;
  if ( v6 )
    goto LABEL_12;
LABEL_13:
  AdditionalCrashDumpArea = 0;
  *(_QWORD *)&v9[6].Size = a1 + 1478;
  v17 = *(_QWORD *)(a1 + 24) + 4989LL;
  v9[6].Process = (struct _EPROCESS *)(a1 + 1479);
  *(_QWORD *)&v9[6].ByteCount = v17;
  v18 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v53 = v18;
  v19 = v18;
  if ( !v18 )
    goto LABEL_79;
  memset(v18, 0, 0x48uLL);
  v20 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v56 = v20;
  if ( !v20 )
    goto LABEL_79;
  memset(v20, 0, 0x48uLL);
  RtlStringCbPrintfW(v19 + 4, 0x1EuLL, L"diskdump.sys");
  RtlStringCbPrintfW(v19 + 19, 0x1EuLL, L"storport.sys");
  *(_QWORD *)v19 = v56;
  *(_QWORD *)v56 = 0LL;
  *(_QWORD *)&MasterIrp->Flags = 0LL;
  MasterIrp->ThreadListEntry.Flink = 0LL;
  MasterIrp->MdlAddress = v51;
  *(_DWORD *)&MasterIrp->Type = 4;
  *(_DWORD *)(&MasterIrp->Size + 1) = 104;
  BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
  MasterIrp->ThreadListEntry.Blink = (_LIST_ENTRY *)v19;
  MasterIrp->UserEvent = (_KEVENT *)(a1 + 1479);
  if ( (unsigned __int8)(*(_BYTE *)(v2 + 448) - 2) <= 2u )
    MasterIrp->IoStatus.Status |= 1u;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 528) + 184LL) & 0x20) != 0 )
    MasterIrp->IoStatus.Status |= 4u;
  v21 = 8LL;
  if ( *(_BYTE *)(v2 + 4450) && (*(_DWORD *)(*(_QWORD *)(v2 + 528) + 184LL) & 8) == 0 )
  {
LABEL_21:
    v22 = p_Process;
    goto LABEL_22;
  }
  v30 = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  P = v30;
  v31 = v30;
  if ( !v30
    || (memset(v30, 0, 0x70uLL), (Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 402), 0)) == 0LL)
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                  v32,
                                  (_QWORD *)v2),
        BaseAddress = (char *)ContiguousIoResources,
        (v35 = ContiguousIoResources) == 0) )
  {
LABEL_79:
    v28 = a2;
    AdditionalCrashDumpArea = -1073741670;
LABEL_135:
    ExFreePoolWithTag(v51, 0x44436152u);
    if ( v19 )
      ExFreePoolWithTag(v19, 0x44436152u);
    v26 = 0LL;
    if ( v56 )
      ExFreePoolWithTag(v56, 0x44436152u);
    goto LABEL_36;
  }
  v4 = ContiguousIoResources + 16;
  RaidZeroXrb(ContiguousIoResources + 16, v34, 0, 0LL);
  *(_BYTE *)(v4 + 17) |= 8u;
  *(_QWORD *)(v4 + 176) = a2;
  *(_QWORD *)(v4 + 184) = v31;
  *(_QWORD *)(v4 + 168) = Srb;
  if ( *(_BYTE *)(v2 + 402) == 1 )
  {
    *((_QWORD *)Srb + 10) = a2;
    *((_DWORD *)Srb + 6) = 256;
    v41 = *((_DWORD *)Srb + 6);
    *((_QWORD *)Srb + 12) = v4;
    *((_DWORD *)Srb + 5) = 38;
    *((_QWORD *)Srb + 8) = v31;
    *((_DWORD *)Srb + 15) = 112;
    v25 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 10) = 10;
    if ( v25 )
      v41 = 64;
    v50 = Srb;
    v42 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 6) = v41;
    Srb[v42 + 8] = *(_BYTE *)(a1 + 88);
    Srb[v42 + 9] = *(_BYTE *)(a1 + 89);
    Srb[v42 + 10] = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_DWORD *)Srb + 3) = 256;
    *(_WORD *)Srb = 88;
    v36 = *((_DWORD *)Srb + 3);
    *((_QWORD *)Srb + 6) = v4;
    Srb[2] = 38;
    *((_QWORD *)Srb + 3) = v31;
    *((_DWORD *)Srb + 4) = 112;
    v25 = *(_BYTE *)(v2 + 4450) == 0;
    *((_DWORD *)Srb + 5) = 10;
    if ( v25 )
      v36 = 64;
    *((_DWORD *)Srb + 3) = v36;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    Srb[7] = *(_BYTE *)(a1 + 90);
  }
  RaSrbSetMiniportContext(v2, (__int64)Srb, v35 + 1072);
  KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
  *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids, v4, Srb);
  }
  if ( *(_BYTE *)(v2 + 4450) )
    v38 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
  else
    v38 = RaidAdapterExecuteXrb(v2, (_QWORD *)v4, v37);
  AdditionalCrashDumpArea = v38;
  if ( v38 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
    AdditionalCrashDumpArea = RaidSrbStatusToNtStatus(Srb[3]);
  }
  v27 = (__int64)&WPP_GLOBAL_Control;
  v21 = 1LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      31LL,
      &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      (unsigned int)AdditionalCrashDumpArea,
      (unsigned __int8)Srb[3]);
    v21 = 1LL;
    v27 = (__int64)&WPP_GLOBAL_Control;
  }
  v26 = 0LL;
  if ( AdditionalCrashDumpArea < 0 )
  {
    if ( !*(_BYTE *)(v2 + 4450) )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qD(
          WPP_GLOBAL_Control->AttachedDevice,
          32LL,
          &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
          v4,
          AdditionalCrashDumpArea);
      }
      goto LABEL_133;
    }
    AdditionalCrashDumpArea = 0;
    goto LABEL_21;
  }
  v39 = *((_DWORD *)v31 + 20);
  v22 = p_Process;
  if ( v39 )
  {
    *(_DWORD *)(p_Process + 24) = v39;
    v40 = *((_DWORD *)v31 + 20);
  }
  else
  {
    v40 = *(_DWORD *)(p_Process + 24);
  }
  HIDWORD(MasterIrp->IoStatus.Information) = v40;
  *(_QWORD *)(p_Process + 64) = *((_QWORD *)v31 + 8);
  if ( !*(_BYTE *)(v2 + 4450) )
  {
    *(_DWORD *)(p_Process + 4) = *((_DWORD *)v31 + 18);
    *(_DWORD *)(p_Process + 8) = *((_DWORD *)v31 + 19);
    *(_DWORD *)(p_Process + 28) = *((_DWORD *)v31 + 21);
    *(_DWORD *)(p_Process + 48) = *((_DWORD *)v31 + 22);
    *(_DWORD *)(p_Process + 52) = *((_DWORD *)v31 + 23);
    *(_QWORD *)(p_Process + 56) = *((_QWORD *)v31 + 12);
    *(_BYTE *)(p_Process + 72) = *((_BYTE *)v31 + 104);
    *(_BYTE *)(p_Process + 82) = *((_BYTE *)v31 + 105);
    *(_BYTE *)(p_Process + 89) = *((_BYTE *)v31 + 106);
    *(_BYTE *)(p_Process + 97) = *((_BYTE *)v31 + 107);
    RtlStringCbPrintfW(v56 + 4, 0x1EuLL, (NTSTRSAFE_PCWSTR)v31 + 2);
    *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
    v21 = 1LL;
    MasterIrp->UserIosb = 0LL;
    MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v31 + 14);
  }
  *(_BYTE *)(a1 + 1477) = 1;
LABEL_22:
  if ( *(_BYTE *)(v2 + 4450) )
  {
    RaidDriverGetName(*(_QWORD *)(v2 + 16), &v54);
    v23 = v56;
    RtlStringCbPrintfW(v56 + 4, 0x1EuLL, L"%ws.sys", v55);
    v24 = (*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8;
    if ( !v24 )
      v24 = 16;
    v25 = HIDWORD(MasterIrp->IoStatus.Information) == 0;
    MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 744) + 4095 + 16 * v24) & 0xFFFFF000;
    if ( v25 )
      HIDWORD(MasterIrp->IoStatus.Information) = *(_DWORD *)(v22 + 24);
    *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 696);
    MasterIrp->UserIosb = (_IO_STATUS_BLOCK *)(v2 + 760);
    v21 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 524LL);
    if ( (v21 & 1) != 0 )
    {
      v43 = RaidAllocatePool(NonPagedPoolNx, 0x7CuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
      v26 = 0LL;
      v44 = v43;
      if ( v43 )
      {
        v43[2] = 1771264LL;
        *(_DWORD *)v43 = 28;
        *((_DWORD *)v43 + 6) = 96;
        memmove((char *)v43 + 4, "TELEMTRY", 8uLL);
        v44[3] = 1;
        *((_WORD *)v44 + 14) = 2;
        if ( Srb )
        {
          if ( *(_BYTE *)(v2 + 402) == 1 )
          {
            memset(Srb, 0, 0x90uLL);
            *((_DWORD *)Srb + 4) = 144;
            *(_WORD *)Srb = 8;
            v26 = 0LL;
            Srb[2] = 40;
            *((_DWORD *)Srb + 2) = 1397899864;
            *((_DWORD *)Srb + 3) = 1;
            *(_QWORD *)(Srb + 52) = 128LL;
            v50 = Srb;
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
          v26 = BaseAddress;
          if ( BaseAddress
            || (BaseAddress = (char *)StorAllocateContiguousIoResources(
                                        ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                        v45,
                                        (_QWORD *)v2),
                (v26 = BaseAddress) != 0LL) )
          {
            v4 = (__int64)(v26 + 16);
            RaidZeroXrb((__int64)(v26 + 16), v45, 0, 0LL);
            *((_QWORD *)v26 + 24) = a2;
            *((_QWORD *)v26 + 25) = v44;
            *((_QWORD *)v26 + 23) = Srb;
            if ( *(_BYTE *)(v2 + 402) == 1 )
            {
              v46 = *((unsigned int *)Srb + 13);
              *((_QWORD *)Srb + 12) = v4;
              *((_QWORD *)Srb + 10) = a2;
              *((_DWORD *)Srb + 5) = 2;
              *((_QWORD *)Srb + 8) = v44;
              *((_DWORD *)Srb + 15) = 124;
              *((_DWORD *)Srb + 6) = 256;
              *((_DWORD *)Srb + 10) = 1;
              Srb[v46 + 8] = *(_BYTE *)(a1 + 88);
              Srb[v46 + 9] = *(_BYTE *)(a1 + 89);
              Srb[v46 + 10] = *(_BYTE *)(a1 + 90);
              v50 = Srb;
            }
            else
            {
              *((_QWORD *)Srb + 6) = v4;
              *(_WORD *)Srb = 88;
              Srb[2] = 2;
              *((_QWORD *)Srb + 3) = v44;
              *((_DWORD *)Srb + 4) = 124;
              *((_DWORD *)Srb + 3) = 256;
              *((_DWORD *)Srb + 5) = 1;
              Srb[5] = *(_BYTE *)(a1 + 88);
              Srb[6] = *(_BYTE *)(a1 + 89);
              Srb[7] = *(_BYTE *)(a1 + 90);
            }
            RaSrbSetMiniportContext(v2, (__int64)Srb, (__int64)(v26 + 1072));
            KeInitializeEvent((PRKEVENT)(v26 + 680), NotificationEvent, 0);
            *((_QWORD *)v26 + 84) = RaidXrbSignalCompletion;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                33LL,
                &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
                v4,
                Srb);
            }
            v47 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v4);
            if ( v47 >= 0 )
            {
              KeWaitForSingleObject(v26 + 680, Executive, 0, 0, 0LL);
              v47 = RaidSrbStatusToNtStatus(Srb[3]);
            }
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_DD(
                WPP_GLOBAL_Control->AttachedDevice,
                34LL,
                &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
                (unsigned int)v47,
                (unsigned __int8)Srb[3]);
            }
            v26 = 0LL;
            if ( v47 >= 0 && v44[7] == 1497715456 )
            {
              HIDWORD(MasterIrp->IoStatus.Pointer) = *(_DWORD *)(v2 + 4992) + 33162;
              v48 = *(unsigned __int8 *)(v2 + 4990);
              MasterIrp->IoStatus.Status |= 2u;
              LODWORD(MasterIrp->IoStatus.Information) = v48;
            }
          }
        }
        ExFreePoolWithTag(v44, 0x44436152u);
      }
      else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids);
      }
      AdditionalCrashDumpArea = (int)v26;
      goto LABEL_29;
    }
  }
  else
  {
    v23 = v56;
  }
  v26 = 0LL;
LABEL_29:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_S(WPP_GLOBAL_Control->AttachedDevice, v21, 1LL, v23 + 4);
  }
  v27 = *(unsigned int *)(v2 + 496);
  if ( (_DWORD)v27 )
    AdditionalCrashDumpArea = StorPortGetAdditionalCrashDumpArea(v2, p_Process, v27);
  if ( AdditionalCrashDumpArea >= 0 )
  {
    v28 = a2;
    a2->IoStatus.Information = 104LL;
    goto LABEL_35;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      37LL,
      &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      (unsigned int)AdditionalCrashDumpArea);
  }
LABEL_133:
  v28 = a2;
LABEL_35:
  if ( AdditionalCrashDumpArea < 0 )
  {
    v19 = v53;
    goto LABEL_135;
  }
LABEL_36:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v4, 0, v27);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( Srb[2] == 40 )
    {
      v49 = v50;
      if ( !v50 )
        v49 = Srb;
      *((_QWORD *)v49 + 10) = v26;
      *((_QWORD *)v49 + 13) = v26;
    }
    else
    {
      *((_QWORD *)Srb + 6) = v26;
      *((_QWORD *)Srb + 7) = v26;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44436152u);
  return RaidCompleteRequestEx(v28, 0, AdditionalCrashDumpArea);
}
