/*
 * XREFs of PopFreeHiberContext @ 0x1405EF808
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140476810 (PopUnlockAfterSleepWorker.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1400A19C0 (MiUnlockCodePage.c)
 *     MmFreePagesFromMdl @ 0x1400CEF30 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BgkResumeFinished @ 0x1404767D0 (BgkResumeFinished.c)
 *     MmReleaseDumpHibernateResources @ 0x1405EFA0C (MmReleaseDumpHibernateResources.c)
 *     PopBcdClearPendingResume @ 0x1406064FC (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x140606F5C (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1406077C0 (BcdOpenStore.c)
 *     PopClearHiberFileSignature @ 0x14061422C (PopClearHiberFileSignature.c)
 *     VslFreeSecureHibernateResources @ 0x1407187F8 (VslFreeSecureHibernateResources.c)
 */

void __fastcall PopFreeHiberContext(UNICODE_STRING *a1)
{
  ULONG_PTR v1; // rbx
  void *v2; // rcx
  __int64 v3; // rdi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 PteAddress; // rax
  __int16 v9; // dx
  void *v10; // rcx
  __int64 v11; // rcx
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  v1 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    if ( BcdOpenStore(a1, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v2 = *(void **)(v1 + 240);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 240) = 0LL;
    }
    while ( 1 )
    {
      v3 = *(_QWORD *)(v1 + 128);
      if ( !v3 )
        break;
      *(_QWORD *)(v1 + 128) = *(_QWORD *)v3;
      *(_QWORD *)(v1 + 136) -= (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
      MmFreePagesFromMdl((PMDL)v3);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    *(_QWORD *)(v1 + 232) = 0LL;
    v4 = (_QWORD **)(v1 + 64);
    *(_QWORD *)(v1 + 224) = 0LL;
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v5, 0);
      --*(_DWORD *)(v1 + 80);
    }
    if ( *(_QWORD *)(v1 + 168) && CrashdmpImageEntry && qword_1403CDE00 )
      qword_1403CDE00();
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopInternalAddToDumpFile(v1, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v1, 0LL);
    }
    if ( *(_DWORD *)(v1 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v1 + 28) = 0;
    PteAddress = MiGetPteAddress((unsigned __int64)qword_1403AA1D0);
    MiUnlockCodePage(PteAddress, PteAddress + 8 * (((Length + 4095 + (v9 & 0xFFF)) >> 12) - 1));
    v10 = *(void **)(v1 + 288);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72626968u);
    v11 = *(_QWORD *)(v1 + 304);
    if ( v11 )
      MmReleaseDumpHibernateResources(v11, (unsigned int)(*(_DWORD *)(v1 + 256) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v1 + 452) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
    }
    memset((void *)v1, 0, 0x1C8uLL);
    BugCheckParameter4 = 0LL;
  }
}
