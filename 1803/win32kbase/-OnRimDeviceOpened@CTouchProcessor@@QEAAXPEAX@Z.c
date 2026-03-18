/*
 * XREFs of ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117F6C
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0127810 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C01178EC (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ApiSetEditionCreateEdgePalmRejectionZones @ 0x1C013D9F0 (ApiSetEditionCreateEdgePalmRejectionZones.c)
 */

void __fastcall CTouchProcessor::OnRimDeviceOpened(CTouchProcessor *this, unsigned __int64 a2)
{
  CTouchProcessor *v2; // rbx
  CTouchProcessor *v4; // rcx

  v2 = gpTouchProcessor;
  CInpLockGuard::LockExclusive((PERESOURCE *)gpTouchProcessor + 9);
  v4 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x14Eu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( CTouchProcessor::IsTouchDevice(v4, a2) )
    ApiSetEditionCreateEdgePalmRejectionZones(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x14Fu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuard::UnLock((PERESOURCE *)v2 + 9);
}
