/*
 * XREFs of RtlPcToFilePath @ 0x14078AB40
 * Callers:
 *     KitLogFeatureUsage @ 0x1402BC930 (KitLogFeatureUsage.c)
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
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
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
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
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegion();
  return v6;
}
