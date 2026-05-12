/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_DD @ 0x1C0031680 (WPP_SF_DD.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C003F8C0 (StorPortReleaseAdditionalCrashDumpArea.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // r14
  char *v7; // r12
  __int64 v8; // rsi
  _BYTE *Srb; // rbx
  _BYTE *v10; // r13
  __int64 v11; // rbp
  _IRP *MasterIrp; // rax
  unsigned int v13; // edi
  _DWORD *Pool; // rax
  __int64 v16; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  void (__fastcall *v26)(_QWORD, IRP *, __int64, __int64); // rax
  __int64 v27; // r8
  char v28; // [rsp+70h] [rbp+8h]
  __int64 p_Process; // [rsp+78h] [rbp+10h]
  _IRP *v30; // [rsp+80h] [rbp+18h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Srb = 0LL;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 24);
  v28 = 0;
  if ( a2->RequestorMode )
  {
    v13 = -1073741790;
    return RaidCompleteRequestEx(a2, 0, v13);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
  {
    v13 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v13);
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v30 = MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 4 )
  {
    v13 = -1073741735;
    return RaidCompleteRequestEx(a2, 0, v13);
  }
  p_Process = (__int64)&MasterIrp->MdlAddress->Process;
  if ( *(_BYTE *)(a1 + 1445) != 1 || !v11 )
    goto LABEL_36;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v6 = Pool;
  if ( !Pool )
  {
    v13 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v13);
  }
  memset(Pool, 0, 0x70uLL);
  *v6 = 7340288;
  v6[14] = v30->AssociatedIrp.IrpCount;
  v6[18] = *(_DWORD *)(p_Process + 4);
  v6[19] = *(_DWORD *)(p_Process + 8);
  v6[20] = *(_DWORD *)(p_Process + 24);
  v6[21] = *(_DWORD *)(p_Process + 28);
  v6[22] = *(_DWORD *)(p_Process + 48);
  v6[23] = *(_DWORD *)(p_Process + 52);
  *((_QWORD *)v6 + 12) = *(_QWORD *)(p_Process + 56);
  *((_BYTE *)v6 + 104) = *(_BYTE *)(p_Process + 72);
  *((_BYTE *)v6 + 105) = *(_BYTE *)(p_Process + 82);
  *((_BYTE *)v6 + 106) = *(_BYTE *)(p_Process + 89);
  *((_BYTE *)v6 + 107) = *(_BYTE *)(p_Process + 97);
  *((_QWORD *)v6 + 8) = *(_QWORD *)(p_Process + 64);
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x27u, *(_BYTE *)(p_Process + 98), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v11 + 444) + 7) & 0xFFFFFFF8) + 1072,
                              v16,
                              (_QWORD *)v11);
    v7 = (char *)ContiguousIoResources;
    if ( !ContiguousIoResources )
    {
      v13 = -1073741670;
LABEL_41:
      if ( Srb )
      {
        if ( v28 == 1 )
        {
          if ( !v10 )
            v10 = Srb;
          *((_QWORD *)v10 + 10) = 0LL;
          *((_QWORD *)v10 + 13) = 0LL;
        }
        else
        {
          *((_QWORD *)Srb + 6) = 0LL;
          *((_QWORD *)Srb + 7) = 0LL;
        }
        ExFreePoolWithTag(Srb, 0x72536152u);
      }
      goto LABEL_48;
    }
    v8 = ContiguousIoResources + 16;
    RaidZeroXrb(ContiguousIoResources + 16, v18, 0, 0LL);
    *(_QWORD *)(v8 + 176) = a2;
    *(_QWORD *)(v8 + 184) = v6;
    *(_QWORD *)(v8 + 168) = Srb;
    if ( *(_BYTE *)(p_Process + 98) == 1 )
    {
      *((_DWORD *)Srb + 6) = 256;
      v10 = Srb;
      v19 = *((_DWORD *)Srb + 6);
      *((_DWORD *)Srb + 5) = 39;
      *((_QWORD *)Srb + 8) = v6;
      *((_DWORD *)Srb + 15) = 112;
      v20 = *(_BYTE *)(v11 + 4450) == 0;
      *((_DWORD *)Srb + 10) = 10;
      if ( v20 )
        v19 = 128;
      *((_QWORD *)Srb + 10) = a2;
      v21 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 6) = v19;
      *((_QWORD *)Srb + 13) = v7 + 1072;
      *((_QWORD *)Srb + 12) = v8;
      Srb[v21 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v21 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v21 + 10] = *(_BYTE *)(a1 + 90);
      v28 = 1;
    }
    else
    {
      *((_DWORD *)Srb + 3) = 256;
      *(_WORD *)Srb = 88;
      v22 = *((_DWORD *)Srb + 3);
      Srb[2] = 39;
      *((_QWORD *)Srb + 3) = v6;
      *((_DWORD *)Srb + 4) = 112;
      v20 = *(_BYTE *)(v11 + 4450) == 0;
      *((_DWORD *)Srb + 5) = 10;
      if ( v20 )
        v22 = 128;
      *((_DWORD *)Srb + 3) = v22;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
      *((_QWORD *)Srb + 7) = v7 + 1072;
      *((_QWORD *)Srb + 6) = v8;
    }
    KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
    *(_QWORD *)(v8 + 656) = RaidXrbSignalCompletion;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 38LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, v8, Srb);
    }
    if ( *(_BYTE *)(v11 + 4450) )
      v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v11, v8);
    else
      v24 = RaidAdapterExecuteXrb(v11, (_QWORD *)v8, v23);
    a4 = (unsigned int)v24;
    if ( v24 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
      a4 = (unsigned int)RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        39LL,
        &WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a4,
        (unsigned __int8)Srb[3]);
    }
LABEL_36:
    v25 = *(_QWORD *)(a1 + 24);
    if ( *(_WORD *)(v25 + 5154) )
    {
      v26 = *(void (__fastcall **)(_QWORD, IRP *, __int64, __int64))(v25 + 5176);
      if ( v26 )
        v26(*(_QWORD *)(v25 + 5160), a2, a3, a4);
    }
    StorPortReleaseAdditionalCrashDumpArea(v25, p_Process, a3, a4);
    ExFreePoolWithTag(v30->MdlAddress, 0x44436152u);
    memset(v30, 0, 0x68uLL);
    a2->IoStatus.Information = 0LL;
    v13 = 0;
    if ( v7 )
    {
      RaidXrbDeallocateResources(v8, 0, v27);
      MmFreeContiguousMemory(v7);
    }
    goto LABEL_41;
  }
  v13 = -1073741670;
LABEL_48:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x44436152u);
  return RaidCompleteRequestEx(a2, 0, v13);
}
