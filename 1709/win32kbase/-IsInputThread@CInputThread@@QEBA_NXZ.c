/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920
 * Callers:
 *     NtMITWaitForMultipleObjectsEx @ 0x1C0016810 (NtMITWaitForMultipleObjectsEx.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0019E30 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     NtMITActivateInputProcessing @ 0x1C0090090 (NtMITActivateInputProcessing.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00E5D90 (NtMITBindInputTypeToMonitors.c)
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00E6840 (NtMITInjectLegacyISMTouchFrame.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00E6C30 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00E6E80 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::IsInputThread(CInputThread *this)
{
  __int64 v1; // rdi
  bool v2; // bl

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v2 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v1 + 40);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
