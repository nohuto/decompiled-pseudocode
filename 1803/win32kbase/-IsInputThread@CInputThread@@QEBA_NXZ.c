/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0039F4C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     NtMITActivateInputProcessing @ 0x1C00B3860 (NtMITActivateInputProcessing.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00B38F0 (NtMITBindInputTypeToMonitors.c)
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00B44D0 (NtMITInjectLegacyISMTouchFrame.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00B4D40 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00B4F90 (NtMITSynthesizeTouchInput.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C00B5540 (NtMITWaitForMultipleObjectsEx.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 */

bool __fastcall CInputThread::IsInputThread(CInputThread *this)
{
  CInputThread *v1; // rdi
  bool v2; // bl

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v2 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
