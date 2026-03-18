/*
 * XREFs of MmUnsecureVirtualMemory @ 0x140511FC0
 * Callers:
 *     RtlFileMapFree @ 0x14006D794 (RtlFileMapFree.c)
 *     AlpcpRestoreWriteAccess @ 0x14047A4EC (AlpcpRestoreWriteAccess.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047A710 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     WbFreeMemoryBlock @ 0x140548FA4 (WbFreeMemoryBlock.c)
 *     AlpcpForceUnlinkSecureView @ 0x1406B18C0 (AlpcpForceUnlinkSecureView.c)
 *     AslpFilePartialViewFree @ 0x14073244C (AslpFilePartialViewFree.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140099160 (MiObtainReferencedSecureVad.c)
 *     MiRemoveSecureEntry @ 0x140099290 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  ULONG_PTR v2; // rax
  char *v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiObtainReferencedSecureVad((ULONG_PTR)SecureHandle, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, (__int64 *)SecureHandle);
    MiUnlockAndDereferenceVad(v3);
  }
}
