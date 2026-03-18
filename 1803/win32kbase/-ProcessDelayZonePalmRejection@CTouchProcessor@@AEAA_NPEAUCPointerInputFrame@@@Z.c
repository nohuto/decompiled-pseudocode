/*
 * XREFs of ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01195AC
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0119C5C (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0062B5C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

bool __fastcall CTouchProcessor::ProcessDelayZonePalmRejection(CTouchProcessor *this, struct CPointerInputFrame *a2)
{
  bool v4; // si
  struct DelayZonePalmRejection *Instance; // rax
  DelayZonePalmRejection *v6; // rdi

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x25u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v4 = 1;
  Instance = DelayZonePalmRejection::GetInstance();
  v6 = Instance;
  if ( Instance )
  {
    if ( *((_DWORD *)Instance + 24) && gDeviceArbitrationType )
    {
      CInpLockGuard::UnLock((PERESOURCE *)this + 9);
      v4 = DelayZonePalmRejection::ProcessInput(v6, a2);
      CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
    }
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0x26u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x27u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return v4;
}
