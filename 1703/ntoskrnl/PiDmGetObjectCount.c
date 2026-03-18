/*
 * XREFs of PiDmGetObjectCount @ 0x140697544
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1404BD794 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlNumberGenericTableElementsAvl @ 0x14006DC70 (RtlNumberGenericTableElementsAvl.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140485AA0 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObjectCount(int a1)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v3; // rdi
  ULONG v4; // ebx

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  v3 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v4 = RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)&v3[1]);
  ExReleaseResourceLite(v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
