/*
 * XREFs of RaUnitScsiIrp @ 0x1C00085C0
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0008520 (RaDriverScsiIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C0010EA0 (RaUnitQuiesceDeviceSrb.c)
 *     RaidUnitSubmitRequest @ 0x1C0017474 (RaidUnitSubmitRequest.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0017AB4 (RaUnitClaimDeviceSrb.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0039944 (RaidNtStatusToSrbStatus.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C003A630 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitFlushQueueSrb @ 0x1C003A7B8 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C003AC80 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitResetBusSrb @ 0x1C003ACE8 (RaUnitResetBusSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x1C003BCE4 (RaUnitSwallowStopUnitCommand.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003E128 (RaidUnitSubmitResetRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C0040B40 (StorEtwIORequestDispatch.c)
 *     RaUnitUnknownSrb @ 0x1C0066FCC (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, IRP *a2)
{
  int v2; // ebp
  bool v5; // r13
  _IO_SECURITY_CONTEXT *v6; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v8; // ecx
  unsigned __int8 v9; // al
  unsigned int FullCreateOptions; // r15d
  int SecurityQos; // r12d
  PDEVICE_OBJECT v12; // rcx
  _IO_SECURITY_CONTEXT *v13; // r9
  unsigned int AccessState; // r10d
  unsigned int i; // r11d
  __int64 v16; // rcx
  unsigned __int64 DesiredAccess; // r8
  int v18; // r15d
  __int64 v19; // rdx
  _IO_STACK_LOCATION *v20; // rax
  _IO_SECURITY_CONTEXT *v21; // rcx
  unsigned __int8 v22; // al
  unsigned __int64 v23; // r14
  unsigned int v24; // ebx
  unsigned int v25; // edx
  __int64 v26; // r8
  _IO_STACK_LOCATION *v28; // rcx
  _IO_SECURITY_CONTEXT *v29; // rdx
  unsigned __int8 v30; // al
  int AccessState_high; // ebx
  unsigned __int64 v32; // r14
  __int64 v33; // r8
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // ecx
  int v39; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int MajorFunction; // eax
  int v42; // r15d
  __int64 v44; // rcx
  char v45[16]; // [rsp+50h] [rbp-58h] BYREF

  v2 = 0;
  v5 = 1;
  v6 = 0LL;
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
  v8 = *(_DWORD *)(a1 + 40);
  if ( v8 < 5 )
    goto LABEL_3;
  v37 = v8 - 5;
  if ( !v37 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction == 27
      || MajorFunction == 14 && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 266276 )
    {
      goto LABEL_3;
    }
LABEL_87:
    v39 = -1073741738;
LABEL_88:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 680), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 168), 0, 0);
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus((unsigned int)v39);
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2);
  }
  v38 = v37 - 1;
  if ( !v38 )
    goto LABEL_87;
  if ( v38 == 1 )
  {
    v39 = RaUnitCheckRemoveStateForDisabled();
    if ( v39 < 0 )
      goto LABEL_88;
  }
LABEL_3:
  v9 = BYTE2(SecurityContext->SecurityQos);
  if ( v9 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) != 1
      || (v6 = SecurityContext,
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
      &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
      a1,
      a2,
      FullCreateOptions);
  }
  if ( (SecurityQos & 0x100000) != 0 )
  {
    if ( (v12 = *(PDEVICE_OBJECT *)(a1 + 24), (v35 = *(_QWORD *)&v12[15].Flags) != 0)
      && (*(_DWORD *)(v35 + 20) & 1) == 0
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
      v28 = a2->Tail.Overlay.CurrentStackLocation;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      {
        v29 = v28->Parameters.Create.SecurityContext;
        v28->Control |= 1u;
        BYTE3(v29->SecurityQos) = 0;
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
        v30 = BYTE2(v29->SecurityQos);
        if ( v30 == 40 )
        {
          v32 = v29->FullCreateOptions;
          AccessState_high = (int)v29[1].SecurityQos;
        }
        else
        {
          AccessState_high = HIDWORD(v29->AccessState);
          v32 = v30;
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
        v33 = 0LL;
        if ( (AccessState_high & 0x80000) != 0 )
          v33 = 4LL;
        if ( (AccessState_high & 0x10) != 0 )
          v33 = (unsigned int)v33 | 2;
        if ( (AccessState_high & 0x102) != 0x102 && (AccessState_high & 0x80010) == 0 )
        {
          if ( (unsigned int)v32 > 0x20 || (v44 = 0x1000D0000LL, !_bittest64(&v44, v32)) )
            v33 = (unsigned int)v33 | 1;
        }
        RaidStartIoPacket(a1, a2, v33);
        v34 = 259;
      }
      else
      {
        *(_BYTE *)(v28->Parameters.WMI.ProviderId + 3) = 1;
        a2->IoStatus.Information = 0LL;
        v34 = RaidCompleteRequestEx(a2);
      }
      v5 = v34 != 259;
    }
    else
    {
      switch ( FullCreateOptions )
      {
        case 1u:
          v34 = RaUnitClaimDeviceSrb(a1, a2);
          break;
        case 2u:
        case 7u:
        case 9u:
          v34 = RaidUnitSubmitRequest(a1, a2);
          v5 = 0;
          break;
        case 4u:
          *(_BYTE *)(a1 + 436) = 0;
          RaidRestartIoQueue(a1);
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          a2->IoStatus.Information = 0LL;
          v34 = RaidCompleteRequestEx(a2);
          break;
        case 6u:
          v34 = RaUnitReleaseDeviceSrb(a1, a2);
          break;
        case 0x10u:
        case 0x13u:
        case 0x20u:
          v34 = RaidUnitSubmitResetRequest(a1, a2);
          break;
        case 0x12u:
          v34 = RaUnitResetBusSrb(a1, a2);
          break;
        case 0x15u:
          v34 = RaUnitFlushQueueSrb(a1, a2);
          break;
        case 0x17u:
          v34 = RaidCompleteRequestEx(a2);
          break;
        case 0x18u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 1;
          v34 = RaidCompleteRequestEx(a2);
          break;
        case 0x19u:
          *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
          *(_BYTE *)(a1 + 437) = 0;
          RaidRestartIoQueue(a1);
          v34 = RaidCompleteRequestEx(a2);
          break;
        case 0x1Au:
          v34 = RaUnitQuiesceDeviceSrb(a1, a2);
          if ( v34 == 259 )
            v5 = 0;
          break;
        default:
          v34 = RaUnitUnknownSrb(v12, a2);
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
        &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
        a1,
        a2,
        v34);
    }
    if ( v5 )
      RaUnitReleaseRemoveLock(a1);
    return v34;
  }
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    v13 = SecurityContext + 3;
    goto LABEL_22;
  }
  v13 = 0LL;
  if ( BYTE2(v6->SecurityQos) == 40 && !v6->FullCreateOptions )
  {
    AccessState = (unsigned int)v6[2].AccessState;
    for ( i = 0; i < AccessState; ++i )
    {
      v16 = *((unsigned int *)&v6[5].SecurityQos + i);
      if ( (unsigned int)v16 >= 0x80 )
      {
        DesiredAccess = v6->DesiredAccess;
        if ( (unsigned int)v16 <= (unsigned int)DesiredAccess )
        {
          v18 = *(_DWORD *)((char *)&v6->SecurityQos + v16);
          v19 = (__int64)v6 + v16;
          if ( v18 == 64 )
          {
            if ( v16 + 40 <= DesiredAccess )
              goto LABEL_20;
          }
          else
          {
            v42 = v18 - 65;
            if ( v42 )
            {
              if ( v42 == 1 && v16 + 40 <= DesiredAccess )
              {
                v13 = (_IO_SECURITY_CONTEXT *)(v19 + 32);
                if ( !*(_DWORD *)(v19 + 12) )
                  v13 = 0LL;
                break;
              }
            }
            else if ( v16 + 56 <= DesiredAccess )
            {
LABEL_20:
              if ( *(_BYTE *)(v19 + 10) )
                v13 = (_IO_SECURITY_CONTEXT *)(v19 + 24);
              break;
            }
          }
        }
      }
    }
  }
LABEL_22:
  if ( v13 )
  {
    if ( LOBYTE(v13->SecurityQos) == 27 && (BYTE4(v13->SecurityQos) & 1) == 0 )
    {
      if ( (unsigned __int8)RaUnitSwallowStopUnitCommand(a1) )
      {
        BYTE3(SecurityContext->SecurityQos) = 1;
        a2->IoStatus.Information = 0LL;
        v34 = RaidCompleteRequestEx(a2);
        RaUnitReleaseRemoveLock(a1);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids, a1, a2);
        }
        return v34;
      }
    }
  }
  if ( StorEtwLoggingEnabled
    && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1E00) != 0
    && ((LOBYTE(v13->SecurityQos) - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, v45);
    StorEtwIORequestDispatch(a2);
  }
  v20 = a2->Tail.Overlay.CurrentStackLocation;
  v21 = v20->Parameters.Create.SecurityContext;
  v20->Control |= 1u;
  BYTE3(v21->SecurityQos) = 0;
  a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = 0LL;
  v22 = BYTE2(v21->SecurityQos);
  if ( v22 == 40 )
  {
    v23 = v21->FullCreateOptions;
    v24 = (unsigned int)v21[1].SecurityQos;
  }
  else
  {
    v24 = HIDWORD(v21->AccessState);
    v23 = v22;
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
  v25 = (v24 >> 17) & 4 | 2;
  if ( (v24 & 0x10) == 0 )
    v25 = (v24 >> 17) & 4;
  if ( (v24 & 0x102) != 0x102 && (v24 & 0x80010) == 0 )
  {
    if ( (unsigned int)v23 > 0x20 || (v36 = 0x1000D0000LL, !_bittest64(&v36, v23)) )
      v2 = 1;
  }
  v26 = v25 | 1;
  if ( !v2 )
    v26 = v25;
  RaidStartIoPacket(a1, a2, v26);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids, a1, a2, 259);
  }
  return 259LL;
}
