/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C0040DF8
 * Callers:
 *     UmfdDrvFree @ 0x1C003F0A0 (UmfdDrvFree.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C003F2A0 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C003F700 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00401B0 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0040D74 (UmfdTrueTypeFreeGlyphset.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C003FC3C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  PVOID v1; // rbx
  char *v2; // rdi
  unsigned __int64 v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = UmfdAllocation::s_allocationLookupLock;
  v2 = a1 - 28;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  if ( (*(_DWORD *)v2)-- == 1 )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v4 = *((_QWORD *)v2 + 2);
      if ( v4 )
      {
        v5 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(
          (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
          v4,
          &v5);
      }
    }
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    EngFreeMem(v2);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
