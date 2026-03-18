/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1405129E8
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     PsReturnProcessQuota @ 0x1400703DC (PsReturnProcessQuota.c)
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     MiSyncSystemPdes @ 0x1400709B4 (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140070A08 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x140070A20 (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x140070F24 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x1400718EC (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x140071920 (PsGetDefaultWsMaximum.c)
 *     RtlRandomEx @ 0x140071930 (RtlRandomEx.c)
 *     MiSetProcessPartitionId @ 0x140071958 (MiSetProcessPartitionId.c)
 *     MiPartitionActive @ 0x140071968 (MiPartitionActive.c)
 *     MiCheckWsLimits @ 0x1400C924C (MiCheckWsLimits.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x140512D68 (MiJoinSession.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 */

char __fastcall MmCreateProcessAddressSpace(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int16 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdx
  ULONG_PTR v13; // rbp
  __int64 TopLevelPage; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = a3;
  v23 = a2;
  v5 = PspMinimumWorkingSet;
  v7 = a5;
  v8 = a3;
  v22 = PspMinimumWorkingSet;
  if ( a1 )
    v9 = **(__int16 ***)(a5 + 2096);
  else
    v9 = (__int16 *)&MiSystemPartition;
  MiPartitionActive((__int64)v9);
  MiSetProcessPartitionId(v7, *v9);
  if ( !(unsigned int)MiChargeCommit((__int64)v9, 4uLL, 0) )
    return 0;
  *(_DWORD *)(v7 + 1280) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v7 + 1944) = v7 + 1936;
  *(_QWORD *)(v7 + 1936) = v7 + 1936;
  *(_QWORD *)(v7 + 1928) = 0LL;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v7 + 1280, (unsigned __int64 *)&v22, &v24, a4, 1);
    v8 = v24;
    v5 = v22;
  }
  *(_QWORD *)(v7 + 1392) = v5;
  *(_QWORD *)(v7 + 1432) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v7 + 1464) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v7, v10, v5) < 0 )
  {
LABEL_26:
    MiReturnCommit((__int64)v9, 4uLL);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v9, v5, 0LL, v11) )
  {
LABEL_25:
    PsReturnProcessQuota((struct _KPROCESS *)v7, v12, v5);
    goto LABEL_26;
  }
  v13 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  if ( !v13 )
  {
LABEL_22:
    if ( v9 == (__int16 *)&MiSystemPartition )
      MiReturnResidentAvailable(v5);
    else
      MiReturnPartitionResidentAvailable((__int64)v9, v5);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v7) < 0 )
  {
LABEL_21:
    MiReleasePtes((__int64)&qword_1403CC5E0, v13, 1uLL);
    goto LABEL_22;
  }
  if ( !(unsigned int)MiJoinSession(&v23) )
  {
    MiDeleteProcessShadow(v7, 0);
    goto LABEL_21;
  }
  *(_QWORD *)(v7 + 1264) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v7, v13);
  v15 = v23;
  v16 = TopLevelPage;
  if ( v23 )
  {
    *(_QWORD *)(v7 + 1024) = v23;
    _InterlockedOr((volatile signed __int32 *)(v7 + 772), 0x10000u);
    v15 = v23;
  }
  MiInsertNewProcess((_QWORD *)v7, v15);
  MiCreateNewProcessTopLevelMappings(v7, (__int64)(v13 << 25) >> 16);
  *(_QWORD *)(((__int64)(v13 << 25) >> 16) + 0xF68) = MiMakeValidPte(0LL, v16, 2415919110LL, v17) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( MiPteInShadowRange(((__int64)(v13 << 25) >> 16) + 3944) )
    MiWritePteShadow(v19, v18, v20);
  *(_QWORD *)(v7 + 40) = KeMakeKernelDirectoryTableBase(v16 << 12);
  MiSyncSystemPdes(v7);
  MiReleasePtes((__int64)&qword_1403CC5E0, v13, 1uLL);
  return 1;
}
