/*
 * XREFs of IsDwmInputThread @ 0x1C00168B0
 * Callers:
 *     NtMITUpdateInputGlobals @ 0x1C008FAA0 (NtMITUpdateInputGlobals.c)
 * Callees:
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0085DD4 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 */

_BOOL8 IsDwmInputThread()
{
  __int64 v0; // rbx
  bool v1; // di

  if ( gdwMitConfig )
  {
    v0 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v0, 0LL);
    v1 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v0 + 40);
    ExReleasePushLockSharedEx(v0, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    return CInputManager::IsDwmInputThread(KeGetCurrentThread());
  }
  return v1;
}
