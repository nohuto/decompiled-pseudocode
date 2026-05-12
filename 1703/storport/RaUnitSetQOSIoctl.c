/*
 * XREFs of RaUnitSetQOSIoctl @ 0x1C003AA14
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C002C324 (RaidAdapterEnableQosWaitTimeoutCheck.c)
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C003D4A8 (RaidUnitDisableWaitCheckTimer.c)
 *     Template_qcccjq @ 0x1C003FA10 (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0044CD8 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitSetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rcx
  unsigned int v5; // edi
  _BYTE *v6; // rax
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // dx
  unsigned int *v9; // rcx
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int v12; // r8d
  unsigned int IrpCount; // r8d
  unsigned int Flags; // r8d
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // dx
  unsigned int SystemBuffer_high; // r8d
  unsigned int v18; // edx
  unsigned int v19; // edx
  __int64 v20; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 652) || *(_DWORD *)(a1 + 660) || *(_DWORD *)(a1 + 656) || (*(_BYTE *)(a1 + 154) & 1) != 0 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_84;
    }
    v8 = 45;
    goto LABEL_83;
  }
  v6 = *(_BYTE **)(a1 + 96);
  if ( v6 && (*v6 & 0x1F) != 0 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_84;
    }
    v8 = 46;
LABEL_83:
    WPP_SF_q((__int64)v7->AttachedDevice, v8, (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids, a1);
LABEL_84:
    v5 = -1073741637;
    goto LABEL_85;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x24 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Fu,
        (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a1);
    }
    v5 = -1073741820;
    goto LABEL_85;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 36 || *(_DWORD *)(&MasterIrp->Size + 1) != 36 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v16 = 48;
    goto LABEL_77;
  }
  if ( !LOBYTE(MasterIrp->MdlAddress) )
  {
    if ( !*(_BYTE *)(a1 + 2576) )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x31u,
          (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
          a1);
      }
      goto LABEL_85;
    }
    v9 = *(unsigned int **)(a1 + 208);
    v10 = *v9 & 0xFFFFFFFD;
    *v9 = v10;
    if ( (v10 & 4) == 0 )
      *v9 = v10 & 0xFFFFFFFE;
    *(_QWORD *)(a1 + 2616) = -1LL;
    v11 = (*(_BYTE *)(a1 + 154) & 2) == 0;
    *(_BYTE *)(a1 + 2576) = 0;
    *(_QWORD *)(a1 + 2588) = 0LL;
    *(_QWORD *)(a1 + 2596) = 0LL;
    *(_DWORD *)(a1 + 2584) = 0;
    if ( !v11 )
    {
      if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
        Template_qcccjq(
          *(_DWORD *)(a1 + 88) >> 8,
          (unsigned int)&EventUnitResponsive,
          a1 + 1688,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_DWORD *)(a1 + 88),
          BYTE1(*(_DWORD *)(a1 + 88)),
          BYTE2(*(_DWORD *)(a1 + 88)),
          a1 + 1688,
          3);
      StorpTelemetryMarkUnitResponsive(a1);
      *(_BYTE *)(a1 + 154) &= ~2u;
    }
    RaidUnitDisableWaitCheckTimer(a1);
LABEL_32:
    *(_BYTE *)(a1 + 2604) = 1;
    goto LABEL_85;
  }
  v12 = *(&MasterIrp->Flags + 1);
  if ( v12 < 0x3E8 || v12 != 1000 * (v12 / 0x3E8) )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v16 = 50;
    goto LABEL_77;
  }
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount < 0x3E8 || IrpCount != 1000 * (IrpCount / 0x3E8) )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v16 = 51;
    goto LABEL_77;
  }
  Flags = MasterIrp->Flags;
  if ( Flags != -1 && Flags != 500 * (Flags / 0x1F4) )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v16 = 52;
LABEL_77:
    WPP_SF_q((__int64)v15->AttachedDevice, v16, (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids, a1);
LABEL_78:
    v5 = -1073741811;
    goto LABEL_85;
  }
  SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( SystemBuffer_high != -1 && SystemBuffer_high != 500 * (SystemBuffer_high / 0x1F4) )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v16 = 53;
    goto LABEL_77;
  }
  *(_DWORD *)(a1 + 2580) = HIDWORD(MasterIrp->MdlAddress);
  *(_DWORD *)(a1 + 2592) = *(&MasterIrp->Flags + 1) / 0x3E8;
  v18 = MasterIrp->Flags;
  if ( v18 == -1 )
    *(_DWORD *)(a1 + 2600) = -1;
  else
    *(_DWORD *)(a1 + 2600) = v18 / 0x1F4;
  *(_DWORD *)(a1 + 2596) = MasterIrp->AssociatedIrp.IrpCount / 0x3E8u;
  *(_DWORD *)(a1 + 2588) = MasterIrp->ThreadListEntry.Flink;
  v19 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( v19 == -1 )
    *(_DWORD *)(a1 + 2584) = -1;
  else
    *(_DWORD *)(a1 + 2584) = v19 / 0x1F4;
  if ( *(_DWORD *)(a1 + 2600) == -1 && !*(_DWORD *)(a1 + 2588) && *(_DWORD *)(a1 + 2584) == -1 )
  {
    RaidUnitDisableWaitCheckTimer(a1);
  }
  else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2608), 1, 0) )
  {
    RaidAdapterEnableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  v20 = 10000000 * (*(_DWORD *)(a1 + 2592) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 2584) + *(_DWORD *)(a1 + 2600)) >> 1));
  if ( (unsigned int)v20 > 0x11E1A300 )
    v20 = 300000000LL;
  *(_QWORD *)(a1 + 2616) = v20;
  if ( !*(_BYTE *)(a1 + 2576) )
  {
    **(_DWORD **)(a1 + 208) |= 3u;
    *(_BYTE *)(a1 + 2576) = 1;
    goto LABEL_32;
  }
LABEL_85:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
