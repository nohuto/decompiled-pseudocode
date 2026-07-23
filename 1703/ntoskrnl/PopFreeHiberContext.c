/*
 * XREFs of PopFreeHiberContext @ 0x140577660
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140033E40 (MmFreePagesFromMdl.c)
 *     MiUnlockCodePage @ 0x14006D068 (MiUnlockCodePage.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BgkResumeFinished @ 0x140409F64 (BgkResumeFinished.c)
 *     MmReleaseDumpHibernateResources @ 0x140577870 (MmReleaseDumpHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x14057D3F0 (PopClearHiberFileSignature.c)
 *     PopBcdClearPendingResume @ 0x140589704 (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x140589990 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     VslFreeSecureHibernateResources @ 0x140687E08 (VslFreeSecureHibernateResources.c)
 */

void __fastcall PopFreeHiberContext(UNICODE_STRING *a1, BCD_OPEN_FLAGS a2)
{
  ULONG_PTR v2; // rbx
  void *v3; // rcx
  __int64 v4; // rdi
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 **v8; // rax
  PVOID v9; // rdx
  unsigned __int64 PteAddress; // rax
  __int16 v11; // dx
  void *v12; // rcx
  __int64 v13; // rcx
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  v2 = qword_14034B1C0;
  if ( qword_14034B1C0 )
  {
    if ( BcdOpenStore(a1, a2, &BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v3 = *(void **)(v2 + 248);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(v2 + 248) = 0LL;
    }
    while ( *(_QWORD *)(v2 + 128) )
    {
      v4 = *(_QWORD *)(v2 + 128);
      *(_QWORD *)(v2 + 128) = *(_QWORD *)v4;
      *(_QWORD *)(v2 + 136) -= (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
      if ( (*(_BYTE *)(v4 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
      MmFreePagesFromMdl((PMDL)v4);
      ExFreePoolWithTag((PVOID)v4, 0);
    }
    *(_QWORD *)(v2 + 240) = 0LL;
    v5 = (__int64 **)(v2 + 64);
    *(_QWORD *)(v2 + 232) = 0LL;
    while ( *v5 != (__int64 *)v5 )
    {
      v6 = *v5;
      v7 = **v5;
      v8 = (__int64 **)(*v5)[1];
      if ( *(__int64 **)(v7 + 8) != *v5 || *v8 != v6 )
        __fastfail(3u);
      *v8 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v6, 0);
      --*(_DWORD *)(v2 + 80);
    }
    if ( *(_QWORD *)(v2 + 168) && CrashdmpImageEntry && qword_14036E550 )
      qword_14036E550();
    if ( *(_QWORD *)(v2 + 136) )
    {
      PopInternalAddToDumpFile(v2, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v2, 0LL);
    }
    if ( *(_DWORD *)(v2 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v2 + 28) = 0;
    v9 = qword_14034B2F0;
    if ( (dword_1403E3104 & 2) == 0 )
    {
      PteAddress = MiGetPteAddress((unsigned __int64)qword_14034B2F0);
      MiUnlockCodePage(PteAddress, PteAddress + 8 * (((Length + 4095 + (v11 & 0xFFF)) >> 12) - 1));
    }
    v12 = *(void **)(v2 + 296);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x72626968u);
    v13 = *(_QWORD *)(v2 + 312);
    if ( v13 )
      MmReleaseDumpHibernateResources(v13, (unsigned int)(*(_DWORD *)(v2 + 264) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v2 + 460) )
      VslFreeSecureHibernateResources(v13, v9);
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
    }
    memset((void *)v2, 0, 0x1D0uLL);
    qword_14034B1C0 = 0LL;
  }
}
