/*
 * XREFs of MmUnsecureVirtualMemory @ 0x140593430
 * Callers:
 *     RtlFileMapFree @ 0x1401618FC (RtlFileMapFree.c)
 *     AlpcpForceUnlinkSecureView @ 0x14048BE1C (AlpcpForceUnlinkSecureView.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x1404D7A24 (AlpcpRestoreWriteAccess.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 *     WbFreeMemoryBlock @ 0x14053A648 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405749A8 (MmStoreAllocateVirtualMemory.c)
 *     VmUnsecureBackingMemory @ 0x1407A0CB0 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x1407DF32C (AslpFilePartialViewFree.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x1400E45B0 (MiObtainReferencedSecureVad.c)
 *     MiRemoveSecureEntry @ 0x1400E46F0 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_1403CB688 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v7);
  v3 = (void *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3, v4, v5, v6);
  }
}
