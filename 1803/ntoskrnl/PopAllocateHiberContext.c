/*
 * XREFs of PopAllocateHiberContext @ 0x1405F00AC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     RtlSetAllBits @ 0x14007D2B0 (RtlSetAllBits.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     MmGetHighestPhysicalPage @ 0x1401063D0 (MmGetHighestPhysicalPage.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x14025A990 (MmEmptyAllWorkingSets.c)
 *     MmFlushAllPages @ 0x1402602D0 (MmFlushAllPages.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 *     BgkResumePrepare @ 0x140476898 (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x1404772B8 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x1404773C8 (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x140477434 (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x1404774BC (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x140477654 (PopGetHwConfigurationSignature.c)
 *     PopBcdSetPendingResume @ 0x1405ECAD4 (PopBcdSetPendingResume.c)
 *     BcdForciblyUnloadStore @ 0x1405EE29C (BcdForciblyUnloadStore.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     IoGetDumpStack @ 0x1405EFA68 (IoGetDumpStack.c)
 *     PopLoadResumeContext @ 0x1405EFAB8 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1405EFC6C (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1405EFF24 (MmMarkHiberRange.c)
 *     PopBcdEstablishResumeObject @ 0x140606DDC (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140606F5C (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1406077C0 (BcdOpenStore.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140717E88 (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x140717F24 (VslAllocateSecureHibernateResources.c)
 */

__int64 PopAllocateHiberContext()
{
  __int64 HighestPhysicalPage; // rax
  char *v1; // rbx
  unsigned __int64 PteAddress; // rax
  __int16 v3; // dx
  UNICODE_STRING *v4; // rcx
  __int64 v5; // r8
  ULONG_PTR *v6; // r15
  int DumpStack; // esi
  ULONG_PTR v8; // r14
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  HANDLE v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  PVOID Pages; // rax
  char *v22; // rax
  PVOID *v23; // rsi
  __int64 v24; // rbp
  PMDL UnHibernatedMdl; // rax
  __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int64 v29; // rdx
  __int64 **v30; // r15
  __int64 *i; // rsi
  int v32; // eax
  PVOID *v33; // r12
  __int64 v34; // r13
  __int64 v35; // rcx
  PMDL v36; // rax
  char SystemInformation; // [rsp+70h] [rbp+8h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp+10h] BYREF
  HANDLE BcdStoreHandle; // [rsp+80h] [rbp+18h] BYREF

  if ( dword_1403AA088 != 5 )
    return 0;
  BcdObjectHandle = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v1 = (char *)MemoryMap;
  BugCheckParameter4 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  PteAddress = MiGetPteAddress((unsigned __int64)qword_1403AA1D0);
  MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((v3 & 0xFFF) + Length + 4095) >> 12) - 1), 1);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_1403AA1F0;
  *((_QWORD *)v1 + 25) = qword_1403AA1E0;
  *((_QWORD *)v1 + 40) = qword_1403AA230;
  *((_QWORD *)v1 + 27) = qword_1403AA210;
  *((_QWORD *)v1 + 28) = qword_1403AA240;
  *((_QWORD *)v1 + 29) = qword_1403AA238;
  *((_OWORD *)v1 + 2) = xmmword_1403AA200;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    goto LABEL_41;
  }
  v6 = (ULONG_PTR *)(v1 + 168);
  DumpStack = IoGetDumpStack((__int64)v4, (__int64)(v1 + 168), v5, PopSimulate & 0x10);
  if ( DumpStack < 0 )
    goto LABEL_41;
  v8 = *v6;
  v9 = 0;
  if ( dword_1403AA06C < 0 )
  {
    v9 = 0;
    if ( dword_1403AA074 == 2 )
      v9 = 2;
  }
  v10 = *((_QWORD *)v1 + 27);
  v1[1] = v9 | 1;
  v11 = qword_1403AA1E8;
  v12 = qword_1403AA1E8 & 0xFFF;
  *(_QWORD *)v10 = 0LL;
  *(_WORD *)(v10 + 10) = 0;
  *(_DWORD *)(v10 + 40) = 98304;
  *(_WORD *)(v10 + 8) = 8 * (((unsigned __int64)(v12 + 102399) >> 12) + 6);
  *(_QWORD *)(v10 + 32) = v11 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v10 + 44) = v11 & 0xFFF;
  MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 27));
  v13 = *((_QWORD *)v1 + 28);
  if ( v13 )
  {
    v27 = qword_1403AA238;
    v28 = qword_1403AA238;
    *(_QWORD *)v13 = 0LL;
    *(_WORD *)(v13 + 10) = 0;
    *(_DWORD *)(v13 + 40) = 4096;
    *(_WORD *)(v13 + 8) = 8 * ((((unsigned __int64)(v28 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v13 + 32) = v27 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v13 + 44) = v27 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 28));
  }
  DumpStack = PopLoadResumeContext((__int64)v1);
  if ( DumpStack < 0 )
    goto LABEL_41;
  DumpStack = BcdOpenStore(v4, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle);
  if ( DumpStack < 0 )
    goto LABEL_41;
  v14 = BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle);
  v17 = v14;
  if ( DumpStack < 0
    || (DumpStack = PopBcdSetPendingResume(v14, v15, v16, BcdObjectHandle),
        BcdCloseObject(BcdObjectHandle),
        v17 = v14,
        DumpStack < 0) )
  {
    BcdCloseStore(v17);
    goto LABEL_38;
  }
  BcdForciblyUnloadStore(v14);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v1);
  if ( (int)PopGetBitlockerKeyLocation((__int64 *)&BcdObjectHandle) >= 0 )
  {
    v29 = (unsigned __int64)BcdObjectHandle >> 12;
    *((_QWORD *)v1 + 39) = (unsigned __int64)BcdObjectHandle >> 12;
    PopDiscardRange((_RTL_BITMAP *)v1, v29, 4u);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v1, xmmword_1403AA1A8);
  ((void (__fastcall *)(char *))off_140398688[0])(v1);
  v18 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v19 = v18;
  *((_DWORD *)v1 + 38) = v18;
  if ( *((_QWORD *)v1 + 30) )
  {
    v20 = *((unsigned int *)v1 + 62);
    if ( v20 > v18 )
    {
      *((_DWORD *)v1 + 38) = v20;
      v19 = v20;
    }
  }
  Pages = PopAllocatePages(v19);
  DumpStack = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = Pages;
  if ( DumpStack < 0 )
    goto LABEL_41;
  if ( *(_BYTE *)(*v6 + 280) )
  {
    v30 = (__int64 **)(*(_QWORD *)(*v6 + 272) + 40LL);
    for ( i = *v30; i != (__int64 *)v30; i = (__int64 *)*i )
    {
      v32 = *((_DWORD *)i + 16);
      if ( v32 )
      {
        if ( (v32 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v8, (ULONG_PTR)v1);
        }
        v33 = (PVOID *)(i + 9);
        v34 = 2LL;
        do
        {
          if ( *v33 )
            PoSetHiberRange(v1, 0x8000u, *v33, *((unsigned int *)i + 16), 0x66756263u);
          ++v33;
          --v34;
        }
        while ( v34 );
      }
    }
  }
  else
  {
    v22 = (char *)PopAllocatePages(16LL);
    *(_QWORD *)(v8 + 8) = v22;
    if ( !v22 )
    {
      DumpStack = *((_DWORD *)v1 + 47);
      goto LABEL_38;
    }
    PoSetHiberRange(v1, 0x8000u, v22 + 0x2000, 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v8 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v8, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v8, (ULONG_PTR)v1);
    }
    v23 = (PVOID *)(v8 + 16);
    v24 = 2LL;
    do
    {
      if ( *v23 )
        PoSetHiberRange(v1, 0x8000u, *v23, *(unsigned int *)(v8 + 112), 0x66756263u);
      ++v23;
      --v24;
    }
    while ( v24 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v4, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v1 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    MmEmptyAllWorkingSets();
    MmFlushAllPages();
    v36 = PopGenerateUnHibernatedMdl(v35, (unsigned int)PopHiberScratchPages);
    *((_QWORD *)v1 + 15) = v36;
    if ( !v36 )
    {
      DumpStack = -1073741670;
      goto LABEL_41;
    }
  }
  if ( VslVsmEnabled )
  {
    v1[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v1);
    if ( DumpStack < 0 )
      goto LABEL_41;
  }
  else
  {
    v1[452] = 0;
  }
  if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
    v1[453] = SystemInformation;
  if ( (int)BgkResumePrepare(v1) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 64) - 1;
  if ( (HvlpFlags & 2) != 0 )
    HvlpAllocatePageListResources();
  DumpStack = 0;
LABEL_38:
  if ( DumpStack < 0 )
LABEL_41:
    PopFreeHiberContext(v4);
  return (unsigned int)DumpStack;
}
