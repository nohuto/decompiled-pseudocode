/*
 * XREFs of RaUnitScsiIrp @ 0x1C0006F90
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0006EF0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     RaidUnitSubmitRequest @ 0x1C0006B90 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C000F570 (RaUnitQuiesceDeviceSrb.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001BD84 (RaUnitClaimDeviceSrb.c)
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00396D8 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C003A040 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C003A320 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C003A7D8 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C003A978 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C003BF18 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003F380 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C00408F0 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C006576C (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  int v2; // ebp
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
  unsigned int AccessState_high; // ebx
  unsigned __int64 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int v22; // eax
  unsigned int v23; // ebx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  char v33[16]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v5 = 1;
  v6 = 0;
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  v8 = *(_DWORD *)(a1 + 40);
  if ( v8 < 5 )
    goto LABEL_3;
  v27 = v8 - 5;
  if ( !v27 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction == 27
      || MajorFunction == 14 && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 266276 )
    {
      goto LABEL_3;
    }
LABEL_70:
    v29 = -1073741738;
LABEL_71:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 168), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v29);
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  v28 = v27 - 1;
  if ( !v28 )
    goto LABEL_70;
  if ( v28 == 1 )
  {
    v29 = RaUnitCheckRemoveStateForDisabled();
    if ( v29 < 0 )
      goto LABEL_71;
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
      RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
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
      &WPP_95124dee8acf35750318326cda357b29_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v12 = *(PDEVICE_OBJECT *)(a1 + 24), (v26 = *(_QWORD *)&v12[15].Flags) != 0)
      && (*(_DWORD *)(v26 + 20) & 1) == 0
      || (BYTE4(v12->Queue.Wcb.DeviceRoutine) & 2) != 0
      || *(&v12->ActiveThreadCount + 1) != 1 )
    {
      BYTE3(SecurityContext->SecurityQos) = 36;
      a2->IoStatus.Information = 0LL;
      RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
      return RaidCompleteRequestEx(a2);
    }
  }
  if ( FullCreateOptions )
  {
    if ( FullCreateOptions == 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      {
        v22 = RaidUnitSubmitRequest(a1, (__int64)a2);
      }
      else
      {
        *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v22 = RaidCompleteRequestEx(a2);
      }
      v23 = v22;
      v24 = v22 == 259;
LABEL_31:
      if ( v24 )
LABEL_32:
        v5 = 0;
    }
    else
    {
      switch ( FullCreateOptions )
      {
        case 1u:
          v23 = RaUnitClaimDeviceSrb(a1, a2);
          break;
        case 2u:
        case 7u:
        case 9u:
          v23 = RaidUnitSubmitRequest(a1, (__int64)a2);
          goto LABEL_32;
        case 4u:
          *(_BYTE *)(a1 + 436) = 0;
          RaidRestartIoQueue(a1);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v23 = RaidCompleteRequestEx(a2);
          break;
        case 6u:
          v23 = RaUnitReleaseDeviceSrb(a1, a2);
          break;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v23 = RaidUnitSubmitResetRequest(a1, a2);
          break;
        case 0x12u:
          v23 = RaUnitResetBusSrb(a1, a2);
          break;
        case 0x15u:
          v23 = RaUnitFlushQueueSrb(a1, a2);
          break;
        case 0x17u:
          v23 = RaidCompleteRequestEx(a2);
          break;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 1;
          v23 = RaidCompleteRequestEx(a2);
          break;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 0;
          RaidRestartIoQueue(a1);
          v23 = RaidCompleteRequestEx(a2);
          break;
        case 0x1Au:
          v23 = RaUnitQuiesceDeviceSrb(a1, a2);
          v24 = v23 == 259;
          goto LABEL_31;
        default:
          v23 = RaUnitUnknownSrb(v12, a2);
          break;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        23LL,
        &WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a1,
        a2,
        v23);
    }
    if ( v5 )
      RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
    return v23;
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
        v23 = RaidCompleteRequestEx(a2);
        RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, a1, a2);
        }
        return v23;
      }
    }
  }
  if ( StorEtwLoggingEnabled
    && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1E00) != 0
    && ((LOBYTE(SrbScsiData->SecurityQos) - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, v33);
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
    AccessState_high = (unsigned int)v15[1].SecurityQos;
  }
  else
  {
    AccessState_high = HIDWORD(v15->AccessState);
    v18 = v16;
  }
  if ( (qword_1C00551F8 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (_DWORD)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | ((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  v19 = (AccessState_high >> 17) & 4 | 2;
  if ( (AccessState_high & 0x10) == 0 )
    v19 = (AccessState_high >> 17) & 4;
  if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
  {
    if ( (unsigned int)v18 > 0x20 || (v25 = 0x1000D0000LL, !_bittest64(&v25, v18)) )
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
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_95124dee8acf35750318326cda357b29_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
