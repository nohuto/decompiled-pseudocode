/*
 * XREFs of RtlPcToFilePath @ 0x1406EECDC
 * Callers:
 *     KitLogFeatureUsage @ 0x14025EA90 (KitLogFeatureUsage.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall RtlPcToFilePath(unsigned __int64 a1, UNICODE_STRING *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // r8
  unsigned int v6; // ebx
  PVOID *v7; // rdx
  PVOID v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  v5 = (PVOID *)PsLoadedModuleList;
  v6 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v5 != &PsLoadedModuleList )
    {
      v7 = v5;
      v5 = (PVOID *)*v5;
      v8 = v7[6];
      if ( a1 >= (unsigned __int64)v8 && a1 < (unsigned __int64)v8 + *((unsigned int *)v7 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v7 + 9));
        goto LABEL_7;
      }
    }
  }
  v6 = -1073741275;
LABEL_7:
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
