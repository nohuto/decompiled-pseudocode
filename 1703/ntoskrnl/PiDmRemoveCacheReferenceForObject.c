/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x1404E4180
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14059B0D0 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x1405ADAE0 (PiDmListInitEnumCallback.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140485AA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmLookupObject @ 0x140486DB8 (PiDmLookupObject.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(int a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v4; // edi
  void *ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v7; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  v7 = (unsigned int *)PiDmLookupObject((__int64)ObjectManagerForObjectType, a2);
  Buffer = v7;
  if ( v7 )
  {
    --v7[3];
    if ( !Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)ObjectManagerForObjectType + 1, &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
