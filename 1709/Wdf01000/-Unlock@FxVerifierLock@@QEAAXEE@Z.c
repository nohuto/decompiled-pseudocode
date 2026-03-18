/*
 * XREFs of ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0
 * Callers:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001450 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     imp_WdfCollectionGetItem @ 0x1C0001860 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C0001BC0 (imp_WdfCollectionGetCount.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C00025E0 (imp_WdfIoQueueFindRequest.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00030E0 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00032B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C0003610 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0004DE0 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0019C10 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0019E1C (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0019FB0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C001BAB0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1C001CB40 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0021580 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0022CB0 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00263F0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0029418 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C002A160 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C002AE60 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C002B1E0 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0030B20 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0030BE0 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0031160 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031860 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0033B10 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfCmResourceListGetCount @ 0x1C0037C60 (imp_WdfCmResourceListGetCount.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1C007AF40 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C00824AC (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C0082610 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 */

void __fastcall FxVerifierLock::Unlock(FxVerifierLock *this, KIRQL PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  KIRQL v7; // r13
  FxVerifierThreadTableEntry *ThreadTableEntry; // rax
  FxVerifierThreadTableEntry *_a2; // r14
  _LARGE_INTEGER *p_sleepTime; // r8
  FxVerifierLock *PerThreadPassiveLockList; // rcx
  FxVerifierLock *i; // rdi
  unsigned __int16 v13; // r9
  FxVerifierLock *j; // rdi
  _LARGE_INTEGER Interval; // [rsp+40h] [rbp-48h] BYREF
  _LARGE_INTEGER sleepTime; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  _a1 = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  if ( _a1 != this->m_OwningThread )
  {
    WPP_IFR_SF_qqq(m_Globals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, this->m_ParentObject);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&m_Globals->ThreadTableLock.m_Lock);
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(this->m_OwningThread, this, 1u);
  _a2 = ThreadTableEntry;
  if ( !ThreadTableEntry )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_cpp_Traceguids, _a1);
    this->m_OwningThread = 0LL;
    KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
    if ( !this->m_UseMutex )
    {
      KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
      if ( KeGetCurrentIrql() )
        return;
      sleepTime.QuadPart = 0LL;
      p_sleepTime = &sleepTime;
      goto LABEL_35;
    }
LABEL_32:
    ExReleaseFastMutexUnsafe(&this->m_Mutex.m_Lock);
    KeLeaveCriticalRegion();
    return;
  }
  if ( this->m_UseMutex )
  {
    PerThreadPassiveLockList = ThreadTableEntry->PerThreadPassiveLockList;
    if ( !PerThreadPassiveLockList )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      goto LABEL_32;
    }
    if ( PerThreadPassiveLockList == this )
    {
      ThreadTableEntry->PerThreadPassiveLockList = this->m_OwnedLink;
LABEL_23:
      this->m_OwnedLink = 0LL;
      FxVerifierLock::ReleaseOrReplaceThreadTableEntry(_a1, this);
      goto LABEL_31;
    }
    for ( i = PerThreadPassiveLockList->m_OwnedLink; i; i = i->m_OwnedLink )
    {
      if ( i == this )
        goto LABEL_17;
      PerThreadPassiveLockList = i;
    }
    v13 = 17;
  }
  else
  {
    PerThreadPassiveLockList = ThreadTableEntry->PerThreadDispatchLockList;
    if ( !PerThreadPassiveLockList )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xFu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
      if ( KeGetCurrentIrql() )
        return;
      v17 = 0LL;
      p_sleepTime = (_LARGE_INTEGER *)&v17;
      goto LABEL_35;
    }
    if ( PerThreadPassiveLockList == this )
    {
      ThreadTableEntry->PerThreadDispatchLockList = this->m_OwnedLink;
      goto LABEL_23;
    }
    for ( j = PerThreadPassiveLockList->m_OwnedLink; j; j = j->m_OwnedLink )
    {
      if ( j == this )
      {
LABEL_17:
        PerThreadPassiveLockList->m_OwnedLink = this->m_OwnedLink;
        this->m_OwnedLink = 0LL;
        FxVerifierLock::ReleaseOrReplaceThreadTableEntry(_a1, this);
        goto LABEL_31;
      }
      PerThreadPassiveLockList = j;
    }
    v13 = 18;
  }
  WPP_IFR_SF_qqq(
    m_Globals,
    2u,
    0x12u,
    v13,
    WPP_FxVerifierLock_cpp_Traceguids,
    this,
    ThreadTableEntry,
    this->m_OwningThread);
  FxVerifierDbgBreakPoint(m_Globals);
LABEL_31:
  this->m_OwningThread = 0LL;
  KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
  if ( this->m_UseMutex )
    goto LABEL_32;
  KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
  if ( KeGetCurrentIrql() )
    return;
  Interval.QuadPart = 0LL;
  p_sleepTime = &Interval;
LABEL_35:
  KeDelayExecutionThread(0, 1u, p_sleepTime);
}
