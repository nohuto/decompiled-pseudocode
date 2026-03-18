/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C012D3EC
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C00B56B0 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C012D4E0 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0132B48 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

bool __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(DelayZonePalmRejection *this, int a2)
{
  struct _KTHREAD **v4; // r8
  struct _KTHREAD **v5; // rax
  struct _KTHREAD **v6; // rcx
  bool v7; // di
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  CInpLockGuard *v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF
  struct CPalmRejectZoneInfo *v15; // [rsp+60h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v12,
    (DelayZonePalmRejection *)((char *)this + 120));
  v4 = (struct _KTHREAD **)((char *)this + 72);
  v5 = (struct _KTHREAD **)*((_QWORD *)this + 9);
  if ( v5 == (struct _KTHREAD **)((char *)this + 72) )
    goto LABEL_10;
  do
  {
    v6 = v5;
    if ( *((_DWORD *)v5 + 10) == a2 )
      break;
    v5 = (struct _KTHREAD **)*v5;
  }
  while ( v5 != v4 );
  if ( v5 == v4 || (v15 = (struct CPalmRejectZoneInfo *)v6) == 0LL || v6[2] != KeGetCurrentThread() )
  {
LABEL_10:
    v7 = 0;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 14), 4u, 0xDu, 0x1Bu, (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids);
    v7 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v15);
    if ( v7 )
    {
      v9 = *((_QWORD *)this + 21);
      if ( v9 )
      {
        v10 = *((unsigned int *)this + 1);
        v14 = *(_OWORD *)((char *)v15 + 24);
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v9, v10, v8, 4LL, &v14);
      }
    }
  }
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12);
  return v7;
}
