/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012D59C
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C012D8E0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C012D4E0 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  struct CPalmRejectZoneInfo *v4; // rbx
  struct CPalmRejectZoneInfo *v5; // rax
  CInpLockGuard *v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  struct CPalmRejectZoneInfo *v9; // [rsp+50h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v7,
    (DelayZonePalmRejection *)((char *)this + 120));
  v4 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  WPP_RECORDER_SF_q(
    *((_QWORD *)this + 14),
    4u,
    0xDu,
    0x1Cu,
    (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
    a2);
  while ( v4 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v5 = v4;
    v9 = v4;
    v4 = *(struct CPalmRejectZoneInfo **)v4;
    if ( *((void **)v5 + 8) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v9);
  }
  if ( !v8 )
    CInpLockGuard::UnLock((PERESOURCE *)v7);
  return 1;
}
