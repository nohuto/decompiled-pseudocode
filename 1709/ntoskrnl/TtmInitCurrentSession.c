/*
 * XREFs of TtmInitCurrentSession @ 0x14070F2CC
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     TtmiUpdateActiveTerminalCount @ 0x14070FB00 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogInitCurrentSessionStart @ 0x140712254 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1407122F8 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x140712AFC (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 TtmInitCurrentSession()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  unsigned int v3; // edi
  int v4; // edx
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  TtmiLogInitCurrentSessionStart();
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  if ( TtmpSession )
  {
    v3 = -1073741637;
    v4 = 301;
LABEL_3:
    TtmiLogError("TtmInitCurrentSession", v4, -1, v3);
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x536D7454u);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    v4 = 310;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0xC0uLL);
  *(_DWORD *)(v6 + 8) = 1;
  *(_DWORD *)v6 = v2;
  LOBYTE(v7) = 1;
  *(_QWORD *)(v6 + 48) = v6 + 40;
  *(_QWORD *)(v6 + 40) = v6 + 40;
  *(_QWORD *)(v6 + 88) = v6 + 80;
  *(_QWORD *)(v6 + 80) = v6 + 80;
  *(_QWORD *)(v6 + 64) = v6 + 72;
  *(_DWORD *)(v6 + 56) = 32;
  *(_DWORD *)(v6 + 112) = 0;
  *(_DWORD *)(v6 + 116) = 0;
  *(_QWORD *)(v6 + 104) = v6 + 96;
  *(_QWORD *)(v6 + 96) = v6 + 96;
  *(_DWORD *)(v6 + 4) |= 0x800u;
  TtmiLogSessionDeviceAssignmentPolicySet(v7);
  *(_DWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 120) = 0LL;
  *(_QWORD *)(v6 + 136) = TtmpSessionWorker;
  *(_QWORD *)(v6 + 144) = v6;
  *(_DWORD *)(v6 + 4) |= 8u;
  *(_DWORD *)(v6 + 76) = 1;
  v8 = TtmiCreateTerminal(v6, 0x1F0003u, 0, (unsigned __int64 *)(v6 + 24), &v10, (_QWORD *)(v6 + 32));
  v3 = v8;
  if ( v8 >= 0 )
  {
    TtmiUpdateActiveTerminalCount(v6, 0LL, 0LL);
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_VIDEO_DIM_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v6,
           (PVOID *)(v6 + 168)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_CONSOLE_VIDEO_TIMEOUT,
           TtmpTerminal0PowerSettingCallback,
           (PVOID)v6,
           (PVOID *)(v6 + 176)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v3 = 0;
    TtmpSession = v6;
    v6 = 0LL;
  }
  else
  {
    TtmiLogError("TtmInitCurrentSession", 367, v8, v8);
  }
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x536D7454u);
LABEL_15:
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  TtmiLogInitCurrentSessionStop(v3);
  return v3;
}
