/*
 * XREFs of PiDmGetObjectCount @ 0x1406C2D0C
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x140580A48 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlNumberGenericTableElementsAvl @ 0x1400F9D00 (RtlNumberGenericTableElementsAvl.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140523BF4 (PiDmGetObjectManagerForObjectType.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
