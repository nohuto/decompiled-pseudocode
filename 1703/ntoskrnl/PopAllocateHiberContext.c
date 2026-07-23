/*
 * XREFs of PopAllocateHiberContext @ 0x14057AF78
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     MmBuildMdlForNonPagedPool @ 0x14005A730 (MmBuildMdlForNonPagedPool.c)
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MmGetHighestPhysicalPage @ 0x1400DD8FC (MmGetHighestPhysicalPage.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     RtlSetAllBits @ 0x14012DAF0 (RtlSetAllBits.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x140215A74 (MmEmptyAllWorkingSets.c)
 *     MmFlushAllPages @ 0x14021AAD4 (MmFlushAllPages.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     PopGetHwConfigurationSignature @ 0x14040BD00 (PopGetHwConfigurationSignature.c)
 *     BgkResumePrepare @ 0x14040CFC0 (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x14040DDD0 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x14040DF10 (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x14040E09C (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x14040E124 (PopGetBitlockerKeyLocation.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     IoGetDumpStack @ 0x14057A260 (IoGetDumpStack.c)
 *     PopLoadResumeContext @ 0x14057A470 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x14057AC78 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x14057AF34 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x14057B770 (BcdForciblyUnloadStore.c)
 *     PopBcdSetPendingResume @ 0x14057B828 (PopBcdSetPendingResume.c)
 *     BcdOpenStore @ 0x140589990 (BcdOpenStore.c)
 *     PopBcdEstablishResumeObject @ 0x1405899F4 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140687838 (HvlpAllocatePageListResources.c)
 */

__int64 PopAllocateHiberContext()
{
  __int64 HighestPhysicalPage; // rax
  char *v1; // rbx
  BCD_OPEN_FLAGS v2; // edx
  UNICODE_STRING *v3; // rcx
  PVOID v4; // r8
  unsigned __int64 PteAddress; // rax
  __int16 v6; // r8
  ULONG_PTR *v7; // r15
  int DumpStack; // esi
  char v9; // cl
  ULONG_PTR v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  HANDLE v15; // rbp
  void *v16; // rcx
  unsigned __int64 v17; // rcx
  PVOID Pages; // rax
  char *v19; // rax
  PVOID *v20; // rsi
  __int64 v21; // rbp
  PMDL UnHibernatedMdl; // rax
  __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v26; // rdx
  __int64 **v27; // r15
  __int64 *i; // rsi
  int v29; // eax
  PVOID *v30; // r12
  __int64 v31; // r13
  PMDL v32; // rax
  HANDLE BcdStoreHandle; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v34[112]; // [rsp+40h] [rbp-A8h] BYREF

  if ( dword_14034B1A8 != 5 )
    return 0;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v1 = (char *)MemoryMap;
  qword_14034B1C0 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + (((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1D0uLL);
  v4 = qword_14034B2F0;
  if ( (dword_1403E3104 & 2) == 0 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)qword_14034B2F0);
    MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((v6 & 0xFFF) + Length + 4095) >> 12) - 1), 1);
  }
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_14034B310;
  *((_QWORD *)v1 + 25) = qword_14034B300;
  *((_QWORD *)v1 + 41) = qword_14034B350;
  *((_QWORD *)v1 + 27) = qword_14034B330;
  *((_QWORD *)v1 + 29) = qword_14034B360;
  *((_QWORD *)v1 + 30) = qword_14034B358;
  *((_OWORD *)v1 + 2) = xmmword_14034B320;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    goto LABEL_42;
  }
  v7 = (ULONG_PTR *)(v1 + 168);
  DumpStack = IoGetDumpStack((__int64)v3, (__int64)(v1 + 168), (__int64)v4, PopSimulate & 0x10);
  if ( DumpStack < 0 )
    goto LABEL_42;
  v9 = 0;
  v10 = *v7;
  if ( dword_14034B18C < 0 )
  {
    v9 = 0;
    if ( dword_14034B194 == 2 )
      v9 = 2;
  }
  v11 = *((_QWORD *)v1 + 27);
  v1[1] = v9 | 1;
  v12 = qword_14034B308;
  v13 = qword_14034B308 & 0xFFF;
  *(_QWORD *)v11 = 0LL;
  *(_WORD *)(v11 + 10) = 0;
  *(_DWORD *)(v11 + 40) = 98304;
  *(_WORD *)(v11 + 8) = 8 * (((unsigned __int64)(v13 + 102399) >> 12) + 6);
  *(_QWORD *)(v11 + 32) = v12 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
  MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 27));
  v14 = *((_QWORD *)v1 + 29);
  if ( v14 )
  {
    v24 = qword_14034B358;
    v25 = qword_14034B358;
    *(_QWORD *)v14 = 0LL;
    *(_WORD *)(v14 + 10) = 0;
    *(_DWORD *)(v14 + 40) = 4096;
    *(_WORD *)(v14 + 8) = 8 * ((((unsigned __int64)(v25 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v14 + 32) = v24 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v14 + 44) = v24 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 29));
  }
  DumpStack = PopLoadResumeContext((__int64)v1);
  if ( DumpStack < 0 )
    goto LABEL_42;
  DumpStack = BcdOpenStore(v3, v2, &BcdStoreHandle);
  if ( DumpStack < 0 )
    goto LABEL_42;
  v15 = BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle);
  v16 = v15;
  if ( DumpStack < 0 || (DumpStack = PopBcdSetPendingResume(v15), BcdCloseObject(0LL), v16 = v15, DumpStack < 0) )
  {
    BcdCloseStore(v16);
    goto LABEL_39;
  }
  BcdForciblyUnloadStore(v15);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 114) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v1);
  if ( (int)PopGetBitlockerKeyLocation((__int64 *)&BcdStoreHandle) >= 0 )
  {
    v26 = (unsigned __int64)BcdStoreHandle >> 12;
    *((_QWORD *)v1 + 40) = (unsigned __int64)BcdStoreHandle >> 12;
    PopDiscardRange((_RTL_BITMAP *)v1, v26, 4u);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v1, xmmword_14034B2C8);
  ((void (__fastcall *)(char *))off_14033B2B8[0])(v1);
  v17 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  *((_DWORD *)v1 + 38) = v17;
  if ( *((_QWORD *)v1 + 31) )
  {
    if ( *((unsigned int *)v1 + 64) > v17 )
      LODWORD(v17) = *((_DWORD *)v1 + 64);
    *((_DWORD *)v1 + 38) = v17;
  }
  Pages = PopAllocatePages(*((unsigned int *)v1 + 38));
  DumpStack = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = Pages;
  if ( DumpStack < 0 )
    goto LABEL_42;
  if ( *(_BYTE *)(*v7 + 280) )
  {
    v27 = (__int64 **)(*(_QWORD *)(*v7 + 272) + 32LL);
    for ( i = *v27; i != (__int64 *)v27; i = (__int64 *)*i )
    {
      v29 = *((_DWORD *)i + 24);
      if ( v29 )
      {
        if ( (v29 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x90u, 0LL);
          PopInternalAddToDumpFile((__int64)v1, 0x1D0u, 0LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v10, (ULONG_PTR)v1);
        }
        v30 = (PVOID *)(i + 13);
        v31 = 2LL;
        do
        {
          if ( *v30 )
            PoSetHiberRange(v1, 0x8000u, *v30, *((unsigned int *)i + 24), 0x66756263u);
          ++v30;
          --v31;
        }
        while ( v31 );
      }
    }
  }
  else
  {
    v19 = (char *)PopAllocatePages(16LL);
    *(_QWORD *)(v10 + 8) = v19;
    if ( !v19 )
    {
      DumpStack = *((_DWORD *)v1 + 47);
      goto LABEL_39;
    }
    PoSetHiberRange(v1, 0x8000u, v19 + 0x2000, 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v10 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v10, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v1, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v10, (ULONG_PTR)v1);
    }
    v20 = (PVOID *)(v10 + 16);
    v21 = 2LL;
    do
    {
      if ( *v20 )
        PoSetHiberRange(v1, 0x8000u, *v20, *(unsigned int *)(v10 + 112), 0x66756263u);
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v1 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    MmEmptyAllWorkingSets();
    MmFlushAllPages();
    v32 = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
    *((_QWORD *)v1 + 15) = v32;
    if ( !v32 )
    {
      DumpStack = -1073741670;
      goto LABEL_42;
    }
  }
  if ( VslVsmEnabled )
  {
    v1[460] = 1;
    DumpStack = VslpEnterIumSecureMode(1, 33LL, 0LL, (__int64)v34);
    if ( DumpStack < 0 )
      goto LABEL_42;
  }
  else
  {
    v1[460] = 0;
  }
  if ( (int)BgkResumePrepare(v1) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 66) - 1;
  if ( (HvlpFlags & 2) != 0 )
    HvlpAllocatePageListResources();
  DumpStack = 0;
LABEL_39:
  if ( DumpStack < 0 )
LABEL_42:
    PopFreeHiberContext(v3, v2);
  return (unsigned int)DumpStack;
}
