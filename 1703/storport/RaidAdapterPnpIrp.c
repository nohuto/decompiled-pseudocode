/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C0012708
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0004D80 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00056D4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001253C (RaidAdapterQueryInterfaceIrp.c)
 *     RaForwardIrp @ 0x1C001293C (RaForwardIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0012978 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0012A74 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaidAdapterQueryIdIrp @ 0x1C002CBD8 (RaidAdapterQueryIdIrp.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 *     Template_pqqp @ 0x1C002FD24 (Template_pqqp.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C00305E4 (WPP_SF_qqDD.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C005DD1C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C005E3E8 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C005E46C (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0063C98 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0063F70 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0064010 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C006421C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0064338 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00644E4 (RaidAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(_QWORD *Context, PIRP Irp)
{
  int v4; // edx
  signed int v5; // esi
  unsigned int MinorFunction; // ebp
  int v7; // ecx
  int v8; // eax
  char v9; // r14
  unsigned int InterfaceIrp; // eax
  unsigned int v11; // esi
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-48h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  v5 = RaidAcquireAdapterRemoveLock((__int64)Context);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, v14);
    if ( MinorFunction > 0x16 || (v8 = 4718720, !_bittest(&v8, MinorFunction)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pqqp(v7, v4, (unsigned int)v14, (_DWORD)Irp, MinorFunction, 0, Context[1]);
    }
  }
  if ( v5 < 0 && (v5 != -1073741738 || MinorFunction != 2 || *((_DWORD *)Context + 22) != 5) )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v5);
  }
  v9 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      12LL,
      &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
      Context,
      Irp,
      MinorFunction);
  }
  if ( MinorFunction > 7 )
  {
    switch ( MinorFunction )
    {
      case 8u:
        InterfaceIrp = RaidAdapterQueryInterfaceIrp(Context, Irp);
        break;
      case 9u:
        InterfaceIrp = RaidAdapterQueryCapabilitiesIrp(Context, Irp);
        break;
      case 0xDu:
        InterfaceIrp = RaidAdapterFilterResourceRequirementsIrp(Context, Irp);
        break;
      case 0x13u:
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pqqp(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)v14,
            (_DWORD)Irp,
            19,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            Context[1]);
        InterfaceIrp = RaidAdapterQueryIdIrp(Context, Irp);
        break;
      case 0x14u:
        InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(Context, Irp);
        break;
      case 0x16u:
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pqqp(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)v14,
            (_DWORD)Irp,
            22,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            Context[1]);
        InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(Context, Irp);
        break;
      case 0x17u:
        v9 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(Context, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Context[32]);
        v9 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v15[0] = 0LL;
          v15[1] = 0LL;
          IoGetActivityIdIrp(Irp, v15);
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
            Template_pq(v13, &EventPnpRequestComplete, v15, Irp, Irp->IoStatus.Status);
        }
        InterfaceIrp = RaForwardIrp(Context[3], Irp);
        break;
    }
    goto LABEL_13;
  }
  switch ( MinorFunction )
  {
    case 7u:
      if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pqqp(
          Irp->Tail.Overlay.CurrentStackLocation,
          v4,
          (unsigned int)v14,
          (_DWORD)Irp,
          7,
          Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          Context[1]);
      InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(Context, Irp);
      break;
    case 0u:
      InterfaceIrp = RaidAdapterStartDeviceIrp((char *)Context, Irp);
      break;
    case 1u:
      InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(Context, Irp);
      break;
    case 2u:
      v9 = 0;
      InterfaceIrp = RaidAdapterRemoveDeviceIrp(Context, Irp);
      break;
    case 3u:
      goto LABEL_52;
    case 4u:
      InterfaceIrp = RaidAdapterStopDeviceIrp(Context, Irp);
      break;
    case 5u:
      InterfaceIrp = RaidAdapterQueryStopDeviceIrp(Context, Irp);
      break;
    default:
LABEL_52:
      InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(Context, Irp);
      break;
  }
LABEL_13:
  v11 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
      Context,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v9 )
    ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Context[32]);
  return v11;
}
