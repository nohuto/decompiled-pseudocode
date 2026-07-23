/*
 * XREFs of PopFreeHiberContext @ 0x1406FB8E8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     MmFreePagesFromMdl @ 0x140130F50 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BgkResumeFinished @ 0x14042A5B8 (BgkResumeFinished.c)
 *     PopBcdClearPendingResume @ 0x1405ADF4C (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x1405AE300 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     VslFreeSecureHibernateResources @ 0x1406B3BC8 (VslFreeSecureHibernateResources.c)
 *     MmReleaseDumpHibernateResources @ 0x1406E2588 (MmReleaseDumpHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x1406FB3D4 (PopClearHiberFileSignature.c)
 */

void __fastcall PopFreeHiberContext(UNICODE_STRING *a1)
{
  ULONG_PTR v1; // rbx
  void *v2; // rcx
  __int64 v3; // rdi
  __int64 **v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rdx
  __int64 *PteAddress; // rax
  __int16 v9; // dx
  void *v10; // rcx
  unsigned __int64 v11; // rcx
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  v1 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    if ( BcdOpenStore(a1, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v2 = *(void **)(v1 + 248);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 248) = 0LL;
    }
    while ( *(_QWORD *)(v1 + 128) )
    {
      v3 = *(_QWORD *)(v1 + 128);
      *(_QWORD *)(v1 + 128) = *(_QWORD *)v3;
      *(_QWORD *)(v1 + 136) -= (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
      MmFreePagesFromMdl((PMDL)v3);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    *(_QWORD *)(v1 + 240) = 0LL;
    v4 = (__int64 **)(v1 + 64);
    *(_QWORD *)(v1 + 232) = 0LL;
    while ( *v4 != (__int64 *)v4 )
    {
      v5 = *v4;
      v6 = **v4;
      if ( *(__int64 **)(v6 + 8) != *v4 || (v7 = (__int64 **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v5, 0);
      --*(_DWORD *)(v1 + 80);
    }
    if ( *(_QWORD *)(v1 + 168) && CrashdmpImageEntry && qword_140389FD0 )
      qword_140389FD0();
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopInternalAddToDumpFile(v1, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v1, 0LL);
    }
    if ( *(_DWORD *)(v1 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v1 + 28) = 0;
    if ( (dword_140400104 & 2) == 0 )
    {
      PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)qword_140365B50);
      MiUnlockCodePage(PteAddress, (unsigned __int64)&PteAddress[((Length + 4095 + (v9 & 0xFFF)) >> 12) - 1]);
    }
    v10 = *(void **)(v1 + 296);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72626968u);
    v11 = *(_QWORD *)(v1 + 312);
    if ( v11 )
      MmReleaseDumpHibernateResources(v11);
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v1 + 460) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
    }
    memset((void *)v1, 0, 0x1D0uLL);
    BugCheckParameter4 = 0LL;
  }
}
