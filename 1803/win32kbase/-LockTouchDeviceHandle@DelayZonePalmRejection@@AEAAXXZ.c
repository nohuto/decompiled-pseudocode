/*
 * XREFs of ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012CB00
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 */

void __fastcall DelayZonePalmRejection::LockTouchDeviceHandle(DelayZonePalmRejection *this)
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    v1[0] = (char *)this + 24;
    v1[1] = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*((_DWORD *)this + 4));
    HMAssignmentLock((__int64)v1);
  }
}
