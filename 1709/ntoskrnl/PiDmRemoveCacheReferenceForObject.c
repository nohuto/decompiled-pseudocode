/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x14051804C
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     PiDmListInitEnumCallback @ 0x1405B9CF0 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1405E70E8 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmLookupObject @ 0x1405239E0 (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140523BF4 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(__int64 a1, __int64 a2, void *a3)
{
  unsigned int v4; // edi
  __int64 ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v7; // rax
  PVOID Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  v7 = (_DWORD *)PiDmLookupObject(ObjectManagerForObjectType, a2);
  Buffer = v7;
  if ( v7 )
  {
    --v7[3];
    if ( !*((_DWORD *)Buffer + 3) )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
