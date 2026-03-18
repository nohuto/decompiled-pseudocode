/*
 * XREFs of PopAllocateHiberContext @ 0x1406FAC78
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MmGetHighestPhysicalPage @ 0x1401167C8 (MmGetHighestPhysicalPage.c)
 *     RtlSetAllBits @ 0x14012CF30 (RtlSetAllBits.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x14021EB3C (MmEmptyAllWorkingSets.c)
 *     MmFlushAllPages @ 0x140227320 (MmFlushAllPages.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     BgkResumePrepare @ 0x14042A5F4 (BgkResumePrepare.c)
 *     PopGetBitlockerKeyLocation @ 0x140431554 (PopGetBitlockerKeyLocation.c)
 *     PopAllocatePages @ 0x140432360 (PopAllocatePages.c)
 *     PopDiscardRange @ 0x140432FBC (PopDiscardRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140433288 (PopGenerateUnHibernatedMdl.c)
 *     PopGetHwConfigurationSignature @ 0x140433310 (PopGetHwConfigurationSignature.c)
 *     BcdOpenStore @ 0x1405AE300 (BcdOpenStore.c)
 *     PopBcdEstablishResumeObject @ 0x1405AE3A8 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x1406B3258 (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x1406B32F4 (VslAllocateSecureHibernateResources.c)
 *     IoGetDumpStack @ 0x1406B6E44 (IoGetDumpStack.c)
 *     MmMarkHiberRange @ 0x1406E2544 (MmMarkHiberRange.c)
 *     PopLoadResumeContext @ 0x1406F5168 (PopLoadResumeContext.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 *     PopHiberInitializeResources @ 0x1406FBB38 (PopHiberInitializeResources.c)
 *     PopBcdSetPendingResume @ 0x14070B558 (PopBcdSetPendingResume.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 */

__int64 PopAllocateHiberContext()
{
  int DumpStack; // esi
  __int64 HighestPhysicalPage; // rax
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID v5; // r8
  unsigned __int64 PteAddress; // rax
  __int16 v7; // r8
  ULONG_PTR *v8; // r15
  char v9; // cl
  ULONG_PTR v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  PVOID Pages; // rax
  __int64 **v25; // r15
  __int64 *i; // rsi
  int v27; // eax
  PVOID *v28; // r12
  __int64 v29; // r13
  char *v30; // rax
  PVOID *v31; // rsi
  __int64 v32; // rbp
  PMDL UnHibernatedMdl; // rax
  __int64 v34; // rcx
  PMDL v35; // rax
  unsigned __int64 v37; // [rsp+70h] [rbp+8h] BYREF
  __int64 v38; // [rsp+78h] [rbp+10h] BYREF

  if ( dword_140365808 == 5 )
  {
    v37 = 0LL;
    HighestPhysicalPage = MmGetHighestPhysicalPage(0);
    v2 = (char *)MemoryMap;
    BugCheckParameter4 = (ULONG_PTR)MemoryMap;
    PopHiberScratchPages = PopHiberLoaderScratchPages
                         + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
    memset(MemoryMap, 0, 0x1D0uLL);
    v5 = qword_140365B50;
    if ( (dword_140400104 & 2) == 0 )
    {
      PteAddress = MiGetPteAddress((unsigned __int64)qword_140365B50);
      MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((v7 & 0xFFF) + Length + 4095) >> 12) - 1), 1);
    }
    PopNumberOfPagesForHibernateProcess = 0;
    *((_OWORD *)v2 + 3) = xmmword_140365B70;
    *((_QWORD *)v2 + 25) = qword_140365B60;
    *((_QWORD *)v2 + 41) = qword_140365BB0;
    *((_QWORD *)v2 + 27) = qword_140365B90;
    *((_QWORD *)v2 + 29) = qword_140365BC0;
    *((_QWORD *)v2 + 30) = qword_140365BB8;
    *((_OWORD *)v2 + 2) = xmmword_140365B80;
    *((_QWORD *)v2 + 9) = v2 + 64;
    *((_QWORD *)v2 + 8) = v2 + 64;
    if ( !FileObject )
    {
      DumpStack = -1073741809;
      goto LABEL_60;
    }
    v8 = (ULONG_PTR *)(v2 + 168);
    DumpStack = IoGetDumpStack(v4, (__int64)(v2 + 168), (__int64)v5, PopSimulate & 0x10);
    if ( DumpStack < 0 )
      goto LABEL_60;
    v9 = 0;
    v10 = *v8;
    if ( dword_1403657EC < 0 )
    {
      v9 = 0;
      if ( dword_1403657F4 == 2 )
        v9 = 2;
    }
    v11 = *((_QWORD *)v2 + 27);
    v2[1] = v9 | 1;
    v12 = qword_140365B68;
    v13 = qword_140365B68 & 0xFFF;
    *(_QWORD *)v11 = 0LL;
    *(_WORD *)(v11 + 10) = 0;
    *(_DWORD *)(v11 + 40) = 98304;
    *(_WORD *)(v11 + 8) = 8 * (((unsigned __int64)(v13 + 102399) >> 12) + 6);
    *(_QWORD *)(v11 + 32) = v12 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v2 + 27));
    v14 = *((_QWORD *)v2 + 29);
    if ( v14 )
    {
      v15 = qword_140365BB8;
      v16 = qword_140365BB8;
      *(_QWORD *)v14 = 0LL;
      *(_WORD *)(v14 + 10) = 0;
      *(_DWORD *)(v14 + 40) = 4096;
      *(_WORD *)(v14 + 8) = 8 * ((((unsigned __int64)(v16 & 0xFFF) + 0x1FFF) >> 12) + 6);
      *(_QWORD *)(v14 + 32) = v15 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v14 + 44) = v15 & 0xFFF;
      MmBuildMdlForNonPagedPool(*((PMDL *)v2 + 29));
    }
    DumpStack = PopLoadResumeContext((__int64)v2);
    if ( DumpStack < 0 )
      goto LABEL_60;
    DumpStack = BcdOpenStore(v4, 2u, (__int64)&v38);
    if ( DumpStack < 0 )
      goto LABEL_60;
    v17 = v38;
    DumpStack = PopBcdEstablishResumeObject(v38, &v37);
    v20 = v17;
    if ( DumpStack < 0
      || (DumpStack = PopBcdSetPendingResume(v17, v18, v19, v37), BcdCloseObject(v37), v20 = v17, DumpStack < 0) )
    {
      BcdCloseStore(v20);
    }
    else
    {
      BcdForciblyUnloadStore(v17);
      RtlClearAllBits((PRTL_BITMAP)v2 + 2);
      RtlSetAllBits((PRTL_BITMAP)v2 + 3);
      *((_DWORD *)v2 + 114) = PopGetHwConfigurationSignature();
      PopHiberInitializeResources(v2);
      if ( (int)PopGetBitlockerKeyLocation((__int64 *)&v37) >= 0 )
      {
        v21 = v37 >> 12;
        *((_QWORD *)v2 + 40) = v37 >> 12;
        PopDiscardRange((struct _RTL_BITMAP *)v2, v21, 4u);
      }
      if ( !KdPitchDebugger || KdEventLoggingEnabled )
      {
        PoSetHiberRange(v2, 2u, &KdTimerDifference, 0LL, 0x20676244u);
        PoSetHiberRange(v2, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
      }
      MmMarkHiberRange((__int64)v2, xmmword_140365B28);
      ((void (__fastcall *)(char *))off_1403532E8[0])(v2);
      v22 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
      *((_DWORD *)v2 + 38) = v22;
      if ( *((_QWORD *)v2 + 31) )
      {
        v23 = *((unsigned int *)v2 + 64);
        if ( v23 > v22 )
          *((_DWORD *)v2 + 38) = v23;
      }
      Pages = PopAllocatePages(*((unsigned int *)v2 + 38));
      DumpStack = *((_DWORD *)v2 + 47);
      *((_QWORD *)v2 + 18) = Pages;
      if ( DumpStack < 0 )
        goto LABEL_60;
      if ( *(_BYTE *)(*v8 + 280) )
      {
        v25 = (__int64 **)(*(_QWORD *)(*v8 + 272) + 40LL);
        for ( i = *v25; i != (__int64 *)v25; i = (__int64 *)*i )
        {
          v27 = *((_DWORD *)i + 16);
          if ( v27 )
          {
            if ( (v27 & 0xFFF) != 0 )
            {
              PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
              PopInternalAddToDumpFile((__int64)v2, 0x1D0u, 0LL);
              KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v10, (ULONG_PTR)v2);
            }
            v28 = (PVOID *)(i + 9);
            v29 = 2LL;
            do
            {
              if ( *v28 )
                PoSetHiberRange(v2, 0x8000u, *v28, *((unsigned int *)i + 16), 0x66756263u);
              ++v28;
              --v29;
            }
            while ( v29 );
          }
        }
LABEL_47:
        UnHibernatedMdl = PopGenerateUnHibernatedMdl(v4, (unsigned int)PopHiberScratchPages);
        *((_QWORD *)v2 + 15) = UnHibernatedMdl;
        if ( !UnHibernatedMdl )
        {
          MmEmptyAllWorkingSets();
          MmFlushAllPages();
          v35 = PopGenerateUnHibernatedMdl(v34, (unsigned int)PopHiberScratchPages);
          *((_QWORD *)v2 + 15) = v35;
          if ( !v35 )
          {
            DumpStack = -1073741670;
            goto LABEL_60;
          }
        }
        if ( VslVsmEnabled )
        {
          v2[460] = 1;
          DumpStack = VslAllocateSecureHibernateResources(v2);
          if ( DumpStack < 0 )
            goto LABEL_60;
        }
        else
        {
          v2[460] = 0;
        }
        if ( (int)BgkResumePrepare(v2) >= 0 )
          PopBgkResumePrepared = 1;
        *((_DWORD *)v2 + 48) = *((_DWORD *)v2 + 66) - 1;
        if ( (HvlpFlags & 2) != 0 )
          HvlpAllocatePageListResources();
        DumpStack = 0;
        goto LABEL_59;
      }
      v30 = (char *)PopAllocatePages(16LL);
      *(_QWORD *)(v10 + 8) = v30;
      if ( v30 )
      {
        PoSetHiberRange(v2, 0x8000u, v30 + 0x2000, 0xE000uLL, 0x6D656D44u);
        if ( (*(_DWORD *)(v10 + 112) & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile(v10, 0x108u, 0LL);
          PopInternalAddToDumpFile((__int64)v2, 0x1D0u, 0LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v10, (ULONG_PTR)v2);
        }
        v31 = (PVOID *)(v10 + 16);
        v32 = 2LL;
        do
        {
          if ( *v31 )
            PoSetHiberRange(v2, 0x8000u, *v31, *(unsigned int *)(v10 + 112), 0x66756263u);
          ++v31;
          --v32;
        }
        while ( v32 );
        goto LABEL_47;
      }
      DumpStack = *((_DWORD *)v2 + 47);
    }
LABEL_59:
    if ( DumpStack >= 0 )
      return (unsigned int)DumpStack;
LABEL_60:
    PopFreeHiberContext(v4, v3, v5);
    return (unsigned int)DumpStack;
  }
  return 0;
}
