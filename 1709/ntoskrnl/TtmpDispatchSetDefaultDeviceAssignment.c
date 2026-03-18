/*
 * XREFs of TtmpDispatchSetDefaultDeviceAssignment @ 0x140710A44
 * Callers:
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140710434 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x140712AFC (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 __fastcall TtmpDispatchSetDefaultDeviceAssignment(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 0, &v7, (__int64 *)&Object);
  v4 = v7;
  v5 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 16) != 0;
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 4) & 0xFFFFF7FF | ((unsigned __int8)v3 << 11);
    TtmiLogSessionDeviceAssignmentPolicySet(v3);
    v5 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDefaultDeviceAssignment", 676, v2, v2);
  }
  if ( v4 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
