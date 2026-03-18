/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0
 * Callers:
 *     CcChangeBackingFileObject @ 0x1400022F0 (CcChangeBackingFileObject.c)
 *     IopDeleteFileObjectExtension @ 0x140062248 (IopDeleteFileObjectExtension.c)
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     IopBoostThreadCallback @ 0x1400899D0 (IopBoostThreadCallback.c)
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     ExReinitializeResourceLite @ 0x1400AA920 (ExReinitializeResourceLite.c)
 *     ExReturnPoolQuota @ 0x1400BA618 (ExReturnPoolQuota.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     IopCallDriverReference @ 0x1400EEF70 (IopCallDriverReference.c)
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiMonitorCacheErrata @ 0x140249BD0 (KiMonitorCacheErrata.c)
 *     ExpReleasePoolQuota @ 0x1402B8F50 (ExpReleasePoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspChargeProcessWakeCounter @ 0x1404CE250 (PspChargeProcessWakeCounter.c)
 *     VrpFreeKeyContext @ 0x140708240 (VrpFreeKeyContext.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  __int64 v2; // r8
  __int64 v3; // r9
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v6 = v5 <= 1;
  BugCheckParameter4 = v5 - 1;
  if ( v6 )
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
    ObpDeferObjectDeletion((signed __int64)Object - 48, *(__int64 *)&Tag, v2, v3);
  }
}
