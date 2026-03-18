/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0
 * Callers:
 *     ExReinitializeResourceLite @ 0x14001F1C0 (ExReinitializeResourceLite.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     IopCallDriverReference @ 0x1400610C0 (IopCallDriverReference.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     ExReturnPoolQuota @ 0x1401166AC (ExReturnPoolQuota.c)
 *     IopBoostThreadCallback @ 0x14012AAC0 (IopBoostThreadCallback.c)
 *     CcChangeBackingFileObject @ 0x14015618C (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x14020B600 (KiMonitorCacheErrata.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 *     VrpFreeKeyContext @ 0x1406A3BD0 (VrpFreeKeyContext.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
