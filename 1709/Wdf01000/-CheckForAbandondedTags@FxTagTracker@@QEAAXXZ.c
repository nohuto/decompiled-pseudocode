/*
 * XREFs of ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C
 * Callers:
 *     imp_WdfObjectDereferenceActual @ 0x1C0002820 (imp_WdfObjectDereferenceActual.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C0003610 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0008E50 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000A1D0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000B2A0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000C290 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C001BAB0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C0082B7C (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqsd @ 0x1C0082D24 (WPP_IFR_SF_qqsd.c)
 */

void __fastcall FxTagTracker::CheckForAbandondedTags(FxTagTracker *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int16 v3; // dx
  bool v4; // r15
  KIRQL v5; // al
  unsigned int v6; // r8d
  FxTagTrackingBlock *m_Next; // rdx
  KIRQL v8; // r14
  FxTagTrackingBlock *Next; // rdi
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  v3 = this->m_OwningObject->m_ObjectFlags & 8;
  v4 = v3 != 0;
  if ( v3 && (this->m_Next || this->m_FailedCount) )
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_fxtagtracker_cpp_Traceguids, this);
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_Next = this->m_Next;
  v8 = v5;
  if ( m_Next )
  {
    do
    {
      Next = m_Next->Next;
      if ( v4 )
      {
        WPP_IFR_SF_qqsd(
          m_Globals,
          2u,
          v6,
          0xCu,
          traceGuid,
          this->m_OwningObject,
          m_Next->Tag,
          m_Next->File,
          m_Next->Line);
      }
      else
      {
        v4 = 1;
        WPP_IFR_SF_qqsd(
          m_Globals,
          3u,
          v6,
          0xDu,
          traceGuid,
          this->m_OwningObject,
          m_Next->Tag,
          m_Next->File,
          m_Next->Line);
      }
      m_Next = Next;
    }
    while ( Next );
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v8);
}
