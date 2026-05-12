/*
 * XREFs of RaUnitScsiIrp @ 0x1C0007320
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0007280 (RaDriverScsiIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaidRestartIoQueue @ 0x1C0007180 (RaidRestartIoQueue.c)
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidUnitSubmitRequest @ 0x1C001B394 (RaidUnitSubmitRequest.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001C410 (RaUnitClaimDeviceSrb.c)
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C003B1E8 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C003BD90 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C003C04C (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C003C51C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C003C6BC (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C003D820 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003FBC4 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C0041738 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C0068E2C (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebp
  char v5; // r12
  int v6; // r13d
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v8; // ecx
  unsigned __int8 v9; // al
  int SecurityQos; // r15d
  unsigned int FullCreateOptions; // r14d
  PDEVICE_OBJECT v12; // rcx
  _IO_SECURITY_CONTEXT *SrbScsiData; // r9
  _IO_STACK_LOCATION *v14; // rax
  _IO_SECURITY_CONTEXT *v15; // rcx
  unsigned __int8 v16; // al
  unsigned int v17; // ebx
  unsigned __int64 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // r8
  _IO_STACK_LOCATION *v22; // rax
  _IO_SECURITY_CONTEXT *v23; // rcx
  unsigned __int8 v24; // al
  int AccessState_high; // ebx
  unsigned __int64 v26; // r14
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // ecx
  int v32; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  __int64 v36; // rcx
  char v37[16]; // [rsp+50h] [rbp-58h] BYREF

  v2 = 0;
  v5 = 1;
  v6 = 0;
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
  v8 = *(_DWORD *)(a1 + 40);
  if ( v8 >= 5 )
  {
    v30 = v8 - 5;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 != 1 )
          goto LABEL_3;
        v32 = RaUnitCheckRemoveStateForDisabled();
        if ( v32 >= 0 )
          goto LABEL_3;
LABEL_82:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 680), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(a1 + 168), 0, 0);
        BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v32);
        a2->IoStatus.Information = 0LL;
        return RaidCompleteRequestEx(a2);
      }
    }
    else
    {
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( MajorFunction == 27
        || MajorFunction == 14 && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 266276 )
      {
        goto LABEL_3;
      }
    }
    v32 = -1073741738;
    goto LABEL_82;
  }
LABEL_3:
  v9 = BYTE2(SecurityContext->SecurityQos);
  if ( v9 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) != 1
      || (v6 = (int)SecurityContext,
          FullCreateOptions = SecurityContext->FullCreateOptions,
          SecurityQos = (int)SecurityContext[1].SecurityQos,
          LODWORD(SecurityContext->AccessState) != 1397899864)
      || LODWORD(SecurityContext[2].SecurityQos)
      || SecurityContext[3].SecurityQos )
    {
      BYTE3(SecurityContext->SecurityQos) = 6;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  else
  {
    SecurityQos = HIDWORD(SecurityContext->AccessState);
    FullCreateOptions = v9;
  }
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v12 = *(PDEVICE_OBJECT *)(a1 + 24), (v28 = *(_QWORD *)&v12[15].Flags) != 0)
      && (*(_DWORD *)(v28 + 20) & 1) == 0
      || (BYTE4(v12->Queue.Wcb.DeviceRoutine) & 2) != 0
      || *(&v12->ActiveThreadCount + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock(a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      {
        v22 = a2->Tail.Overlay.CurrentStackLocation;
        v23 = v22->Parameters.Create.SecurityContext;
        v22->Control |= 1u;
        BYTE3(v23->SecurityQos) = 0;
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
        v24 = BYTE2(v23->SecurityQos);
        if ( v24 == 40 )
        {
          v26 = v23->FullCreateOptions;
          AccessState_high = (int)v23[1].SecurityQos;
        }
        else
        {
          AccessState_high = HIDWORD(v23->AccessState);
          v26 = v24;
        }
        if ( (qword_1C0056210 & 0x20) != 0 )
          DbgLogRequest(
            *(_QWORD *)(a1 + 24),
            3,
            (__int64)a2,
            (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
            0LL,
            0LL,
            0LL);
        if ( (AccessState_high & 0x80000) != 0 )
          v2 = 4;
        if ( (AccessState_high & 0x10) != 0 )
          v2 |= 2u;
        if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
        {
          if ( (unsigned int)v26 > 0x20 || (v36 = 0x1000D0000LL, !_bittest64(&v36, v26)) )
            v2 |= 1u;
        }
        RaidStartIoPacket(a1, a2, v2);
        v27 = 259;
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v27 = RaidCompleteRequestEx(a2);
      }
      if ( v27 != 259 )
        goto LABEL_41;
    }
    else
    {
      switch ( FullCreateOptions )
      {
        case 1u:
          v27 = RaUnitClaimDeviceSrb(a1, a2);
          goto LABEL_41;
        case 2u:
        case 7u:
        case 9u:
          v27 = RaidUnitSubmitRequest(a1, a2);
          break;
        case 4u:
          *(_BYTE *)(a1 + 436) = 0;
          RaidRestartIoQueue(a1);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v27 = RaidCompleteRequestEx(a2);
          goto LABEL_41;
        case 6u:
          v27 = RaUnitReleaseDeviceSrb(a1, a2);
          goto LABEL_41;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v27 = RaidUnitSubmitResetRequest(a1, a2);
          goto LABEL_41;
        case 0x12u:
          v27 = RaUnitResetBusSrb(a1, a2);
          goto LABEL_41;
        case 0x15u:
          v27 = RaUnitFlushQueueSrb(a1, a2);
          goto LABEL_41;
        case 0x17u:
          v27 = RaidCompleteRequestEx(a2);
          goto LABEL_41;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 1;
          v27 = RaidCompleteRequestEx(a2);
          goto LABEL_41;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 0;
          RaidRestartIoQueue(a1);
          v27 = RaidCompleteRequestEx(a2);
          goto LABEL_41;
        case 0x1Au:
          if ( *(int *)(a1 + 476) > 0 )
          {
            *(_QWORD *)(a1 + 1600) = a2;
            a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(a1 + 1592),
              RaidUnitQuiesceDeviceWorkRoutine,
              CriticalWorkQueue,
              (PVOID)(a1 + 1592));
            v27 = 259;
          }
          else
          {
            *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
            v27 = RaidCompleteRequestEx(a2);
            if ( v27 != 259 )
              goto LABEL_41;
          }
          break;
        default:
          v27 = RaUnitUnknownSrb(v12, a2);
          goto LABEL_41;
      }
    }
    v5 = 0;
LABEL_41:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        23LL,
        &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        a1,
        a2,
        v27);
    }
    if ( v5 )
      RaUnitReleaseRemoveLock(a1);
    return v27;
  }
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SrbScsiData = (_IO_SECURITY_CONTEXT *)GetSrbScsiData(v6, 0, 0, 0, 0LL, 0LL);
  else
    SrbScsiData = SecurityContext + 3;
  if ( SrbScsiData )
  {
    if ( LOBYTE(SrbScsiData->SecurityQos) == 27 && (BYTE4(SrbScsiData->SecurityQos) & 1) == 0 )
    {
      if ( (unsigned __int8)RaUnitSwallowStopUnitCommand(a1) )
      {
        BYTE3(SecurityContext->SecurityQos) = 1;
        a2->IoStatus.Information = 0LL;
        v27 = RaidCompleteRequestEx(a2);
        RaUnitReleaseRemoveLock(a1);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids, a1, a2);
        }
        return v27;
      }
    }
  }
  if ( StorEtwLoggingEnabled
    && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1E00) != 0
    && ((LOBYTE(SrbScsiData->SecurityQos) - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, v37);
    StorEtwIORequestDispatch(a2);
  }
  v14 = a2->Tail.Overlay.CurrentStackLocation;
  v15 = v14->Parameters.Create.SecurityContext;
  v14->Control |= 1u;
  BYTE3(v15->SecurityQos) = 0;
  a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
  v16 = BYTE2(v15->SecurityQos);
  if ( v16 == 40 )
  {
    v18 = v15->FullCreateOptions;
    v17 = (unsigned int)v15[1].SecurityQos;
  }
  else
  {
    v17 = HIDWORD(v15->AccessState);
    v18 = v16;
  }
  if ( (qword_1C0056210 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  v19 = (v17 >> 17) & 4 | 2;
  if ( (v17 & 0x10) == 0 )
    v19 = (v17 >> 17) & 4;
  if ( (v17 & 0x102) != 0x102 && (v17 & 0x80010) == 0 )
  {
    if ( (unsigned int)v18 > 0x20 || (v29 = 0x1000D0000LL, !_bittest64(&v29, v18)) )
      v2 = 1;
  }
  v20 = v19 | 1;
  if ( !v2 )
    v20 = v19;
  RaidStartIoPacket(a1, a2, v20);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
