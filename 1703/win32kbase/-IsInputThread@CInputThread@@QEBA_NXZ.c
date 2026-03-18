/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0048F80
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C004C0E0 (NtMITWaitForMultipleObjectsEx.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00DEA80 (NtMITBindInputTypeToMonitors.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00DFEF0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00E03A0 (NtMITSynthesizeTouchInput.c)
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
