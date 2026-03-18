/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0
 * Callers:
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     ExReturnPoolQuota @ 0x140024F70 (ExReturnPoolQuota.c)
 *     PspRevertContainerImpersonation @ 0x140044790 (PspRevertContainerImpersonation.c)
 *     IopCallDriverReference @ 0x14004AD54 (IopCallDriverReference.c)
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     MmChangeSectionBackingFile @ 0x140118718 (MmChangeSectionBackingFile.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x14011C340 (ExReinitializeResourceLite.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     IopBoostThreadCallback @ 0x14011E740 (IopBoostThreadCallback.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 *     CcChangeBackingFileObject @ 0x14014A840 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x140205460 (KiMonitorCacheErrata.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspChargeProcessWakeCounter @ 0x1405263E0 (PspChargeProcessWakeCounter.c)
 *     VrpFreeKeyContext @ 0x1406795DC (VrpFreeKeyContext.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
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
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}
